// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ParrotGameUserSettings.h"

#ifdef PARROT_ParrotGameUserSettings_generated_h
#error "ParrotGameUserSettings.generated.h already included, missing '#pragma once' in ParrotGameUserSettings.h"
#endif
#define PARROT_ParrotGameUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParrotGameUserSettings **************************************************
PARROT_API UClass* Z_Construct_UClass_UParrotGameUserSettings_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotGameUserSettings(); \
	friend struct Z_Construct_UClass_UParrotGameUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotGameUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotGameUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UParrotGameUserSettings)


#define FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotGameUserSettings(UParrotGameUserSettings&&) = delete; \
	UParrotGameUserSettings(const UParrotGameUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParrotGameUserSettings) \
	NO_API virtual ~UParrotGameUserSettings();


#define FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h_12_PROLOG
#define FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotGameUserSettings;

// ********** End Class UParrotGameUserSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
