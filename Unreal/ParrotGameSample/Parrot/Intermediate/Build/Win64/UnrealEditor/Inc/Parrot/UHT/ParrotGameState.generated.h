// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ParrotGameState.h"

#ifdef PARROT_ParrotGameState_generated_h
#error "ParrotGameState.generated.h already included, missing '#pragma once' in ParrotGameState.h"
#endif
#define PARROT_ParrotGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AParrotPlayerCharacter;
enum class ELevelState : uint8;

// ********** Begin Delegate FLevelStateChanged ****************************************************
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_59_DELEGATE \
PARROT_API void FLevelStateChanged_DelegateWrapper(const FMulticastScriptDelegate& LevelStateChanged, ELevelState NewLevelState);


// ********** End Delegate FLevelStateChanged ******************************************************

// ********** Begin Delegate FGameStateInitialized *************************************************
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_61_DELEGATE \
PARROT_API void FGameStateInitialized_DelegateWrapper(const FMulticastScriptDelegate& GameStateInitialized);


// ********** End Delegate FGameStateInitialized ***************************************************

// ********** Begin Class AParrotGameState *********************************************************
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetCurrentLevel); \
	DECLARE_FUNCTION(execUnPauseGame); \
	DECLARE_FUNCTION(execPauseGame); \
	DECLARE_FUNCTION(execBossDefeatedTimerComplete); \
	DECLARE_FUNCTION(execBossDefeated); \
	DECLARE_FUNCTION(execPlayerDeath); \
	DECLARE_FUNCTION(execPlayerOutOfBounds); \
	DECLARE_FUNCTION(execCompleteLevel);


PARROT_API UClass* Z_Construct_UClass_AParrotGameState_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotGameState(); \
	friend struct Z_Construct_UClass_AParrotGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotGameState, AGameStateBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotGameState_NoRegister) \
	DECLARE_SERIALIZER(AParrotGameState)


#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotGameState(AParrotGameState&&) = delete; \
	AParrotGameState(const AParrotGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotGameState); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AParrotGameState) \
	NO_API virtual ~AParrotGameState();


#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_71_PROLOG
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotGameState;

// ********** End Class AParrotGameState ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h

// ********** Begin Enum ELevelState ***************************************************************
#define FOREACH_ENUM_ELEVELSTATE(op) \
	op(ELevelState::Preload) \
	op(ELevelState::Ready) \
	op(ELevelState::Running) \
	op(ELevelState::Paused) \
	op(ELevelState::GameOver) \
	op(ELevelState::Victory) 

enum class ELevelState : uint8;
template<> struct TIsUEnumClass<ELevelState> { enum { Value = true }; };
template<> PARROT_API UEnum* StaticEnum<ELevelState>();
// ********** End Enum ELevelState *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
