#pragma once

#include "CoreMinimal.h"
#include "SoundSettings.generated.h"

class LUDAM_DARE_56_API USaveDataFunctions;

USTRUCT(BlueprintType)
struct LUDAM_DARE_56_API FSoundSettings
{
	GENERATED_BODY()
private:
	float m_musicVolume = 1;
	float m_soundEffectsVolume = 1;
	float m_masterVolume = 1;
	friend class USaveDataFunctions;
};

UCLASS()
class LUDAM_DARE_56_API USaveDataFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static float GetMusicVolume(const FSoundSettings& SoundSettings);
	UFUNCTION(BlueprintCallable)
	static float GetSoundEffectsVolume(const FSoundSettings& SoundSettings);
	UFUNCTION(BlueprintCallable)
	static float GetMasterVolume(const FSoundSettings& SoundSettings);
	UFUNCTION(BlueprintCallable)
	static float GetMusicVolumeUnadjusted(const FSoundSettings& SoundSettings);
	UFUNCTION(BlueprintCallable)
	static float GetSoundVolumeUnadjusted(const FSoundSettings& SoundSettings);
	UFUNCTION(BlueprintCallable)
	static void SetMusicVolume(FSoundSettings& SoundSettings, const float NewVal);
	UFUNCTION(BlueprintCallable)
	static void SetSoundEffectVolume(FSoundSettings& SoundSettings, const float NewVal);
	UFUNCTION(BlueprintCallable)
	static void SetMasterVolume(FSoundSettings& SoundSettings, const float NewVal);
};