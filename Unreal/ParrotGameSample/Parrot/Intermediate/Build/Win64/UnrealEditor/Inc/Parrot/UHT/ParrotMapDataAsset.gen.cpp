// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ParrotMapDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotMapDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotMapDataAsset();
PARROT_API UClass* Z_Construct_UClass_UParrotMapDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotMapDataAsset ******************************************************
void UParrotMapDataAsset::StaticRegisterNativesUParrotMapDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotMapDataAsset;
UClass* UParrotMapDataAsset::GetPrivateStaticClass()
{
	using TClass = UParrotMapDataAsset;
	if (!Z_Registration_Info_UClass_UParrotMapDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotMapDataAsset"),
			Z_Registration_Info_UClass_UParrotMapDataAsset.InnerSingleton,
			StaticRegisterNativesUParrotMapDataAsset,
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
	return Z_Registration_Info_UClass_UParrotMapDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotMapDataAsset_NoRegister()
{
	return UParrotMapDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotMapDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data asset classes store data related to a particular system. Primary data assets have asset bundle support which allows for manual loading/unloading from the Asset Manager. \n * This is particularly useful for defining map data that we'd like to reference and then load. We use TSoftObjectPtr here so we can load the level asynchronously. \n */" },
#endif
		{ "IncludePath", "Data/ParrotMapDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/ParrotMapDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset classes store data related to a particular system. Primary data assets have asset bundle support which allows for manual loading/unloading from the Asset Manager.\nThis is particularly useful for defining map data that we'd like to reference and then load. We use TSoftObjectPtr here so we can load the level asynchronously." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "ParrotMapDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A soft object pointer the particular level we want to load\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/ParrotMapDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A soft object pointer the particular level we want to load" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotMapDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UParrotMapDataAsset_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotMapDataAsset, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotMapDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotMapDataAsset_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotMapDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotMapDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotMapDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotMapDataAsset_Statics::ClassParams = {
	&UParrotMapDataAsset::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParrotMapDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotMapDataAsset_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotMapDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotMapDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotMapDataAsset()
{
	if (!Z_Registration_Info_UClass_UParrotMapDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotMapDataAsset.OuterSingleton, Z_Construct_UClass_UParrotMapDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotMapDataAsset.OuterSingleton;
}
UParrotMapDataAsset::UParrotMapDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotMapDataAsset);
UParrotMapDataAsset::~UParrotMapDataAsset() {}
// ********** End Class UParrotMapDataAsset ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotMapDataAsset, UParrotMapDataAsset::StaticClass, TEXT("UParrotMapDataAsset"), &Z_Registration_Info_UClass_UParrotMapDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotMapDataAsset), 2315272711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h__Script_Parrot_424388363(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Data_ParrotMapDataAsset_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
