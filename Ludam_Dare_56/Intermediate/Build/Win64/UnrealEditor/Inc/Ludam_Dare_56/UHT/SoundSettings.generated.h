// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoundSettings;
#ifdef LUDAM_DARE_56_SoundSettings_generated_h
#error "SoundSettings.generated.h already included, missing '#pragma once' in SoundSettings.h"
#endif
#define LUDAM_DARE_56_SoundSettings_generated_h

#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LUDAM_DARE_56_API UScriptStruct* StaticStruct<struct FSoundSettings>();

#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execSetSoundEffectVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetSoundVolumeUnadjusted); \
	DECLARE_FUNCTION(execGetMusicVolumeUnadjusted); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execGetSoundEffectsVolume); \
	DECLARE_FUNCTION(execGetMusicVolume);


#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataFunctions(); \
	friend struct Z_Construct_UClass_USaveDataFunctions_Statics; \
public: \
	DECLARE_CLASS(USaveDataFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ludam_Dare_56"), NO_API) \
	DECLARE_SERIALIZER(USaveDataFunctions)


#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveDataFunctions(USaveDataFunctions&&); \
	USaveDataFunctions(const USaveDataFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataFunctions) \
	NO_API virtual ~USaveDataFunctions();


#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_19_PROLOG
#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LUDAM_DARE_56_API UClass* StaticClass<class USaveDataFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ludam_Dare_56_Source_Ludam_Dare_56_SoundSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
