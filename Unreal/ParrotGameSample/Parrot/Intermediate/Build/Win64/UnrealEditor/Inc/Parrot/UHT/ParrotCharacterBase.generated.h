// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ParrotCharacterBase.h"

#ifdef PARROT_ParrotCharacterBase_generated_h
#error "ParrotCharacterBase.generated.h already included, missing '#pragma once' in ParrotCharacterBase.h"
#endif
#define PARROT_ParrotCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FCharacterDeathSignature **********************************************
#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_9_DELEGATE \
PARROT_API void FCharacterDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterDeathSignature);


// ********** End Delegate FCharacterDeathSignature ************************************************

// ********** Begin Delegate FCharacterHitSignature ************************************************
#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_10_DELEGATE \
PARROT_API void FCharacterHitSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterHitSignature);


// ********** End Delegate FCharacterHitSignature **************************************************

// ********** Begin Class AParrotCharacterBase *****************************************************
#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCharacterDeath); \
	DECLARE_FUNCTION(execKillCharacter); \
	DECLARE_FUNCTION(execHitCharacterWithLaunchForce); \
	DECLARE_FUNCTION(execHitCharacter); \
	DECLARE_FUNCTION(execIsDead);


#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_CALLBACK_WRAPPERS
PARROT_API UClass* Z_Construct_UClass_AParrotCharacterBase_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotCharacterBase(); \
	friend struct Z_Construct_UClass_AParrotCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AParrotCharacterBase)


#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParrotCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotCharacterBase(AParrotCharacterBase&&) = delete; \
	AParrotCharacterBase(const AParrotCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParrotCharacterBase) \
	NO_API virtual ~AParrotCharacterBase();


#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_24_PROLOG
#define FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_CALLBACK_WRAPPERS \
	FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotCharacterBase;

// ********** End Class AParrotCharacterBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
