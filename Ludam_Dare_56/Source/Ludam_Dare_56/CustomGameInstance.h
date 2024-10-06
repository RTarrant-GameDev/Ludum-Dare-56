#pragma once

#include "Engine/GameInstance.h"
#include "CoreMinimal.h"
#include "SoundSettings.h"
#include "MainMenu.h"
#include "CustomGameInstance.generated.h"

UCLASS(BlueprintType)
class UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	FSoundSettings m_Sound;
	UFUNCTION(BlueprintCallable)
	void SetSound()
	{
		auto GetSliderVal = [](UMainMenuWidget* menu, int i) -> float {
			UHorizontalBox* b = Cast<UHorizontalBox>(menu->m_settings->GetChildAt(i));
			if (b)
			{
				USlider* s = Cast<USlider>(b->GetChildAt(1));
				if (s)
				{
					return s->GetValue();
				}
			}
			return 1.f;
			};
		for (TObjectIterator<UObject> Itr; Itr; ++Itr)
		{
			UMainMenuWidget* menu = Cast<UMainMenuWidget>(*Itr);
			if (menu)
			{
				if (!menu->m_settings)
				{
					continue;
				}
				USaveDataFunctions::SetMasterVolume(m_Sound, GetSliderVal(menu, 0));
				USaveDataFunctions::SetSoundEffectVolume(m_Sound, GetSliderVal(menu, 1));
				USaveDataFunctions::SetMusicVolume(m_Sound, GetSliderVal(menu, 2));
				return;
			}
		}
	}
	
};