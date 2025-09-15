// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/ParrotCharacterMovementComponent.h"

#ifdef PARROT_ParrotCharacterMovementComponent_generated_h
#error "ParrotCharacterMovementComponent.generated.h already included, missing '#pragma once' in ParrotCharacterMovementComponent.h"
#endif
#define PARROT_ParrotCharacterMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParrotCharacterMovementComponent ****************************************
PARROT_API UClass* Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UParrotCharacterMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UParrotCharacterMovementComponent)


#define FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotCharacterMovementComponent(UParrotCharacterMovementComponent&&) = delete; \
	UParrotCharacterMovementComponent(const UParrotCharacterMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParrotCharacterMovementComponent) \
	NO_API virtual ~UParrotCharacterMovementComponent();


#define FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h_30_PROLOG
#define FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotCharacterMovementComponent;

// ********** End Class UParrotCharacterMovementComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
