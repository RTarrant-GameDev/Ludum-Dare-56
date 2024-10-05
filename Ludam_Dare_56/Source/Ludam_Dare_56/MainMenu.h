#pragma once

#include "CoreMinimal.h"
#include "MenuBase.h"
#include "MainMenu.generated.h"

UCLASS(BlueprintType)
class UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override final;
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
	UMenuBase* m_menuBaseFunc = CreateDefaultSubobject<UMenuBase>(FName("Menubase"), false);
};