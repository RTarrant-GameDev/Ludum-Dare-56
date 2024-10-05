#include "MainMenuController.h"

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
		comp->BindAction(m_navigation.m_start, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::ThePressingOfStart);
		comp->BindAction(m_navigation.m_up, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::VerticalInput, true);
		comp->BindAction(m_navigation.m_down, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::VerticalInput, false);
		comp->BindAction(m_navigation.m_right, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::HorizontalInput, true);
		comp->BindAction(m_navigation.m_left, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::HorizontalInput, false);
		comp->BindAction(m_navigation.m_back, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::GoBack);
		comp->BindAction(m_navigation.m_select, ETriggerEvent::Started, m_menu->m_menuBaseFunc, &UMenuBase::ButtonChecking);
	}
}