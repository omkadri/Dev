// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UserInterfaceBlueprintLibrary.h"

#ifdef PARROT_UserInterfaceBlueprintLibrary_generated_h
#error "UserInterfaceBlueprintLibrary.generated.h already included, missing '#pragma once' in UserInterfaceBlueprintLibrary.h"
#endif
#define PARROT_UserInterfaceBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UCommonActivatableWidget;
struct FGameplayTag;

// ********** Begin Class UUserInterfaceBlueprintLibrary *******************************************
#define FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execSetNavigationEnabled); \
	DECLARE_FUNCTION(execPushContentToLayerForPlayer);


PARROT_API UClass* Z_Construct_UClass_UUserInterfaceBlueprintLibrary_NoRegister();

#define FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserInterfaceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_UUserInterfaceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserInterfaceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_UUserInterfaceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUserInterfaceBlueprintLibrary)


#define FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInterfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserInterfaceBlueprintLibrary(UUserInterfaceBlueprintLibrary&&) = delete; \
	UUserInterfaceBlueprintLibrary(const UUserInterfaceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInterfaceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInterfaceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInterfaceBlueprintLibrary) \
	NO_API virtual ~UUserInterfaceBlueprintLibrary();


#define FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_19_PROLOG
#define FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserInterfaceBlueprintLibrary;

// ********** End Class UUserInterfaceBlueprintLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
