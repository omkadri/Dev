// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ParrotHUD.h"

#ifdef PARROT_ParrotHUD_generated_h
#error "ParrotHUD.generated.h already included, missing '#pragma once' in ParrotHUD.h"
#endif
#define PARROT_ParrotHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AParrotHUD ***************************************************************
PARROT_API UClass* Z_Construct_UClass_AParrotHUD_NoRegister();

#define FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotHUD(); \
	friend struct Z_Construct_UClass_AParrotHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotHUD, AHUD, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotHUD_NoRegister) \
	DECLARE_SERIALIZER(AParrotHUD)


#define FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParrotHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotHUD(AParrotHUD&&) = delete; \
	AParrotHUD(const AParrotHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotHUD); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParrotHUD) \
	NO_API virtual ~AParrotHUD();


#define FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h_18_PROLOG
#define FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h_21_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotHUD;

// ********** End Class AParrotHUD *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
