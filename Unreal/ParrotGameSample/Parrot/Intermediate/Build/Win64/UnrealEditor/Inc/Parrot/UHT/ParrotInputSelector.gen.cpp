// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ParrotInputSelector.h"
#include "Components/SlateWrapperTypes.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"
#include "Layout/Geometry.h"
#include "Styling/SlateBrush.h"
#include "UserSettings/EnhancedInputUserSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotInputSelector() {}

// ********** Begin Cross Module References ********************************************************
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSubsystem_NoRegister();
COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerKeyMapping();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PARROT_API UClass* Z_Construct_UClass_UParrotInputSelector();
PARROT_API UClass* Z_Construct_UClass_UParrotInputSelector_NoRegister();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnKeyChangeStarted ***************************************************
struct Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics
{
	struct _Script_Parrot_eventOnKeyChangeStarted_Parms
	{
		FText ActionName;
		bool bIsAxis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare delegate types related to input selection \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare delegate types related to input selection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActionName;
	static void NewProp_bIsAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Parrot_eventOnKeyChangeStarted_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::NewProp_bIsAxis_SetBit(void* Obj)
{
	((_Script_Parrot_eventOnKeyChangeStarted_Parms*)Obj)->bIsAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::NewProp_bIsAxis = { "bIsAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Parrot_eventOnKeyChangeStarted_Parms), &Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::NewProp_bIsAxis_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::NewProp_bIsAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "OnKeyChangeStarted__DelegateSignature", Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::_Script_Parrot_eventOnKeyChangeStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::_Script_Parrot_eventOnKeyChangeStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKeyChangeStarted_DelegateWrapper(const FMulticastScriptDelegate& OnKeyChangeStarted, const FText& ActionName, bool bIsAxis)
{
	struct _Script_Parrot_eventOnKeyChangeStarted_Parms
	{
		FText ActionName;
		bool bIsAxis;
	};
	_Script_Parrot_eventOnKeyChangeStarted_Parms Parms;
	Parms.ActionName=ActionName;
	Parms.bIsAxis=bIsAxis ? true : false;
	OnKeyChangeStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnKeyChangeStarted *****************************************************

// ********** Begin Delegate FOnKeyChangeCanceled **************************************************
struct Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "OnKeyChangeCanceled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKeyChangeCanceled_DelegateWrapper(const FMulticastScriptDelegate& OnKeyChangeCanceled)
{
	OnKeyChangeCanceled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnKeyChangeCanceled ****************************************************

// ********** Begin Delegate FOnKeyChanged *********************************************************
struct Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics
{
	struct _Script_Parrot_eventOnKeyChanged_Parms
	{
		FKey NewKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Parrot_eventOnKeyChanged_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::NewProp_NewKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "OnKeyChanged__DelegateSignature", Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::_Script_Parrot_eventOnKeyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::_Script_Parrot_eventOnKeyChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKeyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnKeyChanged, FKey NewKey)
{
	struct _Script_Parrot_eventOnKeyChanged_Parms
	{
		FKey NewKey;
	};
	_Script_Parrot_eventOnKeyChanged_Parms Parms;
	Parms.NewKey=NewKey;
	OnKeyChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnKeyChanged ***********************************************************

// ********** Begin Delegate FOnKeySwap ************************************************************
struct Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "OnKeySwap__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKeySwap_DelegateWrapper(const FMulticastScriptDelegate& OnKeySwap)
{
	OnKeySwap.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnKeySwap **************************************************************

// ********** Begin Class UParrotInputSelector Function ChangeBinding ******************************
struct Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics
{
	struct ParrotInputSelector_eventChangeBinding_Parms
	{
		int32 InKeyBindSlot;
		FKey NewKey;
		bool bUpdateOverlappingKeys;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remaps the slot with a new key, functionally changing the underlying mapping \n" },
#endif
		{ "CPP_Default_bUpdateOverlappingKeys", "true" },
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remaps the slot with a new key, functionally changing the underlying mapping" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InKeyBindSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
	static void NewProp_bUpdateOverlappingKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlappingKeys;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_InKeyBindSlot = { "InKeyBindSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventChangeBinding_Parms, InKeyBindSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventChangeBinding_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
void Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_bUpdateOverlappingKeys_SetBit(void* Obj)
{
	((ParrotInputSelector_eventChangeBinding_Parms*)Obj)->bUpdateOverlappingKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_bUpdateOverlappingKeys = { "bUpdateOverlappingKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotInputSelector_eventChangeBinding_Parms), &Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_bUpdateOverlappingKeys_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotInputSelector_eventChangeBinding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotInputSelector_eventChangeBinding_Parms), &Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_InKeyBindSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_NewKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_bUpdateOverlappingKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "ChangeBinding", Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::ParrotInputSelector_eventChangeBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::ParrotInputSelector_eventChangeBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_ChangeBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_ChangeBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execChangeBinding)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InKeyBindSlot);
	P_GET_STRUCT(FKey,Z_Param_NewKey);
	P_GET_UBOOL(Z_Param_bUpdateOverlappingKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeBinding(Z_Param_InKeyBindSlot,Z_Param_NewKey,Z_Param_bUpdateOverlappingKeys);
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function ChangeBinding ********************************

// ********** Begin Class UParrotInputSelector Function FindMappableKeyProfile *********************
struct Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics
{
	struct ParrotInputSelector_eventFindMappableKeyProfile_Parms
	{
		UEnhancedPlayerMappableKeyProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Queries the EnhancedInput user settings for a mappable key profile \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries the EnhancedInput user settings for a mappable key profile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventFindMappableKeyProfile_Parms, ReturnValue), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "FindMappableKeyProfile", Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::ParrotInputSelector_eventFindMappableKeyProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::ParrotInputSelector_eventFindMappableKeyProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execFindMappableKeyProfile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedPlayerMappableKeyProfile**)Z_Param__Result=P_THIS->FindMappableKeyProfile();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function FindMappableKeyProfile ***********************

// ********** Begin Class UParrotInputSelector Function GetActionMappingDisplayCategory ************
struct Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics
{
	struct ParrotInputSelector_eventGetActionMappingDisplayCategory_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the display category of the Input Action \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the display category of the Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetActionMappingDisplayCategory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "GetActionMappingDisplayCategory", Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::ParrotInputSelector_eventGetActionMappingDisplayCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::ParrotInputSelector_eventGetActionMappingDisplayCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execGetActionMappingDisplayCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetActionMappingDisplayCategory();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function GetActionMappingDisplayCategory **************

// ********** Begin Class UParrotInputSelector Function GetActionMappingDisplayName ****************
struct Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics
{
	struct ParrotInputSelector_eventGetActionMappingDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the display name of the Input Action \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the display name of the Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetActionMappingDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "GetActionMappingDisplayName", Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::ParrotInputSelector_eventGetActionMappingDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::ParrotInputSelector_eventGetActionMappingDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execGetActionMappingDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetActionMappingDisplayName();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function GetActionMappingDisplayName ******************

// ********** Begin Class UParrotInputSelector Function GetKeyIconFromSlot *************************
struct Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics
{
	struct ParrotInputSelector_eventGetKeyIconFromSlot_Parms
	{
		const UCommonInputSubsystem* CommonInputSubsystem;
		EPlayerMappableKeySlot InSlot;
		ECommonInputType InputType;
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the CommonUI icon given the slot and input type \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the CommonUI icon given the slot and input type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonInputSubsystem_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonInputSubsystem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSlot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_CommonInputSubsystem = { "CommonInputSubsystem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetKeyIconFromSlot_Parms, CommonInputSubsystem), Z_Construct_UClass_UCommonInputSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonInputSubsystem_MetaData), NewProp_CommonInputSubsystem_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetKeyIconFromSlot_Parms, InSlot), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlot_MetaData), NewProp_InSlot_MetaData) }; // 2567049235
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetKeyIconFromSlot_Parms, InputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(0, nullptr) }; // 4176585250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetKeyIconFromSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_CommonInputSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "GetKeyIconFromSlot", Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::ParrotInputSelector_eventGetKeyIconFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::ParrotInputSelector_eventGetKeyIconFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execGetKeyIconFromSlot)
{
	P_GET_OBJECT(UCommonInputSubsystem,Z_Param_CommonInputSubsystem);
	P_GET_ENUM(EPlayerMappableKeySlot,Z_Param_InSlot);
	P_GET_ENUM(ECommonInputType,Z_Param_InputType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=P_THIS->GetKeyIconFromSlot(Z_Param_CommonInputSubsystem,EPlayerMappableKeySlot(Z_Param_InSlot),ECommonInputType(Z_Param_InputType));
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function GetKeyIconFromSlot ***************************

// ********** Begin Class UParrotInputSelector Function GetKeyTextFromSlot *************************
struct Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics
{
	struct ParrotInputSelector_eventGetKeyTextFromSlot_Parms
	{
		EPlayerMappableKeySlot InSlot;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the display name text from the specified slot \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the display name text from the specified slot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSlot;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::NewProp_InSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetKeyTextFromSlot_Parms, InSlot), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlot_MetaData), NewProp_InSlot_MetaData) }; // 2567049235
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetKeyTextFromSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::NewProp_InSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::NewProp_InSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "GetKeyTextFromSlot", Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::ParrotInputSelector_eventGetKeyTextFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::ParrotInputSelector_eventGetKeyTextFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execGetKeyTextFromSlot)
{
	P_GET_ENUM(EPlayerMappableKeySlot,Z_Param_InSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetKeyTextFromSlot(EPlayerMappableKeySlot(Z_Param_InSlot));
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function GetKeyTextFromSlot ***************************

// ********** Begin Class UParrotInputSelector Function GetUserSettings ****************************
struct Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics
{
	struct ParrotInputSelector_eventGetUserSettings_Parms
	{
		UEnhancedInputUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the Enhanced Input user settings \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Enhanced Input user settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventGetUserSettings_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "GetUserSettings", Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::ParrotInputSelector_eventGetUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::ParrotInputSelector_eventGetUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_GetUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_GetUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execGetUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedInputUserSettings**)Z_Param__Result=P_THIS->GetUserSettings();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function GetUserSettings ******************************

// ********** Begin Class UParrotInputSelector Function InitializeInputData ************************
struct Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics
{
	struct ParrotInputSelector_eventInitializeInputData_Parms
	{
		const UEnhancedPlayerMappableKeyProfile* KeyProfile;
		FPlayerKeyMapping MappingData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets up the input selector with the minimum required input data\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets up the input selector with the minimum required input data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::NewProp_KeyProfile = { "KeyProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventInitializeInputData_Parms, KeyProfile), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyProfile_MetaData), NewProp_KeyProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::NewProp_MappingData = { "MappingData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventInitializeInputData_Parms, MappingData), Z_Construct_UScriptStruct_FPlayerKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingData_MetaData), NewProp_MappingData_MetaData) }; // 610586680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::NewProp_KeyProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::NewProp_MappingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "InitializeInputData", Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::ParrotInputSelector_eventInitializeInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::ParrotInputSelector_eventInitializeInputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_InitializeInputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_InitializeInputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execInitializeInputData)
{
	P_GET_OBJECT(UEnhancedPlayerMappableKeyProfile,Z_Param_KeyProfile);
	P_GET_STRUCT_REF(FPlayerKeyMapping,Z_Param_Out_MappingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeInputData(Z_Param_KeyProfile,Z_Param_Out_MappingData);
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function InitializeInputData **************************

// ********** Begin Class UParrotInputSelector Function IsMappingCustomized ************************
struct Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics
{
	struct ParrotInputSelector_eventIsMappingCustomized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if mapping on this selector has been customized\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if mapping on this selector has been customized" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotInputSelector_eventIsMappingCustomized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotInputSelector_eventIsMappingCustomized_Parms), &Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "IsMappingCustomized", Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::ParrotInputSelector_eventIsMappingCustomized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::ParrotInputSelector_eventIsMappingCustomized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execIsMappingCustomized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMappingCustomized();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function IsMappingCustomized **************************

// ********** Begin Class UParrotInputSelector Function OnParentMouseButtonUp **********************
struct Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics
{
	struct ParrotInputSelector_eventOnParentMouseButtonUp_Parms
	{
		FGeometry InGeometry;
		FPointerEvent InMouseEvent;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows pass through of the parent's mouse button event to this particular input selector \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows pass through of the parent's mouse button event to this particular input selector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventOnParentMouseButtonUp_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGeometry_MetaData), NewProp_InGeometry_MetaData) }; // 2519437962
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventOnParentMouseButtonUp_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMouseEvent_MetaData), NewProp_InMouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventOnParentMouseButtonUp_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 1503038592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::NewProp_InGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::NewProp_InMouseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "OnParentMouseButtonUp", Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::ParrotInputSelector_eventOnParentMouseButtonUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::ParrotInputSelector_eventOnParentMouseButtonUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execOnParentMouseButtonUp)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_InGeometry);
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_InMouseEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=P_THIS->OnParentMouseButtonUp(Z_Param_Out_InGeometry,Z_Param_Out_InMouseEvent);
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function OnParentMouseButtonUp ************************

// ********** Begin Class UParrotInputSelector Function ResetToDefault *****************************
struct Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics
{
	struct ParrotInputSelector_eventResetToDefault_Parms
	{
		EPlayerMappableKeySlot InSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resets this input selector to the default key mappings for the input action \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets this input selector to the default key mappings for the input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::NewProp_InSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotInputSelector_eventResetToDefault_Parms, InSlot), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlot_MetaData), NewProp_InSlot_MetaData) }; // 2567049235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::NewProp_InSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::NewProp_InSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "ResetToDefault", Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::ParrotInputSelector_eventResetToDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::ParrotInputSelector_eventResetToDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotInputSelector_ResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_ResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execResetToDefault)
{
	P_GET_ENUM(EPlayerMappableKeySlot,Z_Param_InSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefault(EPlayerMappableKeySlot(Z_Param_InSlot));
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function ResetToDefault *******************************

// ********** Begin Class UParrotInputSelector Function RestoreToInitial ***************************
struct Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resets this input selector to the initial key mappings for the input action\n// Note that this is not the same as the default key mappings. \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets this input selector to the initial key mappings for the input action\nNote that this is not the same as the default key mappings." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "RestoreToInitial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execRestoreToInitial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreToInitial();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function RestoreToInitial *****************************

// ********** Begin Class UParrotInputSelector Function StoreInitial *******************************
struct Z_Construct_UFunction_UParrotInputSelector_StoreInitial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores the initial key mappings for the input action \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the initial key mappings for the input action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotInputSelector_StoreInitial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotInputSelector, nullptr, "StoreInitial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotInputSelector_StoreInitial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotInputSelector_StoreInitial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UParrotInputSelector_StoreInitial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotInputSelector_StoreInitial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotInputSelector::execStoreInitial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoreInitial();
	P_NATIVE_END;
}
// ********** End Class UParrotInputSelector Function StoreInitial *********************************

// ********** Begin Class UParrotInputSelector *****************************************************
void UParrotInputSelector::StaticRegisterNativesUParrotInputSelector()
{
	UClass* Class = UParrotInputSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeBinding", &UParrotInputSelector::execChangeBinding },
		{ "FindMappableKeyProfile", &UParrotInputSelector::execFindMappableKeyProfile },
		{ "GetActionMappingDisplayCategory", &UParrotInputSelector::execGetActionMappingDisplayCategory },
		{ "GetActionMappingDisplayName", &UParrotInputSelector::execGetActionMappingDisplayName },
		{ "GetKeyIconFromSlot", &UParrotInputSelector::execGetKeyIconFromSlot },
		{ "GetKeyTextFromSlot", &UParrotInputSelector::execGetKeyTextFromSlot },
		{ "GetUserSettings", &UParrotInputSelector::execGetUserSettings },
		{ "InitializeInputData", &UParrotInputSelector::execInitializeInputData },
		{ "IsMappingCustomized", &UParrotInputSelector::execIsMappingCustomized },
		{ "OnParentMouseButtonUp", &UParrotInputSelector::execOnParentMouseButtonUp },
		{ "ResetToDefault", &UParrotInputSelector::execResetToDefault },
		{ "RestoreToInitial", &UParrotInputSelector::execRestoreToInitial },
		{ "StoreInitial", &UParrotInputSelector::execStoreInitial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotInputSelector;
UClass* UParrotInputSelector::GetPrivateStaticClass()
{
	using TClass = UParrotInputSelector;
	if (!Z_Registration_Info_UClass_UParrotInputSelector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotInputSelector"),
			Z_Registration_Info_UClass_UParrotInputSelector.InnerSingleton,
			StaticRegisterNativesUParrotInputSelector,
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
	return Z_Registration_Info_UClass_UParrotInputSelector.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotInputSelector_NoRegister()
{
	return UParrotInputSelector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotInputSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A custom common user widget that can enter a key selection state and then listen for a key press - rebinding it to an Input Action. \n * Integrates with the CommonUI and EnhancedInput subsystems to work with key profiles and can provide information about mappings. \n * Examples include the key text or the CommonUI key icon. \n */" },
#endif
		{ "IncludePath", "UI/ParrotInputSelector.h" },
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A custom common user widget that can enter a key selection state and then listen for a key press - rebinding it to an Input Action.\nIntegrates with the CommonUI and EnhancedInput subsystems to work with key profiles and can provide information about mappings.\nExamples include the key text or the CommonUI key icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryOptions_MetaData[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The query options to filter down keys on this selector for\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The query options to filter down keys on this selector for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscapeKeys_MetaData[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The keys used to escape the key selection state when it's active\n// Note that these cannot be bound to an action \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The keys used to escape the key selection state when it's active\nNote that these cannot be bound to an action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InProgressSelectionText_MetaData[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text to return when a key selection is in-progress and key text has not been assigned \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text to return when a key selection is in-progress and key text has not been assigned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappingName_MetaData[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of this action's mappings\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this action's mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingDisplayName_MetaData[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name to display for this action mapping \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name to display for this action mapping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelectingKey_MetaData[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not this selector is actively listening for a key press \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not this selector is actively listening for a key press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyChangeStarted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When the key selection has started \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the key selection has started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyChangeCanceled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When the key selection was started but an escape key was hit \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the key selection was started but an escape key was hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When a key selection was started and successfully completed \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a key selection was started and successfully completed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeySwapped_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When a rebind swaps an already mapped key \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotInputSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a rebind swaps an already mapped key" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EscapeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EscapeKeys;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InProgressSelectionText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionMappingName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MappingDisplayName;
	static void NewProp_bIsSelectingKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelectingKey;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyChangeStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyChangeCanceled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySwapped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotInputSelector_ChangeBinding, "ChangeBinding" }, // 4045076489
		{ &Z_Construct_UFunction_UParrotInputSelector_FindMappableKeyProfile, "FindMappableKeyProfile" }, // 1727158449
		{ &Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayCategory, "GetActionMappingDisplayCategory" }, // 2044417301
		{ &Z_Construct_UFunction_UParrotInputSelector_GetActionMappingDisplayName, "GetActionMappingDisplayName" }, // 1860609946
		{ &Z_Construct_UFunction_UParrotInputSelector_GetKeyIconFromSlot, "GetKeyIconFromSlot" }, // 2288468485
		{ &Z_Construct_UFunction_UParrotInputSelector_GetKeyTextFromSlot, "GetKeyTextFromSlot" }, // 613572500
		{ &Z_Construct_UFunction_UParrotInputSelector_GetUserSettings, "GetUserSettings" }, // 3766687967
		{ &Z_Construct_UFunction_UParrotInputSelector_InitializeInputData, "InitializeInputData" }, // 2570745644
		{ &Z_Construct_UFunction_UParrotInputSelector_IsMappingCustomized, "IsMappingCustomized" }, // 3687492755
		{ &Z_Construct_UFunction_UParrotInputSelector_OnParentMouseButtonUp, "OnParentMouseButtonUp" }, // 847472941
		{ &Z_Construct_UFunction_UParrotInputSelector_ResetToDefault, "ResetToDefault" }, // 2540739351
		{ &Z_Construct_UFunction_UParrotInputSelector_RestoreToInitial, "RestoreToInitial" }, // 2299142457
		{ &Z_Construct_UFunction_UParrotInputSelector_StoreInitial, "StoreInitial" }, // 3523482836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotInputSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_QueryOptions = { "QueryOptions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, QueryOptions), Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryOptions_MetaData), NewProp_QueryOptions_MetaData) }; // 3426885043
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_EscapeKeys_Inner = { "EscapeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_EscapeKeys = { "EscapeKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, EscapeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscapeKeys_MetaData), NewProp_EscapeKeys_MetaData) }; // 3982742631
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_InProgressSelectionText = { "InProgressSelectionText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, InProgressSelectionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InProgressSelectionText_MetaData), NewProp_InProgressSelectionText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_ActionMappingName = { "ActionMappingName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, ActionMappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMappingName_MetaData), NewProp_ActionMappingName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_MappingDisplayName = { "MappingDisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, MappingDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingDisplayName_MetaData), NewProp_MappingDisplayName_MetaData) };
void Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_bIsSelectingKey_SetBit(void* Obj)
{
	((UParrotInputSelector*)Obj)->bIsSelectingKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_bIsSelectingKey = { "bIsSelectingKey", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParrotInputSelector), &Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_bIsSelectingKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelectingKey_MetaData), NewProp_bIsSelectingKey_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeyChangeStarted = { "OnKeyChangeStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, OnKeyChangeStarted), Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyChangeStarted_MetaData), NewProp_OnKeyChangeStarted_MetaData) }; // 2065787254
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeyChangeCanceled = { "OnKeyChangeCanceled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, OnKeyChangeCanceled), Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyChangeCanceled_MetaData), NewProp_OnKeyChangeCanceled_MetaData) }; // 1746340253
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeyChanged = { "OnKeyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, OnKeyChanged), Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyChanged_MetaData), NewProp_OnKeyChanged_MetaData) }; // 628493559
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeySwapped = { "OnKeySwapped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotInputSelector, OnKeySwapped), Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeySwapped_MetaData), NewProp_OnKeySwapped_MetaData) }; // 2225026507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotInputSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_QueryOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_EscapeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_EscapeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_InProgressSelectionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_ActionMappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_MappingDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_bIsSelectingKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeyChangeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeyChangeCanceled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeyChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotInputSelector_Statics::NewProp_OnKeySwapped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotInputSelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotInputSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotInputSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotInputSelector_Statics::ClassParams = {
	&UParrotInputSelector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParrotInputSelector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotInputSelector_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotInputSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotInputSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotInputSelector()
{
	if (!Z_Registration_Info_UClass_UParrotInputSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotInputSelector.OuterSingleton, Z_Construct_UClass_UParrotInputSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotInputSelector.OuterSingleton;
}
UParrotInputSelector::UParrotInputSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotInputSelector);
UParrotInputSelector::~UParrotInputSelector() {}
// ********** End Class UParrotInputSelector *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotInputSelector, UParrotInputSelector::StaticClass, TEXT("UParrotInputSelector"), &Z_Registration_Info_UClass_UParrotInputSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotInputSelector), 4060900832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h__Script_Parrot_1744103225(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotInputSelector_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
