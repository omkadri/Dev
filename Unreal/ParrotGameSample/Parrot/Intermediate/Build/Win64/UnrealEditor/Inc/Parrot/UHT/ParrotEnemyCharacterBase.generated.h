// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/ParrotEnemyCharacterBase.h"

#ifdef PARROT_ParrotEnemyCharacterBase_generated_h
#error "ParrotEnemyCharacterBase.generated.h already included, missing '#pragma once' in ParrotEnemyCharacterBase.h"
#endif
#define PARROT_ParrotEnemyCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin ScriptStruct FParrotEnemyInitializationArgs ************************************
#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics; \
	static class UScriptStruct* StaticStruct();


struct FParrotEnemyInitializationArgs;
// ********** End ScriptStruct FParrotEnemyInitializationArgs **************************************

// ********** Begin Class AParrotEnemyCharacterBase ************************************************
#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndAttackTriggerOverlap); \
	DECLARE_FUNCTION(execOnBeginAttackTriggerOverlap); \
	DECLARE_FUNCTION(execOnEndPatrolTriggerOverlap); \
	DECLARE_FUNCTION(execOnBeginPatrolTriggerOverlap); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execRevertMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execSetMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execGetNextPatrolLocation); \
	DECLARE_FUNCTION(execHurtBeginOverlap); \
	DECLARE_FUNCTION(execHitBeginOverlap);


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_CALLBACK_WRAPPERS
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotEnemyCharacterBase(); \
	friend struct Z_Construct_UClass_AParrotEnemyCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotEnemyCharacterBase, AParrotCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AParrotEnemyCharacterBase)


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParrotEnemyCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotEnemyCharacterBase(AParrotEnemyCharacterBase&&) = delete; \
	AParrotEnemyCharacterBase(const AParrotEnemyCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotEnemyCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotEnemyCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParrotEnemyCharacterBase) \
	NO_API virtual ~AParrotEnemyCharacterBase();


#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_48_PROLOG
#define FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_CALLBACK_WRAPPERS \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotEnemyCharacterBase;

// ********** End Class AParrotEnemyCharacterBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
