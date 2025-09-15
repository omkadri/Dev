// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/ParrotEnemyPatrolRigActor.h"

#ifdef PARROT_ParrotEnemyPatrolRigActor_generated_h
#error "ParrotEnemyPatrolRigActor.generated.h already included, missing '#pragma once' in ParrotEnemyPatrolRigActor.h"
#endif
#define PARROT_ParrotEnemyPatrolRigActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AParrotEnemyPatrolRigActor ***********************************************
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyPatrolRigActor_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotEnemyPatrolRigActor(); \
	friend struct Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotEnemyPatrolRigActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotEnemyPatrolRigActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotEnemyPatrolRigActor_NoRegister) \
	DECLARE_SERIALIZER(AParrotEnemyPatrolRigActor)


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotEnemyPatrolRigActor(AParrotEnemyPatrolRigActor&&) = delete; \
	AParrotEnemyPatrolRigActor(const AParrotEnemyPatrolRigActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotEnemyPatrolRigActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotEnemyPatrolRigActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParrotEnemyPatrolRigActor) \
	NO_API virtual ~AParrotEnemyPatrolRigActor();


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h_20_PROLOG
#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h_23_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotEnemyPatrolRigActor;

// ********** End Class AParrotEnemyPatrolRigActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
