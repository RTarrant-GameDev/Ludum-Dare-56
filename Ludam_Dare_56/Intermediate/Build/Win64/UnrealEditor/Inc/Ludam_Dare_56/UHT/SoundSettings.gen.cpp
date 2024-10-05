// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludam_Dare_56/SoundSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LUDAM_DARE_56_API UClass* Z_Construct_UClass_USaveDataFunctions();
LUDAM_DARE_56_API UClass* Z_Construct_UClass_USaveDataFunctions_NoRegister();
LUDAM_DARE_56_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSettings();
UPackage* Z_Construct_UPackage__Script_Ludam_Dare_56();
// End Cross Module References

// Begin ScriptStruct FSoundSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSettings;
class UScriptStruct* FSoundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSettings, (UObject*)Z_Construct_UPackage__Script_Ludam_Dare_56(), TEXT("SoundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSettings.OuterSingleton;
}
template<> LUDAM_DARE_56_API UScriptStruct* StaticStruct<FSoundSettings>()
{
	return FSoundSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Ludam_Dare_56,
	nullptr,
	&NewStructOps,
	"SoundSettings",
	nullptr,
	0,
	sizeof(FSoundSettings),
	alignof(FSoundSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundSettings.InnerSingleton;
}
// End ScriptStruct FSoundSettings

// Begin Class USaveDataFunctions Function GetMasterVolume
struct Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics
{
	struct SaveDataFunctions_eventGetMasterVolume_Parms
	{
		FSoundSettings SoundSettings;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetMasterVolume_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSettings_MetaData), NewProp_SoundSettings_MetaData) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "GetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::SaveDataFunctions_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::SaveDataFunctions_eventGetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execGetMasterVolume)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMasterVolume(Z_Param_Out_SoundSettings);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function GetMasterVolume

// Begin Class USaveDataFunctions Function GetMusicVolume
struct Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics
{
	struct SaveDataFunctions_eventGetMusicVolume_Parms
	{
		FSoundSettings SoundSettings;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetMusicVolume_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSettings_MetaData), NewProp_SoundSettings_MetaData) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::SaveDataFunctions_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::SaveDataFunctions_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execGetMusicVolume)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume(Z_Param_Out_SoundSettings);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function GetMusicVolume

// Begin Class USaveDataFunctions Function GetMusicVolumeUnadjusted
struct Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics
{
	struct SaveDataFunctions_eventGetMusicVolumeUnadjusted_Parms
	{
		FSoundSettings SoundSettings;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetMusicVolumeUnadjusted_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSettings_MetaData), NewProp_SoundSettings_MetaData) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetMusicVolumeUnadjusted_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "GetMusicVolumeUnadjusted", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::SaveDataFunctions_eventGetMusicVolumeUnadjusted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::SaveDataFunctions_eventGetMusicVolumeUnadjusted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execGetMusicVolumeUnadjusted)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolumeUnadjusted(Z_Param_Out_SoundSettings);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function GetMusicVolumeUnadjusted

// Begin Class USaveDataFunctions Function GetSoundEffectsVolume
struct Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics
{
	struct SaveDataFunctions_eventGetSoundEffectsVolume_Parms
	{
		FSoundSettings SoundSettings;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetSoundEffectsVolume_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSettings_MetaData), NewProp_SoundSettings_MetaData) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetSoundEffectsVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "GetSoundEffectsVolume", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::SaveDataFunctions_eventGetSoundEffectsVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::SaveDataFunctions_eventGetSoundEffectsVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execGetSoundEffectsVolume)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoundEffectsVolume(Z_Param_Out_SoundSettings);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function GetSoundEffectsVolume

// Begin Class USaveDataFunctions Function GetSoundVolumeUnadjusted
struct Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics
{
	struct SaveDataFunctions_eventGetSoundVolumeUnadjusted_Parms
	{
		FSoundSettings SoundSettings;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetSoundVolumeUnadjusted_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSettings_MetaData), NewProp_SoundSettings_MetaData) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventGetSoundVolumeUnadjusted_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "GetSoundVolumeUnadjusted", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::SaveDataFunctions_eventGetSoundVolumeUnadjusted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::SaveDataFunctions_eventGetSoundVolumeUnadjusted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execGetSoundVolumeUnadjusted)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoundVolumeUnadjusted(Z_Param_Out_SoundSettings);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function GetSoundVolumeUnadjusted

// Begin Class USaveDataFunctions Function SetMasterVolume
struct Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics
{
	struct SaveDataFunctions_eventSetMasterVolume_Parms
	{
		FSoundSettings SoundSettings;
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventSetMasterVolume_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(0, nullptr) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventSetMasterVolume_Parms, NewVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVal_MetaData), NewProp_NewVal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::SaveDataFunctions_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::SaveDataFunctions_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execSetMasterVolume)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_Out_SoundSettings,Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function SetMasterVolume

// Begin Class USaveDataFunctions Function SetMusicVolume
struct Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics
{
	struct SaveDataFunctions_eventSetMusicVolume_Parms
	{
		FSoundSettings SoundSettings;
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventSetMusicVolume_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(0, nullptr) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventSetMusicVolume_Parms, NewVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVal_MetaData), NewProp_NewVal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::SaveDataFunctions_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::SaveDataFunctions_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execSetMusicVolume)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_Out_SoundSettings,Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function SetMusicVolume

// Begin Class USaveDataFunctions Function SetSoundEffectVolume
struct Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics
{
	struct SaveDataFunctions_eventSetSoundEffectVolume_Parms
	{
		FSoundSettings SoundSettings;
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventSetSoundEffectVolume_Parms, SoundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(0, nullptr) }; // 390351231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDataFunctions_eventSetSoundEffectVolume_Parms, NewVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVal_MetaData), NewProp_NewVal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::NewProp_SoundSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataFunctions, nullptr, "SetSoundEffectVolume", nullptr, nullptr, Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::SaveDataFunctions_eventSetSoundEffectVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::SaveDataFunctions_eventSetSoundEffectVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveDataFunctions::execSetSoundEffectVolume)
{
	P_GET_STRUCT_REF(FSoundSettings,Z_Param_Out_SoundSettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundEffectVolume(Z_Param_Out_SoundSettings,Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class USaveDataFunctions Function SetSoundEffectVolume

// Begin Class USaveDataFunctions
void USaveDataFunctions::StaticRegisterNativesUSaveDataFunctions()
{
	UClass* Class = USaveDataFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMasterVolume", &USaveDataFunctions::execGetMasterVolume },
		{ "GetMusicVolume", &USaveDataFunctions::execGetMusicVolume },
		{ "GetMusicVolumeUnadjusted", &USaveDataFunctions::execGetMusicVolumeUnadjusted },
		{ "GetSoundEffectsVolume", &USaveDataFunctions::execGetSoundEffectsVolume },
		{ "GetSoundVolumeUnadjusted", &USaveDataFunctions::execGetSoundVolumeUnadjusted },
		{ "SetMasterVolume", &USaveDataFunctions::execSetMasterVolume },
		{ "SetMusicVolume", &USaveDataFunctions::execSetMusicVolume },
		{ "SetSoundEffectVolume", &USaveDataFunctions::execSetSoundEffectVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveDataFunctions);
UClass* Z_Construct_UClass_USaveDataFunctions_NoRegister()
{
	return USaveDataFunctions::StaticClass();
}
struct Z_Construct_UClass_USaveDataFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSettings.h" },
		{ "ModuleRelativePath", "SoundSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataFunctions_GetMasterVolume, "GetMasterVolume" }, // 1375620126
		{ &Z_Construct_UFunction_USaveDataFunctions_GetMusicVolume, "GetMusicVolume" }, // 466683261
		{ &Z_Construct_UFunction_USaveDataFunctions_GetMusicVolumeUnadjusted, "GetMusicVolumeUnadjusted" }, // 2488125353
		{ &Z_Construct_UFunction_USaveDataFunctions_GetSoundEffectsVolume, "GetSoundEffectsVolume" }, // 3808301429
		{ &Z_Construct_UFunction_USaveDataFunctions_GetSoundVolumeUnadjusted, "GetSoundVolumeUnadjusted" }, // 2999616261
		{ &Z_Construct_UFunction_USaveDataFunctions_SetMasterVolume, "SetMasterVolume" }, // 2627174632
		{ &Z_Construct_UFunction_USaveDataFunctions_SetMusicVolume, "SetMusicVolume" }, // 1801694298
		{ &Z_Construct_UFunction_USaveDataFunctions_SetSoundEffectVolume, "SetSoundEffectVolume" }, // 3180716221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveDataFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Ludam_Dare_56,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveDataFunctions_Statics::ClassParams = {
	&USaveDataFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveDataFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveDataFunctions()
{
	if (!Z_Registration_Info_UClass_USaveDataFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveDataFunctions.OuterSingleton, Z_Construct_UClass_USaveDataFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveDataFunctions.OuterSingleton;
}
template<> LUDAM_DARE_56_API UClass* StaticClass<USaveDataFunctions>()
{
	return USaveDataFunctions::StaticClass();
}
USaveDataFunctions::USaveDataFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataFunctions);
USaveDataFunctions::~USaveDataFunctions() {}
// End Class USaveDataFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundSettings_Statics::NewStructOps, TEXT("SoundSettings"), &Z_Registration_Info_UScriptStruct_SoundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSettings), 390351231U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveDataFunctions, USaveDataFunctions::StaticClass, TEXT("USaveDataFunctions"), &Z_Registration_Info_UClass_USaveDataFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveDataFunctions), 4139469538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_927841043(TEXT("/Script/Ludam_Dare_56"),
	Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
