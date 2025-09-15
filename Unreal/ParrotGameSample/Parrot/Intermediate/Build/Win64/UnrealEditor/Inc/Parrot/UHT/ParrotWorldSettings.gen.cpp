// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/ParrotWorldSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotWorldSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PARROT_API UClass* Z_Construct_UClass_AParrotWorldSettings();
PARROT_API UClass* Z_Construct_UClass_AParrotWorldSettings_NoRegister();
PARROT_API UEnum* Z_Construct_UEnum_Parrot_ECameraMode();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AParrotWorldSettings *****************************************************
void AParrotWorldSettings::StaticRegisterNativesAParrotWorldSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotWorldSettings;
UClass* AParrotWorldSettings::GetPrivateStaticClass()
{
	using TClass = AParrotWorldSettings;
	if (!Z_Registration_Info_UClass_AParrotWorldSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotWorldSettings"),
			Z_Registration_Info_UClass_AParrotWorldSettings.InnerSingleton,
			StaticRegisterNativesAParrotWorldSettings,
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
	return Z_Registration_Info_UClass_AParrotWorldSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotWorldSettings_NoRegister()
{
	return AParrotWorldSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotWorldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor containing all script accessible world properties. \n * For Parrot, these are object references that each level will need as we load in.  \n */" },
#endif
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication LevelInstance Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "Settings/ParrotWorldSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ParrotWorldSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor containing all script accessible world properties.\nFor Parrot, these are object references that each level will need as we load in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMusic_MetaData[] = {
		{ "Category", "Parrot|Audio|Sounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default music for audio subsystem to play for a world once all loading has completed\n// (Can be 'None')\n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default music for audio subsystem to play for a world once all loading has completed\n(Can be 'None')" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraActorClass_MetaData[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default camera actor class that should spawn in the world as part of the camera subsystem \n// (Can be 'None') \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default camera actor class that should spawn in the world as part of the camera subsystem\n(Can be 'None')" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default camera behavior tick mode that the parrot camera should use \n// (Can be 'None') \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default camera behavior tick mode that the parrot camera should use\n(Can be 'None')" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutoffLowerBoundZ_MetaData[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The lower bound at which the camera will stop following player Z \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The lower bound at which the camera will stop following player Z" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutoffUpperBoundZ_MetaData[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The upper bound at which the camera will stop following player Z \n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ParrotWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The upper bound at which the camera will stop following player Z" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMusic;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraActorClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffLowerBoundZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffUpperBoundZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotWorldSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_WorldMusic = { "WorldMusic", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotWorldSettings, WorldMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMusic_MetaData), NewProp_WorldMusic_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_CameraActorClass = { "CameraActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotWorldSettings, CameraActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraActorClass_MetaData), NewProp_CameraActorClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_DefaultCameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotWorldSettings, DefaultCameraMode), Z_Construct_UEnum_Parrot_ECameraMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) }; // 1089537300
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_CutoffLowerBoundZ = { "CutoffLowerBoundZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotWorldSettings, CutoffLowerBoundZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutoffLowerBoundZ_MetaData), NewProp_CutoffLowerBoundZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_CutoffUpperBoundZ = { "CutoffUpperBoundZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotWorldSettings, CutoffUpperBoundZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutoffUpperBoundZ_MetaData), NewProp_CutoffUpperBoundZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotWorldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_WorldMusic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_CameraActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_DefaultCameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_DefaultCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_CutoffLowerBoundZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotWorldSettings_Statics::NewProp_CutoffUpperBoundZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotWorldSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotWorldSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWorldSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotWorldSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotWorldSettings_Statics::ClassParams = {
	&AParrotWorldSettings::StaticClass,
	"game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AParrotWorldSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotWorldSettings_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotWorldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotWorldSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotWorldSettings()
{
	if (!Z_Registration_Info_UClass_AParrotWorldSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotWorldSettings.OuterSingleton, Z_Construct_UClass_AParrotWorldSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotWorldSettings.OuterSingleton;
}
AParrotWorldSettings::AParrotWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotWorldSettings);
AParrotWorldSettings::~AParrotWorldSettings() {}
// ********** End Class AParrotWorldSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotWorldSettings, AParrotWorldSettings::StaticClass, TEXT("AParrotWorldSettings"), &Z_Registration_Info_UClass_AParrotWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotWorldSettings), 1903791334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h__Script_Parrot_2598640429(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Settings_ParrotWorldSettings_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
