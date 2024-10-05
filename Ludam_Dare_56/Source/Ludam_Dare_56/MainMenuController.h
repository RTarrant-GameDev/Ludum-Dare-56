#pragma once

#include "CoreMinimal.h"
#include "MainMenu.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "MainMenuController.generated.h"

UCLASS(BlueprintType)
class AMainMenuController : public APlayerController
{
	GENERATED_BODY()
public:
	AMainMenuController();
	virtual void BeginPlay() override final;
	virtual void SetupInputComponent() override final;
	UPROPERTY(EditAnywhere)
	FMenuNavigation m_navigation;
	UPROPERTY(EditAnywhere)
	UInputMappingContext* m_inputContext = nullptr;
	UPROPERTY(EditAnywhere)
	UMainMenuWidget* m_menu = nullptr;
};