// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/ParrotCameraSubsystem.h"

#ifdef PARROT_ParrotCameraSubsystem_generated_h
#error "ParrotCameraSubsystem.generated.h already included, missing '#pragma once' in ParrotCameraSubsystem.h"
#endif
#define PARROT_ParrotCameraSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AParrotPlayerCharacter;
enum class ECameraMode : uint8;

// ********** Begin Class UParrotCameraSubsystem ***************************************************
#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlayerCameraOwner); \
	DECLARE_FUNCTION(execSetCameraFixedPointTarget); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execGetCameraWorldPosition);


PARROT_API UClass* Z_Construct_UClass_UParrotCameraSubsystem_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotCameraSubsystem(); \
	friend struct Z_Construct_UClass_UParrotCameraSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotCameraSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotCameraSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotCameraSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UParrotCameraSubsystem)


#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotCameraSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotCameraSubsystem(UParrotCameraSubsystem&&) = delete; \
	UParrotCameraSubsystem(const UParrotCameraSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotCameraSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotCameraSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParrotCameraSubsystem) \
	NO_API virtual ~UParrotCameraSubsystem();


#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_23_PROLOG
#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotCameraSubsystem;

// ********** End Class UParrotCameraSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
