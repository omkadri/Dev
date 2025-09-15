// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/ParrotAudioSubsystem.h"

#ifdef PARROT_ParrotAudioSubsystem_generated_h
#error "ParrotAudioSubsystem.generated.h already included, missing '#pragma once' in ParrotAudioSubsystem.h"
#endif
#define PARROT_ParrotAudioSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USoundBase;
enum class ELevelState : uint8;

// ********** Begin Class UParrotAudioSubsystem ****************************************************
#define FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGameStateChanged); \
	DECLARE_FUNCTION(execPlaySoundAsWorldMusic); \
	DECLARE_FUNCTION(execWorldMusicInitialized); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execGetMainVolume); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetMainVolume); \
	DECLARE_FUNCTION(execSaveAudioSettings);


PARROT_API UClass* Z_Construct_UClass_UParrotAudioSubsystem_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotAudioSubsystem(); \
	friend struct Z_Construct_UClass_UParrotAudioSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotAudioSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotAudioSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotAudioSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UParrotAudioSubsystem)


#define FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotAudioSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotAudioSubsystem(UParrotAudioSubsystem&&) = delete; \
	UParrotAudioSubsystem(const UParrotAudioSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotAudioSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotAudioSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParrotAudioSubsystem) \
	NO_API virtual ~UParrotAudioSubsystem();


#define FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_27_PROLOG
#define FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotAudioSubsystem;

// ********** End Class UParrotAudioSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
