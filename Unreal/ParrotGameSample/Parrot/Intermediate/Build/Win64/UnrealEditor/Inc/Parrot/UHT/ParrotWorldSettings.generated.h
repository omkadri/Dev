// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ParrotWorldSettings.h"

#ifdef PARROT_ParrotWorldSettings_generated_h
#error "ParrotWorldSettings.generated.h already included, missing '#pragma once' in ParrotWorldSettings.h"
#endif
#define PARROT_ParrotWorldSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AParrotWorldSettings *****************************************************
PARROT_API UClass* Z_Construct_UClass_AParrotWorldSettings_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotWorldSettings(); \
	friend struct Z_Construct_UClass_AParrotWorldSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotWorldSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotWorldSettings_NoRegister) \
	DECLARE_SERIALIZER(AParrotWorldSettings)


#define FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParrotWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotWorldSettings(AParrotWorldSettings&&) = delete; \
	AParrotWorldSettings(const AParrotWorldSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParrotWorldSettings) \
	NO_API virtual ~AParrotWorldSettings();


#define FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h_15_PROLOG
#define FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotWorldSettings;

// ********** End Class AParrotWorldSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
