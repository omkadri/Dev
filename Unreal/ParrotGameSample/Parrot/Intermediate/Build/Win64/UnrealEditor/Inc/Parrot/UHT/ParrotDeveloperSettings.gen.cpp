// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/ParrotDeveloperSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotDeveloperSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotDeveloperSettings();
PARROT_API UClass* Z_Construct_UClass_UParrotDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotDeveloperSettings Function GetParrotDeveloperSettings *************
struct Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics
{
	struct ParrotDeveloperSettings_eventGetParrotDeveloperSettings_Parms
	{
		const UParrotDeveloperSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot Developer Settings" },
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotDeveloperSettings_eventGetParrotDeveloperSettings_Parms, ReturnValue), Z_Construct_UClass_UParrotDeveloperSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotDeveloperSettings, nullptr, "GetParrotDeveloperSettings", Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::ParrotDeveloperSettings_eventGetParrotDeveloperSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::ParrotDeveloperSettings_eventGetParrotDeveloperSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotDeveloperSettings::execGetParrotDeveloperSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UParrotDeveloperSettings**)Z_Param__Result=UParrotDeveloperSettings::GetParrotDeveloperSettings();
	P_NATIVE_END;
}
// ********** End Class UParrotDeveloperSettings Function GetParrotDeveloperSettings ***************

// ********** Begin Class UParrotDeveloperSettings Function ShouldSkipLogoTrain ********************
struct Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics
{
	struct ParrotDeveloperSettings_eventShouldSkipLogoTrain_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot Developer Settings" },
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotDeveloperSettings_eventShouldSkipLogoTrain_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotDeveloperSettings_eventShouldSkipLogoTrain_Parms), &Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotDeveloperSettings, nullptr, "ShouldSkipLogoTrain", Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::ParrotDeveloperSettings_eventShouldSkipLogoTrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::ParrotDeveloperSettings_eventShouldSkipLogoTrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotDeveloperSettings::execShouldSkipLogoTrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSkipLogoTrain();
	P_NATIVE_END;
}
// ********** End Class UParrotDeveloperSettings Function ShouldSkipLogoTrain **********************

// ********** Begin Class UParrotDeveloperSettings *************************************************
void UParrotDeveloperSettings::StaticRegisterNativesUParrotDeveloperSettings()
{
	UClass* Class = UParrotDeveloperSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetParrotDeveloperSettings", &UParrotDeveloperSettings::execGetParrotDeveloperSettings },
		{ "ShouldSkipLogoTrain", &UParrotDeveloperSettings::execShouldSkipLogoTrain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotDeveloperSettings;
UClass* UParrotDeveloperSettings::GetPrivateStaticClass()
{
	using TClass = UParrotDeveloperSettings;
	if (!Z_Registration_Info_UClass_UParrotDeveloperSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotDeveloperSettings"),
			Z_Registration_Info_UClass_UParrotDeveloperSettings.InnerSingleton,
			StaticRegisterNativesUParrotDeveloperSettings,
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
	return Z_Registration_Info_UClass_UParrotDeveloperSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotDeveloperSettings_NoRegister()
{
	return UParrotDeveloperSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An auto discovered settings object specifically for Parrot. We can store any project specific objects and properties here.\n * Those soft object pointers will be written to an .ini file used by the game\n */" },
#endif
		{ "DisplayName", "Parrot Project Settings" },
		{ "IncludePath", "Settings/ParrotDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An auto discovered settings object specifically for Parrot. We can store any project specific objects and properties here.\nThose soft object pointers will be written to an .ini file used by the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundMixModifier_MetaData[] = {
		{ "Category", "Parrot Audio Settings|Default Classes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Default Mix Modifier for Audio \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Mix Modifier for Audio" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainSoundClass_MetaData[] = {
		{ "Category", "Parrot Audio Settings|Default Classes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Main Sound Class for volume changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Main Sound Class for volume changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicSoundClass_MetaData[] = {
		{ "Category", "Parrot Audio Settings|Default Classes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Music Sound Class for volume changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Music Sound Class for volume changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXSoundClass_MetaData[] = {
		{ "Category", "Parrot Audio Settings|Default Classes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The SFX Sound Class for volume changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The SFX Sound Class for volume changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelCompleteMusic_MetaData[] = {
		{ "Category", "Parrot Audio Settings|Default Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The (optional) victory music for the audio subsystem to play for a world\n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The (optional) victory music for the audio subsystem to play for a world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelFailMusic_MetaData[] = {
		{ "Category", "Parrot Audio Settings|Default Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The (optional) failure music for the audio subsystem to play for a world\n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The (optional) failure music for the audio subsystem to play for a world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipLogoTrain_MetaData[] = {
		{ "Category", "Parrot Editor Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An editor time toggle for skipping the logo train when launching from the main menu in editor\n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An editor time toggle for skipping the logo train when launching from the main menu in editor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSoundMixModifier;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MainSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MusicSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SFXSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelCompleteMusic;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelFailMusic;
	static void NewProp_bSkipLogoTrain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipLogoTrain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotDeveloperSettings_GetParrotDeveloperSettings, "GetParrotDeveloperSettings" }, // 3713789628
		{ &Z_Construct_UFunction_UParrotDeveloperSettings_ShouldSkipLogoTrain, "ShouldSkipLogoTrain" }, // 2423781425
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_DefaultSoundMixModifier = { "DefaultSoundMixModifier", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotDeveloperSettings, DefaultSoundMixModifier), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundMixModifier_MetaData), NewProp_DefaultSoundMixModifier_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_MainSoundClass = { "MainSoundClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotDeveloperSettings, MainSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainSoundClass_MetaData), NewProp_MainSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_MusicSoundClass = { "MusicSoundClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotDeveloperSettings, MusicSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicSoundClass_MetaData), NewProp_MusicSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_SFXSoundClass = { "SFXSoundClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotDeveloperSettings, SFXSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXSoundClass_MetaData), NewProp_SFXSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_LevelCompleteMusic = { "LevelCompleteMusic", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotDeveloperSettings, LevelCompleteMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelCompleteMusic_MetaData), NewProp_LevelCompleteMusic_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_LevelFailMusic = { "LevelFailMusic", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotDeveloperSettings, LevelFailMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelFailMusic_MetaData), NewProp_LevelFailMusic_MetaData) };
void Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_bSkipLogoTrain_SetBit(void* Obj)
{
	((UParrotDeveloperSettings*)Obj)->bSkipLogoTrain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_bSkipLogoTrain = { "bSkipLogoTrain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParrotDeveloperSettings), &Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_bSkipLogoTrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipLogoTrain_MetaData), NewProp_bSkipLogoTrain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_DefaultSoundMixModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_MainSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_MusicSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_SFXSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_LevelCompleteMusic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_LevelFailMusic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotDeveloperSettings_Statics::NewProp_bSkipLogoTrain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotDeveloperSettings_Statics::ClassParams = {
	&UParrotDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParrotDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UParrotDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotDeveloperSettings.OuterSingleton, Z_Construct_UClass_UParrotDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotDeveloperSettings.OuterSingleton;
}
UParrotDeveloperSettings::UParrotDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotDeveloperSettings);
UParrotDeveloperSettings::~UParrotDeveloperSettings() {}
// ********** End Class UParrotDeveloperSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotDeveloperSettings, UParrotDeveloperSettings::StaticClass, TEXT("UParrotDeveloperSettings"), &Z_Registration_Info_UClass_UParrotDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotDeveloperSettings), 2491482052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h__Script_Parrot_888426130(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotDeveloperSettings_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
