// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ParrotGameInstance.h"

#ifdef PARROT_ParrotGameInstance_generated_h
#error "ParrotGameInstance.generated.h already included, missing '#pragma once' in ParrotGameInstance.h"
#endif
#define PARROT_ParrotGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnWindowFocusChanged *************************************************
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_9_DELEGATE \
PARROT_API void FOnWindowFocusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWindowFocusChanged, bool bIsFocused);


// ********** End Delegate FOnWindowFocusChanged ***************************************************

// ********** Begin Class UParrotGameInstance ******************************************************
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldHoldLoadingScreen); \
	DECLARE_FUNCTION(execHoldLoadingScreen); \
	DECLARE_FUNCTION(execSetHasPlayedBootSplash); \
	DECLARE_FUNCTION(execHasPlayedBootSplash);


PARROT_API UClass* Z_Construct_UClass_UParrotGameInstance_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotGameInstance(); \
	friend struct Z_Construct_UClass_UParrotGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotGameInstance, UGameInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UParrotGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UParrotGameInstance*>(this); }


#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotGameInstance(UParrotGameInstance&&) = delete; \
	UParrotGameInstance(const UParrotGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotGameInstance); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParrotGameInstance) \
	NO_API virtual ~UParrotGameInstance();


#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_23_PROLOG
#define FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotGameInstance;

// ********** End Class UParrotGameInstance ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
