// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ParrotHUD.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotHUD() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PARROT_API UClass* Z_Construct_UClass_AParrotHUD();
PARROT_API UClass* Z_Construct_UClass_AParrotHUD_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotGameLayout_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AParrotHUD ***************************************************************
void AParrotHUD::StaticRegisterNativesAParrotHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotHUD;
UClass* AParrotHUD::GetPrivateStaticClass()
{
	using TClass = AParrotHUD;
	if (!Z_Registration_Info_UClass_AParrotHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotHUD"),
			Z_Registration_Info_UClass_AParrotHUD.InnerSingleton,
			StaticRegisterNativesAParrotHUD,
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
	return Z_Registration_Info_UClass_AParrotHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotHUD_NoRegister()
{
	return AParrotHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The HUD class is the base actor class of the heads-up display. It has a canvas and a debug canvas on which primitives can be drawn.\n * A HUD is also associated with a local player and is created as part of the game mode. \n * In Parrot, we use this class as a wrapper to our root layout widget. \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/ParrotHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ParrotHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The HUD class is the base actor class of the heads-up display. It has a canvas and a debug canvas on which primitives can be drawn.\nA HUD is also associated with a local player and is created as part of the game mode.\nIn Parrot, we use this class as a wrapper to our root layout widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootLayoutWidget_MetaData[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layout class to use to setup the UI layout\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ParrotHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layout class to use to setup the UI layout" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetClass_MetaData[] = {
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HUD widget class to create during startup\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD widget class to create during startup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerName_MetaData[] = {
		{ "Categories", "UI.Layer" },
		{ "Category", "Parrot|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The UI layer to create the HUD in\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ParrotHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI layer to create the HUD in" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootLayoutWidget;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotHUD_Statics::NewProp_RootLayoutWidget = { "RootLayoutWidget", nullptr, (EPropertyFlags)0x012408000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotHUD, RootLayoutWidget), Z_Construct_UClass_UParrotGameLayout_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootLayoutWidget_MetaData), NewProp_RootLayoutWidget_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AParrotHUD_Statics::NewProp_DefaultWidgetClass = { "DefaultWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotHUD, DefaultWidgetClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWidgetClass_MetaData), NewProp_DefaultWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParrotHUD_Statics::NewProp_DefaultLayerName = { "DefaultLayerName", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotHUD, DefaultLayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayerName_MetaData), NewProp_DefaultLayerName_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotHUD_Statics::NewProp_RootLayoutWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotHUD_Statics::NewProp_DefaultWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotHUD_Statics::NewProp_DefaultLayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotHUD_Statics::ClassParams = {
	&AParrotHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AParrotHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotHUD_Statics::PropPointers),
	0,
	0x009003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotHUD()
{
	if (!Z_Registration_Info_UClass_AParrotHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotHUD.OuterSingleton, Z_Construct_UClass_AParrotHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotHUD.OuterSingleton;
}
AParrotHUD::AParrotHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotHUD);
AParrotHUD::~AParrotHUD() {}
// ********** End Class AParrotHUD *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotHUD, AParrotHUD::StaticClass, TEXT("AParrotHUD"), &Z_Registration_Info_UClass_AParrotHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotHUD), 3406143062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h__Script_Parrot_2782977807(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_UI_ParrotHUD_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
