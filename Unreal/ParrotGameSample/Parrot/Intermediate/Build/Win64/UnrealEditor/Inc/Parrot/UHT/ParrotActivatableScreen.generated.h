// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ParrotActivatableScreen.h"

#ifdef PARROT_ParrotActivatableScreen_generated_h
#error "ParrotActivatableScreen.generated.h already included, missing '#pragma once' in ParrotActivatableScreen.h"
#endif
#define PARROT_ParrotActivatableScreen_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParrotActivatableScreen *************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshUIInputConfig); \
	DECLARE_FUNCTION(execCloseScreen);


#define FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_CALLBACK_WRAPPERS
PARROT_API UClass* Z_Construct_UClass_UParrotActivatableScreen_NoRegister();

#define FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotActivatableScreen(); \
	friend struct Z_Construct_UClass_UParrotActivatableScreen_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotActivatableScreen_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotActivatableScreen, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotActivatableScreen_NoRegister) \
	DECLARE_SERIALIZER(UParrotActivatableScreen)


#define FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotActivatableScreen(UParrotActivatableScreen&&) = delete; \
	UParrotActivatableScreen(const UParrotActivatableScreen&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotActivatableScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotActivatableScreen); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UParrotActivatableScreen) \
	NO_API virtual ~UParrotActivatableScreen();


#define FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_17_PROLOG
#define FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_CALLBACK_WRAPPERS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotActivatableScreen;

// ********** End Class UParrotActivatableScreen ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
