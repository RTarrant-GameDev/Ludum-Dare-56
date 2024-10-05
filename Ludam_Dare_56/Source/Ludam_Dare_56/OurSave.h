#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SoundSettings.h"
#include "OurSave.generated.h"

UCLASS(BlueprintType)
class LUDAM_DARE_56_API UDefaultSave : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FSoundSettings m_soundSettings;
};