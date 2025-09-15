// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ParrotGameLayout.h"

#ifdef PARROT_ParrotGameLayout_generated_h
#error "ParrotGameLayout.generated.h already included, missing '#pragma once' in ParrotGameLayout.h"
#endif
#define PARROT_ParrotGameLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonActivatableWidgetContainerBase;
struct FGameplayTag;

// ********** Begin Class UParrotGameLayout ********************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterLayer);


PARROT_API UClass* Z_Construct_UClass_UParrotGameLayout_NoRegister();

#define FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotGameLayout(); \
	friend struct Z_Construct_UClass_UParrotGameLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotGameLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotGameLayout, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotGameLayout_NoRegister) \
	DECLARE_SERIALIZER(UParrotGameLayout)


#define FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotGameLayout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotGameLayout(UParrotGameLayout&&) = delete; \
	UParrotGameLayout(const UParrotGameLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotGameLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotGameLayout); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParrotGameLayout) \
	NO_API virtual ~UParrotGameLayout();


#define FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_15_PROLOG
#define FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotGameLayout;

// ********** End Class UParrotGameLayout **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
