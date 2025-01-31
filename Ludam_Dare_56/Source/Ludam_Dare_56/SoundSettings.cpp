#include "SoundSettings.h"

float USaveDataFunctions::GetMusicVolume(const FSoundSettings& SoundSettings)
{
    return SoundSettings.m_musicVolume * SoundSettings.m_masterVolume;
}

float USaveDataFunctions::GetSoundEffectsVolume(const FSoundSettings& SoundSettings)
{
    return SoundSettings.m_soundEffectsVolume * SoundSettings.m_masterVolume;
}

float USaveDataFunctions::GetMasterVolume(const FSoundSettings& SoundSettings)
{
    return SoundSettings.m_masterVolume;
}

float USaveDataFunctions::GetSoundVolumeUnadjusted(const FSoundSettings& SoundSettings)
{
    return SoundSettings.m_soundEffectsVolume;
}

void USaveDataFunctions::SetMusicVolume(FSoundSettings& SoundSettings, const float NewVal)
{
    SoundSettings.m_musicVolume = NewVal;
}

void USaveDataFunctions::SetSoundEffectVolume(FSoundSettings& SoundSettings, const float NewVal)
{
    SoundSettings.m_soundEffectsVolume = NewVal;
}

void USaveDataFunctions::SetMasterVolume(FSoundSettings& SoundSettings, const float NewVal)
{
    SoundSettings.m_masterVolume = NewVal;
}

float USaveDataFunctions::GetMusicVolumeUnadjusted(const FSoundSettings& SoundSettings)
{
    return SoundSettings.m_musicVolume;
}
