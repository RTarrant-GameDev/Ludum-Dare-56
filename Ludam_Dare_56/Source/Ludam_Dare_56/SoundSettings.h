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
	float GetMusicVolume(const FSoundSettings& SoundSettings) const;
	UFUNCTION(BlueprintCallable)
	float GetSoundEffectsVolume(const FSoundSettings& SoundSettings) const;
	UFUNCTION(BlueprintCallable)
	float GetMasterVolume(const FSoundSettings& SoundSettings) const;
	UFUNCTION(BlueprintCallable)
	float GetMusicVolumeUnadjusted(const FSoundSettings& SoundSettings) const;
	UFUNCTION(BlueprintCallable)
	float GetSoundVolumeUnadjusted(const FSoundSettings& SoundSettings) const;
	UFUNCTION(BlueprintCallable)
	void SetMusicVolume(FSoundSettings& SoundSettings, const float NewVal) const;
	UFUNCTION(BlueprintCallable)
	void SetSoundEffectVolume(FSoundSettings& SoundSettings, const float NewVal) const;
	UFUNCTION(BlueprintCallable)
	void SetMasterVolume(FSoundSettings& SoundSettings, const float NewVal) const;
};