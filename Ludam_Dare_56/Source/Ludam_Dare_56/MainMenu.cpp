#include "MainMenu.h"
#include "CustomGameInstance.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

bool UMainMenuWidget::Initialize()
{
	Super::Initialize();


	//m_menuBaseFunc = NewObject<UMenuBase>(this);
	if (WidgetTree)
	{
		m_root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), FName("Root"));

		WidgetTree->RootWidget = m_root;

		m_startPanel = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), FName("StartPanel"));
		auto AdjustMenuSlot = [&](TObjectPtr<UPanelSlot> cSlot)
			{
				UCanvasPanelSlot* slot = Cast<UCanvasPanelSlot>(cSlot);
				if (slot)
				{
					slot->SetAnchors(SubMenuAnchors);
					slot->SetSize(SubMenuSize);
				}
			};


		m_startText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName("Press Start"));
		m_startText->SetText(FText::FromString("Press Start"));

		m_startPanel->AddChildToCanvas(m_startText);
		m_root->AddChildToCanvas(m_startPanel);
		AdjustMenuSlot(m_startText->Slot);
		AdjustMenuSlot(m_startPanel->Slot);

		auto GenButton = [&](UButton*& Button, FString&& Name) {
			Button = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), FName(Name));
			Button->SetRenderScale(FVector2D(MenuUnselectedSize));
			UTextBlock* StartText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(Name + FString(" Text")));
			StartText->ColorAndOpacity = MenuUnselectedColor;

			StartText->SetText(FText::FromString(Name));
			Button->AddChild(StartText);
			};

		m_main = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), FName("Main"));
		m_main->SetVisibility(ESlateVisibility::Collapsed);
		UButton* StartButton;
		GenButton(StartButton, FString("Start Game"));

		m_main->AddChildToVerticalBox(StartButton);

		UButton* SettingsButton;
		GenButton(SettingsButton, FString("Settings"));

		m_menuBaseFunc->m_buttonFunctionMap.Add(TPair<UButton*, FMenuButtonFunc>(StartButton, FMenuButtonFunc{ EMainMenuSections::EMain, &UMenuBase::GoToLevel }));
		m_menuBaseFunc->m_buttonFunctionMap.Add(TPair<UButton*, FMenuButtonFunc>(SettingsButton, FMenuButtonFunc{ EMainMenuSections::ESettings, &UMenuBase::GoForward }));

		m_main->AddChildToVerticalBox(SettingsButton);

		m_settings = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), FName("settingsBase"));
		m_settings->SetVisibility(ESlateVisibility::Collapsed);

		UButton* QuitButton;
		GenButton(QuitButton, FString("Quit"));

		m_menuBaseFunc->m_buttonFunctionMap.Add(TPair<UButton*, FMenuButtonFunc>(QuitButton, FMenuButtonFunc{ EMainMenuSections::EMain, &UMenuBase::QuitGameToDeskTop }));

		m_main->AddChildToVerticalBox(QuitButton);

		m_root->AddChildToCanvas(m_main);
		m_root->AddChildToCanvas(m_settings);
		AdjustMenuSlot(m_main->Slot);
		AdjustMenuSlot(m_settings->Slot);
		{
			UCanvasPanelSlot* slot = Cast<UCanvasPanelSlot>(m_settings->Slot);

			if (slot)
			{
				//slot->SetSize(slot->GetSize() * FVector2D(0, 1) + FVector2D(400, 0));
			}
		}

		auto GenSlider = [&](UHorizontalBox*& Box, FString&& Name) {
			Box = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), FName(Name + FString("Container")));
			UTextBlock* SoundTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(Name + FString("Text")));
			SoundTextBlock->SetColorAndOpacity(MenuUnselectedColor);
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

		

		m_menuBaseFunc->m_menuSections.Emplace(EMainMenuSections::ERoot);
		m_menuBaseFunc->m_menuSections.Find(EMainMenuSections::ERoot)->m_base = m_startPanel;
		{
			TArray<UWidget*>& arr = m_menuBaseFunc->m_menuSections.Find(EMainMenuSections::ERoot)->m_subOptions;
		}

		m_menuBaseFunc->m_menuSections.Emplace(EMainMenuSections::EMain);
		m_menuBaseFunc->m_menuSections.Find(EMainMenuSections::EMain)->m_base = m_main;
		{
			TArray<UWidget*>& arr = m_menuBaseFunc->m_menuSections.Find(EMainMenuSections::EMain)->m_subOptions;
			arr.Add(StartButton);
			arr.Add(SettingsButton);
			arr.Add(QuitButton);
		}

		m_menuBaseFunc->m_menuSections.Emplace(EMainMenuSections::ESettings);
		m_menuBaseFunc->m_menuSections.Find(EMainMenuSections::ESettings)->m_base = m_settings;
		{
			TArray<UWidget*>& arr = m_menuBaseFunc->m_menuSections.Find(EMainMenuSections::ESettings)->m_subOptions;
			arr.Add(MasterSoundContainer);
			arr.Add(SoundEffectSoundContainer);
			arr.Add(MusicSoundContainer);
		}
	}
	m_menuBaseFunc->m_menuStack.Add(EMainMenuSections::ERoot);
	for (TObjectIterator<UGameInstance> itr; itr; ++itr)
	{
		UCustomGameInstance* GI = Cast<UCustomGameInstance>(*itr);
		if (GI)
		{
			m_menuBaseFunc->OnSliderChangedDelegate.AddUniqueDynamic(GI, &UCustomGameInstance::SetSound);
			GI->SetSound();
			break;
		}
	}
	return true;
}
