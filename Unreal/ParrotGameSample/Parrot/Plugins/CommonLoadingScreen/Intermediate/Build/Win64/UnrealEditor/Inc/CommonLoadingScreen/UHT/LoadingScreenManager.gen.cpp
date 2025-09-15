// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingScreenManager.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLoadingScreenManager() {}

// ********** Begin Cross Module References ********************************************************
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenManager();
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULoadingScreenManager Function GetDebugReasonForShowingOrHidingLoadingScreen 
struct Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics
{
	struct LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LoadingScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of FTickableObjectBase interface\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULoadingScreenManager, nullptr, "GetDebugReasonForShowingOrHidingLoadingScreen", Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadingScreenManager::execGetDebugReasonForShowingOrHidingLoadingScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebugReasonForShowingOrHidingLoadingScreen();
	P_NATIVE_END;
}
// ********** End Class ULoadingScreenManager Function GetDebugReasonForShowingOrHidingLoadingScreen 

// ********** Begin Class ULoadingScreenManager ****************************************************
void ULoadingScreenManager::StaticRegisterNativesULoadingScreenManager()
{
	UClass* Class = ULoadingScreenManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDebugReasonForShowingOrHidingLoadingScreen", &ULoadingScreenManager::execGetDebugReasonForShowingOrHidingLoadingScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULoadingScreenManager;
UClass* ULoadingScreenManager::GetPrivateStaticClass()
{
	using TClass = ULoadingScreenManager;
	if (!Z_Registration_Info_UClass_ULoadingScreenManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LoadingScreenManager"),
			Z_Registration_Info_UClass_ULoadingScreenManager.InnerSingleton,
			StaticRegisterNativesULoadingScreenManager,
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
	return Z_Registration_Info_UClass_ULoadingScreenManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ULoadingScreenManager_NoRegister()
{
	return ULoadingScreenManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULoadingScreenManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles showing/hiding the loading screen\n */" },
#endif
		{ "IncludePath", "LoadingScreenManager.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles showing/hiding the loading screen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidgetClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Loaded class from our widget reference. Cached once on initialize */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loaded class from our widget reference. Cached once on initialize" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingScreenWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen, "GetDebugReasonForShowingOrHidingLoadingScreen" }, // 1730372247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadingScreenManager_Statics::NewProp_LoadingScreenWidgetClass = { "LoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenManager, LoadingScreenWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenWidgetClass_MetaData), NewProp_LoadingScreenWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenManager_Statics::NewProp_LoadingScreenWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadingScreenManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenManager_Statics::ClassParams = {
	&ULoadingScreenManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadingScreenManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingScreenManager()
{
	if (!Z_Registration_Info_UClass_ULoadingScreenManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenManager.OuterSingleton, Z_Construct_UClass_ULoadingScreenManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingScreenManager.OuterSingleton;
}
ULoadingScreenManager::ULoadingScreenManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenManager);
ULoadingScreenManager::~ULoadingScreenManager() {}
// ********** End Class ULoadingScreenManager ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingScreenManager_h__Script_CommonLoadingScreen_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenManager, ULoadingScreenManager::StaticClass, TEXT("ULoadingScreenManager"), &Z_Registration_Info_UClass_ULoadingScreenManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenManager), 3749395301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingScreenManager_h__Script_CommonLoadingScreen_3564153105(TEXT("/Script/CommonLoadingScreen"),
	Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingScreenManager_h__Script_CommonLoadingScreen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingScreenManager_h__Script_CommonLoadingScreen_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
