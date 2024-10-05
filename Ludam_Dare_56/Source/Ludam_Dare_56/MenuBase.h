#pragma once

#include "CoreMinimal.h"
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
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/VerticalBoxSlot.h"
#include "InputAction.h"
#include "MenuBase.generated.h"

constexpr float MenuUnselectedSize = 1.f;
constexpr float MenuSelectedSize = 1.25;

const FLinearColor MenuUnselectedColor = FLinearColor::White;
const FLinearColor MenuSelectedColor = FLinearColor::Yellow;

const FAnchors SubMenuAnchors = FAnchors(0.40);
const FVector2D SubMenuSize = FVector2D(400, 50);

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

USTRUCT(BlueprintType)
struct FMenuButtonFunc
{
	GENERATED_BODY()
public:
	TEnumAsByte<EMainMenuSections> m_menuSection;
	void(UMenuBase::* MemberFunc)(const TEnumAsByte<EMainMenuSections>);
};

UCLASS(BlueprintType)
class UMenuBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TArray<TEnumAsByte<EMainMenuSections>> m_menuStack;
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EMainMenuSections>, FSubMenu> m_menuSections;
	UPROPERTY(EditAnywhere)
	TMap<UButton*, FMenuButtonFunc> m_buttonFunctionMap;
	UPROPERTY(EditAnywhere)
	bool enabled = true;
public:
	UFUNCTION(BlueprintCallable)
	void GoBack();
	UFUNCTION(BlueprintCallable)
	void GoForward(const TEnumAsByte<EMainMenuSections> NextSection);
	UFUNCTION(BlueprintCallable)
	void QuitGameToDeskTop(const TEnumAsByte<EMainMenuSections> DummyParam);
	UFUNCTION(BlueprintCallable)
	void HorizontalInput(const bool Right);
	UFUNCTION(BlueprintCallable)
	void VerticalInput(const bool Up);
	UFUNCTION(BlueprintCallable)
	void ButtonChecking();
	UFUNCTION(BlueprintCallable)
	void ThePressingOfStart();
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