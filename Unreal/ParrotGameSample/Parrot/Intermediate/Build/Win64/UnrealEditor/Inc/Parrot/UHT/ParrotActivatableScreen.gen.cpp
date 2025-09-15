// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ParrotActivatableScreen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotActivatableScreen() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
PARROT_API UClass* Z_Construct_UClass_UParrotActivatableScreen();
PARROT_API UClass* Z_Construct_UClass_UParrotActivatableScreen_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotActivatableScreen Function CloseScreen ****************************
struct Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes this screen widget from viewport by calling into ParrotGameLayout to remove it from the \"MenuStack\" layer.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotActivatableScreen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes this screen widget from viewport by calling into ParrotGameLayout to remove it from the \"MenuStack\" layer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotActivatableScreen, nullptr, "CloseScreen", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotActivatableScreen::execCloseScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseScreen();
	P_NATIVE_END;
}
// ********** End Class UParrotActivatableScreen Function CloseScreen ******************************

// ********** Begin Class UParrotActivatableScreen Function OnGenericBackTriggered *****************
static FName NAME_UParrotActivatableScreen_OnGenericBackTriggered = FName(TEXT("OnGenericBackTriggered"));
void UParrotActivatableScreen::OnGenericBackTriggered()
{
	UFunction* Func = FindFunctionChecked(NAME_UParrotActivatableScreen_OnGenericBackTriggered);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define a custom event for blueprints to react to when the \"back\" action is invoked. \n// This lets the base class handle the CommonUI back action handle while the derived blueprints can implement behavior for this event\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotActivatableScreen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define a custom event for blueprints to react to when the \"back\" action is invoked.\nThis lets the base class handle the CommonUI back action handle while the derived blueprints can implement behavior for this event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotActivatableScreen, nullptr, "OnGenericBackTriggered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UParrotActivatableScreen Function OnGenericBackTriggered *******************

// ********** Begin Class UParrotActivatableScreen Function RefreshUIInputConfig *******************
struct Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This function allows us to refresh the CommonUI-commanded input config (e.g. Game, Menu)\n// Useful in some scenarios such as transitioning levels when the PlayerController is cycled out\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotActivatableScreen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function allows us to refresh the CommonUI-commanded input config (e.g. Game, Menu)\nUseful in some scenarios such as transitioning levels when the PlayerController is cycled out" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotActivatableScreen, nullptr, "RefreshUIInputConfig", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotActivatableScreen::execRefreshUIInputConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshUIInputConfig();
	P_NATIVE_END;
}
// ********** End Class UParrotActivatableScreen Function RefreshUIInputConfig *********************

// ********** Begin Class UParrotActivatableScreen *************************************************
void UParrotActivatableScreen::StaticRegisterNativesUParrotActivatableScreen()
{
	UClass* Class = UParrotActivatableScreen::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseScreen", &UParrotActivatableScreen::execCloseScreen },
		{ "RefreshUIInputConfig", &UParrotActivatableScreen::execRefreshUIInputConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotActivatableScreen;
UClass* UParrotActivatableScreen::GetPrivateStaticClass()
{
	using TClass = UParrotActivatableScreen;
	if (!Z_Registration_Info_UClass_UParrotActivatableScreen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotActivatableScreen"),
			Z_Registration_Info_UClass_UParrotActivatableScreen.InnerSingleton,
			StaticRegisterNativesUParrotActivatableScreen,
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
	return Z_Registration_Info_UClass_UParrotActivatableScreen.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotActivatableScreen_NoRegister()
{
	return UParrotActivatableScreen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotActivatableScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ParrotActivatableScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ParrotActivatableScreen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotActivatableScreen_CloseScreen, "CloseScreen" }, // 1308224841
		{ &Z_Construct_UFunction_UParrotActivatableScreen_OnGenericBackTriggered, "OnGenericBackTriggered" }, // 1963421548
		{ &Z_Construct_UFunction_UParrotActivatableScreen_RefreshUIInputConfig, "RefreshUIInputConfig" }, // 3184435434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotActivatableScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParrotActivatableScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotActivatableScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotActivatableScreen_Statics::ClassParams = {
	&UParrotActivatableScreen::StaticClass,
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
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotActivatableScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotActivatableScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotActivatableScreen()
{
	if (!Z_Registration_Info_UClass_UParrotActivatableScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotActivatableScreen.OuterSingleton, Z_Construct_UClass_UParrotActivatableScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotActivatableScreen.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotActivatableScreen);
UParrotActivatableScreen::~UParrotActivatableScreen() {}
// ********** End Class UParrotActivatableScreen ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotActivatableScreen, UParrotActivatableScreen::StaticClass, TEXT("UParrotActivatableScreen"), &Z_Registration_Info_UClass_UParrotActivatableScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotActivatableScreen), 1477278883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h__Script_Parrot_1089647656(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotActivatableScreen_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
