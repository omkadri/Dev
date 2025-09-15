// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ParrotMapDataAsset.h"

#ifdef PARROT_ParrotMapDataAsset_generated_h
#error "ParrotMapDataAsset.generated.h already included, missing '#pragma once' in ParrotMapDataAsset.h"
#endif
#define PARROT_ParrotMapDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParrotMapDataAsset ******************************************************
PARROT_API UClass* Z_Construct_UClass_UParrotMapDataAsset_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotMapDataAsset(); \
	friend struct Z_Construct_UClass_UParrotMapDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotMapDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotMapDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotMapDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UParrotMapDataAsset) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PARROT_API UParrotMapDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotMapDataAsset(UParrotMapDataAsset&&) = delete; \
	UParrotMapDataAsset(const UParrotMapDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARROT_API, UParrotMapDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotMapDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParrotMapDataAsset) \
	PARROT_API virtual ~UParrotMapDataAsset();


#define FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h_16_PROLOG
#define FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h_19_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotMapDataAsset;

// ********** End Class UParrotMapDataAsset ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
