// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/ParrotPlayerCharacter.h"

#ifdef PARROT_ParrotPlayerCharacter_generated_h
#error "ParrotPlayerCharacter.generated.h already included, missing '#pragma once' in ParrotPlayerCharacter.h"
#endif
#define PARROT_ParrotPlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBoxComponent;

// ********** Begin Delegate FOnHitpointsAdded *****************************************************
#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_14_DELEGATE \
PARROT_API void FOnHitpointsAdded_DelegateWrapper(const FMulticastScriptDelegate& OnHitpointsAdded);


// ********** End Delegate FOnHitpointsAdded *******************************************************

// ********** Begin Class AParrotPlayerCharacter ***************************************************
#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivateSpeedPowerup); \
	DECLARE_FUNCTION(execAddHitpoints); \
	DECLARE_FUNCTION(execIsEnemyJumpValid); \
	DECLARE_FUNCTION(execIsJumpInputActive);


#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_CALLBACK_WRAPPERS
PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotPlayerCharacter(); \
	friend struct Z_Construct_UClass_AParrotPlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotPlayerCharacter, AParrotCharacterBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotPlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(AParrotPlayerCharacter)


#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParrotPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotPlayerCharacter(AParrotPlayerCharacter&&) = delete; \
	AParrotPlayerCharacter(const AParrotPlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotPlayerCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParrotPlayerCharacter) \
	NO_API virtual ~AParrotPlayerCharacter();


#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_26_PROLOG
#define FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_CALLBACK_WRAPPERS \
	FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotPlayerCharacter;

// ********** End Class AParrotPlayerCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
