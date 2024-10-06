#include "MenuBase.h"

void UMenuBase::GoBack()
{
	if (!enabled) return;
	if (m_menuStack.Top() == EMainMenuSections::ERoot)
	{
		return;
	}
	TEnumAsByte<EMainMenuSections> curr = m_menuStack.Pop();

	USubMenuFunctionLibrary::SwitchMenu(*m_menuSections.Find(curr), *m_menuSections.Find(m_menuStack.Top()));
}

void UMenuBase::GoForward(const TEnumAsByte<EMainMenuSections> Next)
{
	if (!enabled) return;
	TEnumAsByte<EMainMenuSections> last = m_menuStack.Top();

	m_menuStack.Add(Next);

	USubMenuFunctionLibrary::SwitchMenu(*m_menuSections.Find(last), *m_menuSections.Find(m_menuStack.Top()));
}

void UMenuBase::QuitGameToDeskTop(const TEnumAsByte<EMainMenuSections> DummyParam)
{
	if (!enabled) return;
	FPlatformMisc::RequestExit(false);
}

void UMenuBase::HorizontalInput(const bool Right)
{
	if (!enabled) return;
	if (m_menuSections.Find(m_menuStack.Top())->m_subOptions.Num() == 0)
	{
		return;
	}
	UHorizontalBox* box = Cast<UHorizontalBox>(m_menuSections.Find(m_menuStack.Top())->m_subOptions[m_menuSections.Find(m_menuStack.Top())->m_selected]);
	if (!box)
	{
		return;
	}
	USlider* slider = Cast<USlider>(box->GetChildAt(1));
	if (!slider)
	{
		return;
	}
	float NewVal = slider->GetValue();
	NewVal += Right ? 0.1f : -0.1f;
	NewVal = FMath::Clamp(NewVal, slider->GetMinValue(), slider->GetMaxValue());
	OnSliderChangedDelegate.Broadcast();
	slider->SetValue(NewVal);
}

void UMenuBase::VerticalInput(const bool Up)
{
	if (!enabled) return;
	if (m_menuSections.Find(m_menuStack.Top())->m_subOptions.Num() == 0)
	{
		return;
	}
	if (Up)
	{
		USubMenuFunctionLibrary::SwitchSubMenuSelected(*m_menuSections.Find(m_menuStack.Top()), m_menuSections.Find(m_menuStack.Top())->m_selected - 1);
		return;
	}
	USubMenuFunctionLibrary::SwitchSubMenuSelected(*m_menuSections.Find(m_menuStack.Top()), m_menuSections.Find(m_menuStack.Top())->m_selected + 1);
}

void UMenuBase::ThePressingOfStart()
{
	if (!enabled) return;
	if (m_menuStack.Top() != EMainMenuSections::ERoot)
	{
		return;
	}
	GoForward(EMainMenuSections::EMain);
}

void UMenuBase::ButtonChecking()
{
	if (!enabled) return;
	FSubMenu& m = *m_menuSections.Find(m_menuStack.Top());
	if (m.m_subOptions.Num() == 0)
	{
		return;
	}
	UButton* b = Cast<UButton>(m.m_subOptions[m.m_selected]);
	if (!b)
	{
		return;
	}
	if (!m_buttonFunctionMap.Contains(b))
	{
		return;
	}
	std::invoke(m_buttonFunctionMap.Find(b)->MemberFunc, this, m_buttonFunctionMap.Find(b)->m_menuSection);
	//m_buttonFunctionMap.Find(b)->(m_buttonFunctionMap.Find(b)->m_menuSection);
}

void USubMenuFunctionLibrary::SwitchMenu(FSubMenu& Previous, FSubMenu& Next)
{
	Previous.m_base->SetVisibility(ESlateVisibility::Collapsed);
	Next.m_base->SetVisibility(ESlateVisibility::Visible);
	USubMenuFunctionLibrary::SwitchSubMenuSelected(Next, 0);
}

void USubMenuFunctionLibrary::SwitchSubMenuSelected(FSubMenu& SubMenu, const int NewSelected)
{
	if (SubMenu.m_subOptions.Num() == 0)
	{
		return;
	}
	UButton* button = Cast<UButton>(SubMenu.m_subOptions[SubMenu.m_selected]);
	if (button)
	{
		button->SetRenderScale(FVector2D(MenuUnselectedSize, MenuUnselectedSize));
		button->SetColorAndOpacity(MenuUnselectedColor);
	}
	else
	{
		UHorizontalBox* box = Cast<UHorizontalBox>(SubMenu.m_subOptions[SubMenu.m_selected]);
		if (box)
		{
			box->GetChildAt(0)->SetRenderScale(FVector2D(MenuUnselectedSize, MenuUnselectedSize));
			Cast<UTextBlock>(box->GetChildAt(0))->SetColorAndOpacity(MenuUnselectedColor);
		}
	}
	SubMenu.m_selected = FMath::Clamp(NewSelected, 0, SubMenu.m_subOptions.Num() - 1);
	button = Cast<UButton>(SubMenu.m_subOptions[SubMenu.m_selected]);
	if (button)
	{
		button->SetRenderScale(FVector2D(MenuSelectedSize, MenuSelectedSize));
		button->SetColorAndOpacity(MenuUnselectedColor);
	}
	else
	{
		UHorizontalBox* box = Cast<UHorizontalBox>(SubMenu.m_subOptions[SubMenu.m_selected]);
		if (box)
		{
			box->GetChildAt(0)->SetRenderScale(FVector2D(MenuSelectedSize));
			Cast<UTextBlock>(box->GetChildAt(0))->SetColorAndOpacity(MenuSelectedColor);
		}
	}
}