#include "MainMenu.h"

bool UMainMenuWidget::Initialize()
{
	Super::Initialize();

	if (WidgetTree)
	{
		m_root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), FName("Root"));

		WidgetTree->RootWidget = m_root;

		m_startPanel = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), FName("StartPanel"));

		m_startText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName("Press Start"));
		m_startText->SetText(FText::FromString("Press Start"));

		m_startPanel->AddChildToCanvas(m_startText);
		m_root->AddChildToCanvas(m_startPanel);

		auto GenButton = [&](UButton*& Button, FString&& Name) {
			Button = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), FName(Name));
			UTextBlock* StartText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(Name + FString(" Text")));
			StartText->SetText(FText::FromString(Name));
			Button->AddChild(StartText);
			};

		m_main = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), FName("Main"));
		m_main->SetVisibility(ESlateVisibility::Collapsed);
		UButton* StartButton;// = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), FName("Start Game"));
		GenButton(StartButton, FString("Start Game"));
		//UTextBlock* StartText = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), FName("Start Game Text"));
		//StartText->Text = FText::FromString("Start Game");
		//StartButton->AddChild(StartText);

		m_main->AddChildToVerticalBox(StartButton);

		UButton* SettingsButton;// = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), FName("SettingsButton"));
		GenButton(SettingsButton, FString("Settings"));

		m_buttonFunctionMap.Add(TPair<UButton*, FMenuButtonFunc>(SettingsButton, FMenuButtonFunc{ EMainMenuSections::ESettings, &UMainMenuWidget::GoForward }));
		//m_buttonFunctionMap.Add(TPair<UButton*, TFunction<void(const TEnumAsByte<EMainMenuSections>)>>(SettingsButton, [this] {&GoForward}));
		//m_buttonFunctionMap.Add(TPair<UButton*, TFunction<void(UMainMenuWidget::*)(const TEnumAsByte<EMainMenuSections>)>>{SettingsButton, &GoForward});

		m_main->AddChildToVerticalBox(SettingsButton);

		m_settings = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), FName("settingsBase"));
		m_settings->SetVisibility(ESlateVisibility::Collapsed);

		UButton* QuitButton;
		GenButton(QuitButton, FString("Quit"));

		m_buttonFunctionMap.Add(TPair<UButton*, FMenuButtonFunc>(QuitButton, FMenuButtonFunc{ EMainMenuSections::EMain, &UMainMenuWidget::QuitGame }));

		m_main->AddChildToVerticalBox(QuitButton);

		m_root->AddChildToCanvas(m_main);
		m_root->AddChildToCanvas(m_settings);
		{
			UCanvasPanelSlot* slot = Cast<UCanvasPanelSlot>(m_settings->Slot);

			if (slot)
			{
				slot->SetSize(slot->GetSize() * FVector2D(0, 1) + FVector2D(400, 0));
			}
		}

		auto GenSlider = [&](UHorizontalBox*& Box, FString&& Name) {
			Box = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), FName(Name + FString("Container")));
			/*UVerticalBoxSlot* slot = Cast<UVerticalBoxSlot>(Box->Slot);
			if (slot)
			{
				slot->SetSize(slot->GetSize() * FVector2D(0, 1) + FVector2D(400, 0));
			}*/
			UTextBlock* SoundTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(Name + FString("Text")));
			SoundTextBlock->SetText(FText::FromString(Name));
			USlider* SoundSlider = WidgetTree->ConstructWidget<USlider>(USlider::StaticClass(), FName(Name + FString("Slider")));
			SoundSlider->SetMinValue(0.f);
			SoundSlider->SetMaxValue(1.f);
			SoundSlider->SetValue(0.5f);
			Box->AddChildToHorizontalBox(SoundTextBlock);
			Box->AddChildToHorizontalBox(SoundSlider);
			UHorizontalBoxSlot* bSlot = Cast<UHorizontalBoxSlot>(SoundSlider->Slot);
			if (bSlot)
			{
				bSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
				bSlot->SetSize(ESlateSizeRule::Fill);
			}
			m_settings->AddChildToVerticalBox(Box);
			};

		UHorizontalBox* MasterSoundContainer;
		UHorizontalBox* SoundEffectSoundContainer;
		UHorizontalBox* MusicSoundContainer;

		GenSlider(MasterSoundContainer, FString("MasterSound"));
		GenSlider(SoundEffectSoundContainer, FString("SoundEffectSound"));
		GenSlider(MusicSoundContainer, FString("MusicSound"));

		

		m_menuSections.Emplace(EMainMenuSections::ERoot);
		m_menuSections.Find(EMainMenuSections::ERoot)->m_base = m_startPanel;
		{
			TArray<UWidget*>& arr = m_menuSections.Find(EMainMenuSections::ERoot)->m_subOptions;
		}

		m_menuSections.Emplace(EMainMenuSections::EMain);
		m_menuSections.Find(EMainMenuSections::EMain)->m_base = m_main;
		{
			TArray<UWidget*>& arr = m_menuSections.Find(EMainMenuSections::EMain)->m_subOptions;
			arr.Add(StartButton);
			arr.Add(SettingsButton);
			arr.Add(QuitButton);
		}

		m_menuSections.Emplace(EMainMenuSections::ESettings);
		m_menuSections.Find(EMainMenuSections::ESettings)->m_base = m_settings;
		{
			TArray<UWidget*>& arr = m_menuSections.Find(EMainMenuSections::ESettings)->m_subOptions;
			arr.Add(MasterSoundContainer);
			arr.Add(SoundEffectSoundContainer);
			arr.Add(MusicSoundContainer);
		}
	}
	m_menuStack.Add(EMainMenuSections::ERoot);
	return true;
}

void UMainMenuWidget::GoBack()
{
	if (m_menuStack.Top() == EMainMenuSections::ERoot)
	{
		return;
	}
	TEnumAsByte<EMainMenuSections> curr = m_menuStack.Pop();

	USubMenuFunctionLibrary::SwitchMenu(*m_menuSections.Find(curr), *m_menuSections.Find(m_menuStack.Top()));

	//m_menuSections.Find(curr)->m_base->SetVisibility(ESlateVisibility::Collapsed);
	//m_menuSections.Find(m_menuStack.Top())->m_base->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuWidget::GoForward(const TEnumAsByte<EMainMenuSections> Next)
{
	TEnumAsByte<EMainMenuSections> last = m_menuStack.Top();

	m_menuStack.Add(Next);

	USubMenuFunctionLibrary::SwitchMenu(*m_menuSections.Find(last), *m_menuSections.Find(m_menuStack.Top()));

	//m_menuSections.Find(last)->m_base->SetVisibility(ESlateVisibility::Collapsed);
	//m_menuSections.Find(m_menuStack.Top())->m_base->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuWidget::QuitGame(const TEnumAsByte<EMainMenuSections> DummyParam)
{
	FPlatformMisc::RequestExit(false);
}

void UMainMenuWidget::HorizontalInput(const bool Right)
{
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
	slider->SetValue(NewVal);
}

void UMainMenuWidget::VerticalInput(const bool Up)
{
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

void UMainMenuWidget::ThePressingOfStart()
{
	if (m_menuStack.Top() != EMainMenuSections::ERoot)
	{
		return;
	}
	GoForward(EMainMenuSections::EMain);
}

void UMainMenuWidget::ButtonChecking()
{
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

AMainMenuController::AMainMenuController()
{
	m_menu = CreateDefaultSubobject<UMainMenuWidget>(FName("Main Menu"));
}

void AMainMenuController::BeginPlay()
{
	Super::BeginPlay();
	m_menu->AddToViewport();
}

void AMainMenuController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(m_inputContext, 0);
	}
	if (UEnhancedInputComponent* comp = Cast<UEnhancedInputComponent>(InputComponent))
	{
		comp->BindAction(m_navigation.m_start, ETriggerEvent::Started, m_menu, &UMainMenuWidget::ThePressingOfStart);
		comp->BindAction(m_navigation.m_up, ETriggerEvent::Started, m_menu, &UMainMenuWidget::VerticalInput, true);
		comp->BindAction(m_navigation.m_down, ETriggerEvent::Started, m_menu, &UMainMenuWidget::VerticalInput, false);
		comp->BindAction(m_navigation.m_right, ETriggerEvent::Started, m_menu, &UMainMenuWidget::HorizontalInput, true);
		comp->BindAction(m_navigation.m_left, ETriggerEvent::Started, m_menu, &UMainMenuWidget::HorizontalInput, false);
		comp->BindAction(m_navigation.m_back, ETriggerEvent::Started, m_menu, &UMainMenuWidget::GoBack);
		comp->BindAction(m_navigation.m_select, ETriggerEvent::Started, m_menu, &UMainMenuWidget::ButtonChecking);
	}
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
		button->SetRenderScale(FVector2D(1.f, 1.f));
		button->SetColorAndOpacity(FLinearColor::White);
	}
	else
	{
		UHorizontalBox* box = Cast<UHorizontalBox>(SubMenu.m_subOptions[SubMenu.m_selected]);
		if (box)
		{
			box->GetChildAt(0)->SetRenderScale(FVector2D(1.f, 1.f));
			Cast<UTextBlock>(box->GetChildAt(0))->SetColorAndOpacity(FLinearColor::White);
		}
	}
	SubMenu.m_selected = FMath::Clamp(NewSelected, 0, SubMenu.m_subOptions.Num()-1);
	button = Cast<UButton>(SubMenu.m_subOptions[SubMenu.m_selected]);
	if (button)
	{
		button->SetRenderScale(FVector2D(1.25f, 1.25f));
		button->SetColorAndOpacity(FLinearColor::Yellow);
	}
	else
	{
		UHorizontalBox* box = Cast<UHorizontalBox>(SubMenu.m_subOptions[SubMenu.m_selected]);
		if (box)
		{
			box->GetChildAt(0)->SetRenderScale(FVector2D(1.25f, 1.25f));
			Cast<UTextBlock>(box->GetChildAt(0))->SetColorAndOpacity(FLinearColor::Yellow);
		}
	}
}

void GoForwardInMenu(const TEnumAsByte<EMainMenuSections> Next, UMainMenuWidget* Menu)
{
	Menu->GoForward(Next);
}
