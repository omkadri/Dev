// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/ParrotGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotGameInstance() {}

// ********** Begin Cross Module References ********************************************************
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PARROT_API UClass* Z_Construct_UClass_UParrotGameInstance();
PARROT_API UClass* Z_Construct_UClass_UParrotGameInstance_NoRegister();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnWindowFocusChanged *************************************************
struct Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics
{
	struct _Script_Parrot_eventOnWindowFocusChanged_Parms
	{
		bool bIsFocused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFocused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::NewProp_bIsFocused_SetBit(void* Obj)
{
	((_Script_Parrot_eventOnWindowFocusChanged_Parms*)Obj)->bIsFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Parrot_eventOnWindowFocusChanged_Parms), &Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::NewProp_bIsFocused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "OnWindowFocusChanged__DelegateSignature", Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::_Script_Parrot_eventOnWindowFocusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::_Script_Parrot_eventOnWindowFocusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWindowFocusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWindowFocusChanged, bool bIsFocused)
{
	struct _Script_Parrot_eventOnWindowFocusChanged_Parms
	{
		bool bIsFocused;
	};
	_Script_Parrot_eventOnWindowFocusChanged_Parms Parms;
	Parms.bIsFocused=bIsFocused ? true : false;
	OnWindowFocusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnWindowFocusChanged ***************************************************

// ********** Begin Class UParrotGameInstance Function HasPlayedBootSplash *************************
struct Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics
{
	struct ParrotGameInstance_eventHasPlayedBootSplash_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the boot splash/logo train has been played in this session\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the boot splash/logo train has been played in this session" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotGameInstance_eventHasPlayedBootSplash_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotGameInstance_eventHasPlayedBootSplash_Parms), &Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotGameInstance, nullptr, "HasPlayedBootSplash", Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::ParrotGameInstance_eventHasPlayedBootSplash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::ParrotGameInstance_eventHasPlayedBootSplash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotGameInstance::execHasPlayedBootSplash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPlayedBootSplash();
	P_NATIVE_END;
}
// ********** End Class UParrotGameInstance Function HasPlayedBootSplash ***************************

// ********** Begin Class UParrotGameInstance Function HoldLoadingScreen ***************************
struct Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics
{
	struct ParrotGameInstance_eventHoldLoadingScreen_Parms
	{
		bool bHold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows the loading screen to be held while something happens (e.g. playing a video)\n// NOTE: be sure to call HoldLoadingScreen(false) when you're done!\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the loading screen to be held while something happens (e.g. playing a video)\nNOTE: be sure to call HoldLoadingScreen(false) when you're done!" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bHold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::NewProp_bHold_SetBit(void* Obj)
{
	((ParrotGameInstance_eventHoldLoadingScreen_Parms*)Obj)->bHold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::NewProp_bHold = { "bHold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotGameInstance_eventHoldLoadingScreen_Parms), &Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::NewProp_bHold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::NewProp_bHold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotGameInstance, nullptr, "HoldLoadingScreen", Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::ParrotGameInstance_eventHoldLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::ParrotGameInstance_eventHoldLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotGameInstance::execHoldLoadingScreen)
{
	P_GET_UBOOL(Z_Param_bHold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoldLoadingScreen(Z_Param_bHold);
	P_NATIVE_END;
}
// ********** End Class UParrotGameInstance Function HoldLoadingScreen *****************************

// ********** Begin Class UParrotGameInstance Function SetHasPlayedBootSplash **********************
struct Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics
{
	struct ParrotGameInstance_eventSetHasPlayedBootSplash_Parms
	{
		bool bPlayed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Records whether or not the boot splash/logo train has been played this session\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Records whether or not the boot splash/logo train has been played this session" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPlayed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::NewProp_bPlayed_SetBit(void* Obj)
{
	((ParrotGameInstance_eventSetHasPlayedBootSplash_Parms*)Obj)->bPlayed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::NewProp_bPlayed = { "bPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotGameInstance_eventSetHasPlayedBootSplash_Parms), &Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::NewProp_bPlayed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::NewProp_bPlayed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotGameInstance, nullptr, "SetHasPlayedBootSplash", Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::ParrotGameInstance_eventSetHasPlayedBootSplash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::ParrotGameInstance_eventSetHasPlayedBootSplash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotGameInstance::execSetHasPlayedBootSplash)
{
	P_GET_UBOOL(Z_Param_bPlayed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasPlayedBootSplash(Z_Param_bPlayed);
	P_NATIVE_END;
}
// ********** End Class UParrotGameInstance Function SetHasPlayedBootSplash ************************

// ********** Begin Class UParrotGameInstance Function ShouldHoldLoadingScreen *********************
struct Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics
{
	struct ParrotGameInstance_eventShouldHoldLoadingScreen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the loading screen has been requested to be held\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the loading screen has been requested to be held" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotGameInstance_eventShouldHoldLoadingScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotGameInstance_eventShouldHoldLoadingScreen_Parms), &Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotGameInstance, nullptr, "ShouldHoldLoadingScreen", Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::ParrotGameInstance_eventShouldHoldLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::ParrotGameInstance_eventShouldHoldLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotGameInstance::execShouldHoldLoadingScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldHoldLoadingScreen();
	P_NATIVE_END;
}
// ********** End Class UParrotGameInstance Function ShouldHoldLoadingScreen ***********************

// ********** Begin Class UParrotGameInstance ******************************************************
void UParrotGameInstance::StaticRegisterNativesUParrotGameInstance()
{
	UClass* Class = UParrotGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasPlayedBootSplash", &UParrotGameInstance::execHasPlayedBootSplash },
		{ "HoldLoadingScreen", &UParrotGameInstance::execHoldLoadingScreen },
		{ "SetHasPlayedBootSplash", &UParrotGameInstance::execSetHasPlayedBootSplash },
		{ "ShouldHoldLoadingScreen", &UParrotGameInstance::execShouldHoldLoadingScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotGameInstance;
UClass* UParrotGameInstance::GetPrivateStaticClass()
{
	using TClass = UParrotGameInstance;
	if (!Z_Registration_Info_UClass_UParrotGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotGameInstance"),
			Z_Registration_Info_UClass_UParrotGameInstance.InnerSingleton,
			StaticRegisterNativesUParrotGameInstance,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UParrotGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotGameInstance_NoRegister()
{
	return UParrotGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The Loading Process Interface is used for things that might cause loading to happen which requires a loading screen to be displayed.\n* In Parrot's case, this is the startup UMG boot splash videos. \n*/" },
#endif
		{ "IncludePath", "Game/ParrotGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Loading Process Interface is used for things that might cause loading to happen which requires a loading screen to be displayed.\nIn Parrot's case, this is the startup UMG boot splash videos." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowFocusChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint delegate for listening for focus window changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint delegate for listening for focus window changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowFocusChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotGameInstance_HasPlayedBootSplash, "HasPlayedBootSplash" }, // 1573941198
		{ &Z_Construct_UFunction_UParrotGameInstance_HoldLoadingScreen, "HoldLoadingScreen" }, // 2027966755
		{ &Z_Construct_UFunction_UParrotGameInstance_SetHasPlayedBootSplash, "SetHasPlayedBootSplash" }, // 3698099432
		{ &Z_Construct_UFunction_UParrotGameInstance_ShouldHoldLoadingScreen, "ShouldHoldLoadingScreen" }, // 4019671371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParrotGameInstance_Statics::NewProp_OnWindowFocusChanged = { "OnWindowFocusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotGameInstance, OnWindowFocusChanged), Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowFocusChanged_MetaData), NewProp_OnWindowFocusChanged_MetaData) }; // 2455445862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameInstance_Statics::NewProp_OnWindowFocusChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UParrotGameInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(UParrotGameInstance, ILoadingProcessInterface), false },  // 2401025800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotGameInstance_Statics::ClassParams = {
	&UParrotGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParrotGameInstance_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameInstance_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotGameInstance()
{
	if (!Z_Registration_Info_UClass_UParrotGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotGameInstance.OuterSingleton, Z_Construct_UClass_UParrotGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotGameInstance.OuterSingleton;
}
UParrotGameInstance::UParrotGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotGameInstance);
UParrotGameInstance::~UParrotGameInstance() {}
// ********** End Class UParrotGameInstance ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotGameInstance, UParrotGameInstance::StaticClass, TEXT("UParrotGameInstance"), &Z_Registration_Info_UClass_UParrotGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotGameInstance), 648734143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h__Script_Parrot_1881317734(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameInstance_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
