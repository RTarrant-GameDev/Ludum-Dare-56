// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludam_Dare_56/OurSave.h"
#include "Ludam_Dare_56/SoundSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOurSave() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
LUDAM_DARE_56_API UClass* Z_Construct_UClass_UDefaultSave();
LUDAM_DARE_56_API UClass* Z_Construct_UClass_UDefaultSave_NoRegister();
LUDAM_DARE_56_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSettings();
UPackage* Z_Construct_UPackage__Script_Ludam_Dare_56();
// End Cross Module References

// Begin Class UDefaultSave
void UDefaultSave::StaticRegisterNativesUDefaultSave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultSave);
UClass* Z_Construct_UClass_UDefaultSave_NoRegister()
{
	return UDefaultSave::StaticClass();
}
struct Z_Construct_UClass_UDefaultSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OurSave.h" },
		{ "ModuleRelativePath", "OurSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_soundSettings_MetaData[] = {
		{ "Category", "DefaultSave" },
		{ "ModuleRelativePath", "OurSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_soundSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultSave_Statics::NewProp_m_soundSettings = { "m_soundSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultSave, m_soundSettings), Z_Construct_UScriptStruct_FSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_soundSettings_MetaData), NewProp_m_soundSettings_MetaData) }; // 390351231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultSave_Statics::NewProp_m_soundSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDefaultSave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Ludam_Dare_56,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultSave_Statics::ClassParams = {
	&UDefaultSave::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDefaultSave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSave_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefaultSave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDefaultSave()
{
	if (!Z_Registration_Info_UClass_UDefaultSave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultSave.OuterSingleton, Z_Construct_UClass_UDefaultSave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefaultSave.OuterSingleton;
}
template<> LUDAM_DARE_56_API UClass* StaticClass<UDefaultSave>()
{
	return UDefaultSave::StaticClass();
}
UDefaultSave::UDefaultSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultSave);
UDefaultSave::~UDefaultSave() {}
// End Class UDefaultSave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultSave, UDefaultSave::StaticClass, TEXT("UDefaultSave"), &Z_Registration_Info_UClass_UDefaultSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultSave), 3544164482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_369456109(TEXT("/Script/Ludam_Dare_56"),
	Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
