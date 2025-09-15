// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ParrotInputSelector.h"

#ifdef PARROT_ParrotInputSelector_generated_h
#error "ParrotInputSelector.generated.h already included, missing '#pragma once' in ParrotInputSelector.h"
#endif
#define PARROT_ParrotInputSelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonInputSubsystem;
class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
enum class ECommonInputType : uint8;
enum class EPlayerMappableKeySlot : uint8;
struct FEventReply;
struct FGeometry;
struct FKey;
struct FPlayerKeyMapping;
struct FPointerEvent;
struct FSlateBrush;

// ********** Begin Delegate FOnKeyChangeStarted ***************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_19_DELEGATE \
PARROT_API void FOnKeyChangeStarted_DelegateWrapper(const FMulticastScriptDelegate& OnKeyChangeStarted, const FText& ActionName, bool bIsAxis);


// ********** End Delegate FOnKeyChangeStarted *****************************************************

// ********** Begin Delegate FOnKeyChangeCanceled **************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_20_DELEGATE \
PARROT_API void FOnKeyChangeCanceled_DelegateWrapper(const FMulticastScriptDelegate& OnKeyChangeCanceled);


// ********** End Delegate FOnKeyChangeCanceled ****************************************************

// ********** Begin Delegate FOnKeyChanged *********************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_21_DELEGATE \
PARROT_API void FOnKeyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnKeyChanged, FKey NewKey);


// ********** End Delegate FOnKeyChanged ***********************************************************

// ********** Begin Delegate FOnKeySwap ************************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_22_DELEGATE \
PARROT_API void FOnKeySwap_DelegateWrapper(const FMulticastScriptDelegate& OnKeySwap);


// ********** End Delegate FOnKeySwap **************************************************************

// ********** Begin Class UParrotInputSelector *****************************************************
#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnParentMouseButtonUp); \
	DECLARE_FUNCTION(execGetUserSettings); \
	DECLARE_FUNCTION(execFindMappableKeyProfile); \
	DECLARE_FUNCTION(execGetActionMappingDisplayCategory); \
	DECLARE_FUNCTION(execGetActionMappingDisplayName); \
	DECLARE_FUNCTION(execIsMappingCustomized); \
	DECLARE_FUNCTION(execChangeBinding); \
	DECLARE_FUNCTION(execRestoreToInitial); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execStoreInitial); \
	DECLARE_FUNCTION(execGetKeyIconFromSlot); \
	DECLARE_FUNCTION(execGetKeyTextFromSlot); \
	DECLARE_FUNCTION(execInitializeInputData);


PARROT_API UClass* Z_Construct_UClass_UParrotInputSelector_NoRegister();

#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParrotInputSelector(); \
	friend struct Z_Construct_UClass_UParrotInputSelector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UParrotInputSelector_NoRegister(); \
public: \
	DECLARE_CLASS2(UParrotInputSelector, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UParrotInputSelector_NoRegister) \
	DECLARE_SERIALIZER(UParrotInputSelector)


#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParrotInputSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParrotInputSelector(UParrotInputSelector&&) = delete; \
	UParrotInputSelector(const UParrotInputSelector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParrotInputSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParrotInputSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParrotInputSelector) \
	NO_API virtual ~UParrotInputSelector();


#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_29_PROLOG
#define FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParrotInputSelector;

// ********** End Class UParrotInputSelector *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
