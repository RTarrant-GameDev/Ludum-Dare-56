// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OurSave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUDAM_DARE_56_OurSave_generated_h
#error "OurSave.generated.h already included, missing '#pragma once' in OurSave.h"
#endif
#define LUDAM_DARE_56_OurSave_generated_h

#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultSave(); \
	friend struct Z_Construct_UClass_UDefaultSave_Statics; \
public: \
	DECLARE_CLASS(UDefaultSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ludam_Dare_56"), NO_API) \
	DECLARE_SERIALIZER(UDefaultSave)


#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultSave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDefaultSave(UDefaultSave&&); \
	UDefaultSave(const UDefaultSave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultSave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultSave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultSave) \
	NO_API virtual ~UDefaultSave();


#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_8_PROLOG
#define FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_11_INCLASS_NO_PURE_DECLS \
	FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LUDAM_DARE_56_API UClass* StaticClass<class UDefaultSave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ludam_Dare_56_Source_Ludam_Dare_56_OurSave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
