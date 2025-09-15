// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/ParrotGameUserSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotGameUserSettings() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
PARROT_API UClass* Z_Construct_UClass_UParrotGameUserSettings();
PARROT_API UClass* Z_Construct_UClass_UParrotGameUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotGameUserSettings **************************************************
void UParrotGameUserSettings::StaticRegisterNativesUParrotGameUserSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotGameUserSettings;
UClass* UParrotGameUserSettings::GetPrivateStaticClass()
{
	using TClass = UParrotGameUserSettings;
	if (!Z_Registration_Info_UClass_UParrotGameUserSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotGameUserSettings"),
			Z_Registration_Info_UClass_UParrotGameUserSettings.InnerSingleton,
			StaticRegisterNativesUParrotGameUserSettings,
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
	return Z_Registration_Info_UClass_UParrotGameUserSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotGameUserSettings_NoRegister()
{
	return UParrotGameUserSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Stores user settings for a Parrot game client (for example graphics and sound settings), with the ability to save and load to and from a file.\n */" },
#endif
		{ "IncludePath", "Settings/ParrotGameUserSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ParrotGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores user settings for a Parrot game client (for example graphics and sound settings), with the ability to save and load to and from a file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The configurable main volume of the game \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configurable main volume of the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The configurable music volume of the game \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configurable music volume of the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The configurable SFX volume of the game\n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configurable SFX volume of the game" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MainVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotGameUserSettings_Statics::NewProp_MainVolume = { "MainVolume", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotGameUserSettings, MainVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainVolume_MetaData), NewProp_MainVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotGameUserSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotGameUserSettings, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotGameUserSettings_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotGameUserSettings, SFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXVolume_MetaData), NewProp_SFXVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameUserSettings_Statics::NewProp_MainVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameUserSettings_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotGameUserSettings_Statics::NewProp_SFXVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotGameUserSettings_Statics::ClassParams = {
	&UParrotGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParrotGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotGameUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UParrotGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotGameUserSettings.OuterSingleton, Z_Construct_UClass_UParrotGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotGameUserSettings.OuterSingleton;
}
UParrotGameUserSettings::UParrotGameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotGameUserSettings);
UParrotGameUserSettings::~UParrotGameUserSettings() {}
// ********** End Class UParrotGameUserSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotGameUserSettings, UParrotGameUserSettings::StaticClass, TEXT("UParrotGameUserSettings"), &Z_Registration_Info_UClass_UParrotGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotGameUserSettings), 3717324090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h__Script_Parrot_2844339768(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotGameUserSettings_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
