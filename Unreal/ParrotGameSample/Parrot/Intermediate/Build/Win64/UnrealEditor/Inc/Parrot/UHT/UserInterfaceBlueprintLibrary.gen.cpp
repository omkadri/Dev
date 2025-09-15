// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/UserInterfaceBlueprintLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUserInterfaceBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PARROT_API UClass* Z_Construct_UClass_UUserInterfaceBlueprintLibrary();
PARROT_API UClass* Z_Construct_UClass_UUserInterfaceBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUserInterfaceBlueprintLibrary Function GetProjectVersion ****************
struct Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics
{
	struct UserInterfaceBlueprintLibrary_eventGetProjectVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pulls the project version as an FString from the Project Settings \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/UserInterfaceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pulls the project version as an FString from the Project Settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInterfaceBlueprintLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInterfaceBlueprintLibrary, nullptr, "GetProjectVersion", Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::UserInterfaceBlueprintLibrary_eventGetProjectVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::UserInterfaceBlueprintLibrary_eventGetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInterfaceBlueprintLibrary::execGetProjectVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUserInterfaceBlueprintLibrary::GetProjectVersion();
	P_NATIVE_END;
}
// ********** End Class UUserInterfaceBlueprintLibrary Function GetProjectVersion ******************

// ********** Begin Class UUserInterfaceBlueprintLibrary Function PushContentToLayerForPlayer ******
struct Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics
{
	struct UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms
	{
		const APlayerController* PlayerController;
		FGameplayTag LayerName;
		TSubclassOf<UCommonActivatableWidget> WidgetClass;
		UCommonActivatableWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create a new widget and add to target layer. \n// This new widget is activated and displayed on player's viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/UserInterfaceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new widget and add to target layer.\nThis new widget is activated and displayed on player's viewport" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Categories", "UI.Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInterfaceBlueprintLibrary, nullptr, "PushContentToLayerForPlayer", Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::UserInterfaceBlueprintLibrary_eventPushContentToLayerForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInterfaceBlueprintLibrary::execPushContentToLayerForPlayer)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonActivatableWidget**)Z_Param__Result=UUserInterfaceBlueprintLibrary::PushContentToLayerForPlayer(Z_Param_PlayerController,Z_Param_LayerName,Z_Param_WidgetClass);
	P_NATIVE_END;
}
// ********** End Class UUserInterfaceBlueprintLibrary Function PushContentToLayerForPlayer ********

// ********** Begin Class UUserInterfaceBlueprintLibrary Function SetNavigationEnabled *************
struct Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics
{
	struct UserInterfaceBlueprintLibrary_eventSetNavigationEnabled_Parms
	{
		bool bIsNavEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggles the player's ability to use gamepad navigation in UMG \n" },
#endif
		{ "ModuleRelativePath", "Public/UI/UserInterfaceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles the player's ability to use gamepad navigation in UMG" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsNavEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNavEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::NewProp_bIsNavEnabled_SetBit(void* Obj)
{
	((UserInterfaceBlueprintLibrary_eventSetNavigationEnabled_Parms*)Obj)->bIsNavEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::NewProp_bIsNavEnabled = { "bIsNavEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserInterfaceBlueprintLibrary_eventSetNavigationEnabled_Parms), &Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::NewProp_bIsNavEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::NewProp_bIsNavEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInterfaceBlueprintLibrary, nullptr, "SetNavigationEnabled", Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::UserInterfaceBlueprintLibrary_eventSetNavigationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::UserInterfaceBlueprintLibrary_eventSetNavigationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInterfaceBlueprintLibrary::execSetNavigationEnabled)
{
	P_GET_UBOOL(Z_Param_bIsNavEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUserInterfaceBlueprintLibrary::SetNavigationEnabled(Z_Param_bIsNavEnabled);
	P_NATIVE_END;
}
// ********** End Class UUserInterfaceBlueprintLibrary Function SetNavigationEnabled ***************

// ********** Begin Class UUserInterfaceBlueprintLibrary *******************************************
void UUserInterfaceBlueprintLibrary::StaticRegisterNativesUUserInterfaceBlueprintLibrary()
{
	UClass* Class = UUserInterfaceBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetProjectVersion", &UUserInterfaceBlueprintLibrary::execGetProjectVersion },
		{ "PushContentToLayerForPlayer", &UUserInterfaceBlueprintLibrary::execPushContentToLayerForPlayer },
		{ "SetNavigationEnabled", &UUserInterfaceBlueprintLibrary::execSetNavigationEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary;
UClass* UUserInterfaceBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UUserInterfaceBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UserInterfaceBlueprintLibrary"),
			Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUUserInterfaceBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUserInterfaceBlueprintLibrary_NoRegister()
{
	return UUserInterfaceBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* This is a collection of static functions that provide utility functionality related to UI and are accessible from any Blueprint.\n*/" },
#endif
		{ "IncludePath", "UI/UserInterfaceBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/UI/UserInterfaceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This is a collection of static functions that provide utility functionality related to UI and are accessible from any Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_GetProjectVersion, "GetProjectVersion" }, // 2575765460
		{ &Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_PushContentToLayerForPlayer, "PushContentToLayerForPlayer" }, // 2180057580
		{ &Z_Construct_UFunction_UUserInterfaceBlueprintLibrary_SetNavigationEnabled, "SetNavigationEnabled" }, // 2148323234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserInterfaceBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics::ClassParams = {
	&UUserInterfaceBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserInterfaceBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUserInterfaceBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary.OuterSingleton;
}
UUserInterfaceBlueprintLibrary::UUserInterfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserInterfaceBlueprintLibrary);
UUserInterfaceBlueprintLibrary::~UUserInterfaceBlueprintLibrary() {}
// ********** End Class UUserInterfaceBlueprintLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserInterfaceBlueprintLibrary, UUserInterfaceBlueprintLibrary::StaticClass, TEXT("UUserInterfaceBlueprintLibrary"), &Z_Registration_Info_UClass_UUserInterfaceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserInterfaceBlueprintLibrary), 2519501399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h__Script_Parrot_3205831442(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_UserInterfaceBlueprintLibrary_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
