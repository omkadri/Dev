// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/ParrotEnemyAIControllerBase.h"

#ifdef PARROT_ParrotEnemyAIControllerBase_generated_h
#error "ParrotEnemyAIControllerBase.generated.h already included, missing '#pragma once' in ParrotEnemyAIControllerBase.h"
#endif
#define PARROT_ParrotEnemyAIControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AParrotEnemyAIControllerBase *********************************************
#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_CALLBACK_WRAPPERS
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyAIControllerBase_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotEnemyAIControllerBase(); \
	friend struct Z_Construct_UClass_AParrotEnemyAIControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotEnemyAIControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotEnemyAIControllerBase, AAIController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotEnemyAIControllerBase_NoRegister) \
	DECLARE_SERIALIZER(AParrotEnemyAIControllerBase)


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParrotEnemyAIControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotEnemyAIControllerBase(AParrotEnemyAIControllerBase&&) = delete; \
	AParrotEnemyAIControllerBase(const AParrotEnemyAIControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotEnemyAIControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotEnemyAIControllerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParrotEnemyAIControllerBase) \
	NO_API virtual ~AParrotEnemyAIControllerBase();


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_16_PROLOG
#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_CALLBACK_WRAPPERS \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotEnemyAIControllerBase;

// ********** End Class AParrotEnemyAIControllerBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyAIControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
