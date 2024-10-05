// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludam_Dare_56/PlayerMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LUDAM_DARE_56_API UClass* Z_Construct_UClass_UPlayerMovementComponent();
LUDAM_DARE_56_API UClass* Z_Construct_UClass_UPlayerMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ludam_Dare_56();
// End Cross Module References

// Begin Class UPlayerMovementComponent
void UPlayerMovementComponent::StaticRegisterNativesUPlayerMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMovementComponent);
UClass* Z_Construct_UClass_UPlayerMovementComponent_NoRegister()
{
	return UPlayerMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerMovementComponent.h" },
		{ "ModuleRelativePath", "PlayerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "PlayerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Ludam_Dare_56,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovementComponent_Statics::ClassParams = {
	&UPlayerMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMovementComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMovementComponent.OuterSingleton, Z_Construct_UClass_UPlayerMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMovementComponent.OuterSingleton;
}
template<> LUDAM_DARE_56_API UClass* StaticClass<UPlayerMovementComponent>()
{
	return UPlayerMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovementComponent);
UPlayerMovementComponent::~UPlayerMovementComponent() {}
// End Class UPlayerMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_PlayerMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMovementComponent, UPlayerMovementComponent::StaticClass, TEXT("UPlayerMovementComponent"), &Z_Registration_Info_UClass_UPlayerMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMovementComponent), 3789776212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_PlayerMovementComponent_h_3247739497(TEXT("/Script/Ludam_Dare_56"),
	Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_PlayerMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ludam_Dare_56_Source_Ludam_Dare_56_PlayerMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
