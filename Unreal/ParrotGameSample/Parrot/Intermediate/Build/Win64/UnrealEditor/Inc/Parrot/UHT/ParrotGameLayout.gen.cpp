// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ParrotGameLayout.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotGameLayout() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PARROT_API UClass* Z_Construct_UClass_UParrotGameLayout();
PARROT_API UClass* Z_Construct_UClass_UParrotGameLayout_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotGameLayout Function RegisterLayer *********************************
struct Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics
{
	struct ParrotGameLayout_eventRegisterLayer_Parms
	{
		FGameplayTag LayerTag;
		UCommonActivatableWidgetContainerBase* LayerWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Register a layer that widgets can be pushed onto.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotGameLayout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a layer that widgets can be pushed onto." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerTag_MetaData[] = {
		{ "Categories", "UI.Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::NewProp_LayerTag = { "LayerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotGameLayout_eventRegisterLayer_Parms, LayerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerTag_MetaData), NewProp_LayerTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::NewProp_LayerWidget = { "LayerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotGameLayout_eventRegisterLayer_Parms, LayerWidget), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerWidget_MetaData), NewProp_LayerWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::NewProp_LayerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::NewProp_LayerWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotGameLayout, nullptr, "RegisterLayer", Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::ParrotGameLayout_eventRegisterLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::ParrotGameLayout_eventRegisterLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotGameLayout_RegisterLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotGameLayout_RegisterLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotGameLayout::execRegisterLayer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_LayerWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterLayer(Z_Param_LayerTag,Z_Param_LayerWidget);
	P_NATIVE_END;
}
// ********** End Class UParrotGameLayout Function RegisterLayer ***********************************

// ********** Begin Class UParrotGameLayout ********************************************************
void UParrotGameLayout::StaticRegisterNativesUParrotGameLayout()
{
	UClass* Class = UParrotGameLayout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterLayer", &UParrotGameLayout::execRegisterLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotGameLayout;
UClass* UParrotGameLayout::GetPrivateStaticClass()
{
	using TClass = UParrotGameLayout;
	if (!Z_Registration_Info_UClass_UParrotGameLayout.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotGameLayout"),
			Z_Registration_Info_UClass_UParrotGameLayout.InnerSingleton,
			StaticRegisterNativesUParrotGameLayout,
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
	return Z_Registration_Info_UClass_UParrotGameLayout.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotGameLayout_NoRegister()
{
	return UParrotGameLayout::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotGameLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This UI widget is the root widget we are using in our game.\n * It contains a list of UI layers (containers) where we can push our \"activatable\" widgets onto.\n * At any given time only one widget per layer is being displayed.\n */" },
#endif
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/ParrotGameLayout.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ParrotGameLayout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This UI widget is the root widget we are using in our game.\nIt contains a list of UI layers (containers) where we can push our \"activatable\" widgets onto.\nAt any given time only one widget per layer is being displayed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Categories", "UI.Layer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The registered layers for the primary layout.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ParrotGameLayout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The registered layers for the primary layout." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotGameLayout_RegisterLayer, "RegisterLayer" }, // 1424256888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotGameLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotGameLayout_Statics::NewProp_Layers_ValueProp = { "Layers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParrotGameLayout_Statics::NewProp_Layers_Key_KeyProp = { "Layers_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UParrotGameLayout_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotGameLayout, Layers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotGameLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameLayout_Statics::NewProp_Layers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameLayout_Statics::NewProp_Layers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameLayout_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameLayout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotGameLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotGameLayout_Statics::ClassParams = {
	&UParrotGameLayout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParrotGameLayout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameLayout_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotGameLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotGameLayout()
{
	if (!Z_Registration_Info_UClass_UParrotGameLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotGameLayout.OuterSingleton, Z_Construct_UClass_UParrotGameLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotGameLayout.OuterSingleton;
}
UParrotGameLayout::UParrotGameLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotGameLayout);
UParrotGameLayout::~UParrotGameLayout() {}
// ********** End Class UParrotGameLayout **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotGameLayout, UParrotGameLayout::StaticClass, TEXT("UParrotGameLayout"), &Z_Registration_Info_UClass_UParrotGameLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotGameLayout), 1155158373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h__Script_Parrot_604895446(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotGameLayout_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
