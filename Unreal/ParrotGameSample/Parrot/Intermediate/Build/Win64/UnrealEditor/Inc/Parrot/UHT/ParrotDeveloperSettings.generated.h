// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ParrotDeveloperSettings.h"

#ifdef PARROT_ParrotDeveloperSettings_generated_h
#error "ParrotDeveloperSettings.generated.h already included, missing '#pragma once' in ParrotDeveloperSettings.h"
#endif
#define PARROT_ParrotDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UParrotDeveloperSettings;

// ********** Begin Class UParrotDeveloperSettings *************************************************
#define FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldSkipLogoTrain); \
	DECLARE_FUNCTION(execGetParrotDeveloperSettings);


PARROT_API UClass* Z_Construct_UClass_UParrotDeveloperSettings_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotDeveloperSettings(); \
	friend struct Z_Construct_UClass_UParrotDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UParrotDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotDeveloperSettings(UParrotDeveloperSettings&&) = delete; \
	UParrotDeveloperSettings(const UParrotDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParrotDeveloperSettings) \
	NO_API virtual ~UParrotDeveloperSettings();


#define FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_15_PROLOG
#define FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotDeveloperSettings;

// ********** End Class UParrotDeveloperSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
