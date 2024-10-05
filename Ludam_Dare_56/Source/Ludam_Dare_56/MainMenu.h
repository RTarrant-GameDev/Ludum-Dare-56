#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"
#include "Blueprint/WidgetTree.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Slider.h"
#include "Components/PanelWidget.h"
#include "Components/TextBlock.h"
#include "Internationalization/Text.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/VerticalBoxSlot.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "MainMenu.generated.h"


UENUM()
enum EMainMenuSections : uint8
{
	ERoot,
	EMain,
	ESettings
};

USTRUCT(BlueprintType)
struct FSubMenu
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UPanelWidget* m_base = nullptr;
	UPROPERTY(EditAnywhere)
	TArray<UWidget*> m_subOptions;
	unsigned int m_selected = 0;
};

UCLASS()
class USubMenuFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void SwitchMenu(FSubMenu& Previous, FSubMenu& Next);
	UFUNCTION(BlueprintCallable)
	static void SwitchSubMenuSelected(FSubMenu& SubMenu, const int NewSelected);
};

static void GoForwardInMenu(const TEnumAsByte<EMainMenuSections> Next, UMainMenuWidget* Menu);

USTRUCT(BlueprintType)
struct FMenuButtonFunc
{
	GENERATED_BODY()
public:
	TEnumAsByte<EMainMenuSections> m_menuSection;
	void(UMainMenuWidget::*MemberFunc)(const TEnumAsByte<EMainMenuSections>);
};

UCLASS(BlueprintType)
class UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual bool Initialize() override final;
	UPROPERTY(EditAnywhere)
	UCanvasPanel* m_root = nullptr;
	UPROPERTY(EditAnywhere)
	UCanvasPanel* m_startPanel = nullptr;
	UPROPERTY(EditAnywhere)
	UTextBlock* m_startText = nullptr;
	UPROPERTY(EditAnywhere)
	UVerticalBox* m_main = nullptr;
	UPROPERTY(EditAnywhere)
	UVerticalBox* m_settings = nullptr;
	UPROPERTY(EditAnywhere)
	TArray<TEnumAsByte<EMainMenuSections>> m_menuStack;
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EMainMenuSections>, FSubMenu> m_menuSections;
	UPROPERTY(EditAnywhere)
	TMap<UButton*, FMenuButtonFunc> m_buttonFunctionMap;
public:
	UFUNCTION(BlueprintCallable)
	void GoBack();
	UFUNCTION(BlueprintCallable)
	void GoForward(const TEnumAsByte<EMainMenuSections> NextSection);
	UFUNCTION(BlueprintCallable)
	void QuitGame(const TEnumAsByte<EMainMenuSections> DummyParam);
	UFUNCTION(BlueprintCallable)
	void HorizontalInput(const bool Right);
	UFUNCTION(BlueprintCallable)
	void VerticalInput(const bool Up);
	UFUNCTION(BlueprintCallable)
	void ThePressingOfStart();
	UFUNCTION(BlueprintCallable)
	void ButtonChecking();
};

USTRUCT(BlueprintType)
struct FMenuNavigation
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	UInputAction* m_start = nullptr;
	UPROPERTY(EditAnywhere)
	UInputAction* m_up = nullptr;
	UPROPERTY(EditAnywhere)
	UInputAction* m_down = nullptr;
	UPROPERTY(EditAnywhere)
	UInputAction* m_left = nullptr;
	UPROPERTY(EditAnywhere)
	UInputAction* m_right = nullptr;
	UPROPERTY(EditAnywhere)
	UInputAction* m_select = nullptr;
	UPROPERTY(EditAnywhere)
	UInputAction* m_back = nullptr;
};

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