// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/ParrotPatrolRigDebugVisualizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotPatrolRigDebugVisualizer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
PARROT_API UClass* Z_Construct_UClass_UParrotPatrolRigDebugVisualizer();
PARROT_API UClass* Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotPatrolRigDebugVisualizer ******************************************
void UParrotPatrolRigDebugVisualizer::StaticRegisterNativesUParrotPatrolRigDebugVisualizer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer;
UClass* UParrotPatrolRigDebugVisualizer::GetPrivateStaticClass()
{
	using TClass = UParrotPatrolRigDebugVisualizer;
	if (!Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotPatrolRigDebugVisualizer"),
			Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer.InnerSingleton,
			StaticRegisterNativesUParrotPatrolRigDebugVisualizer,
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
	return Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_NoRegister()
{
	return UParrotPatrolRigDebugVisualizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This derivative of the UDebugDrawComponent gives us a component to attach to any actor we want\n * and provides the necessary methods to tie together the ability to draw debug text in the editor viewport\n * at edit time. This can also be expanded to draw shapes such as lines, spheres, cones, etc.\n * to visualize whatever you need to at edit time to represent your actor.\n */" },
#endif
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Enemy/ParrotPatrolRigDebugVisualizer.h" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotPatrolRigDebugVisualizer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This derivative of the UDebugDrawComponent gives us a component to attach to any actor we want\nand provides the necessary methods to tie together the ability to draw debug text in the editor viewport\nat edit time. This can also be expanded to draw shapes such as lines, spheres, cones, etc.\nto visualize whatever you need to at edit time to represent your actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[] = {
		{ "Category", "ParrotPatrolRigDebugVisualizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The scale of text to display \n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotPatrolRigDebugVisualizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scale of text to display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotPatrolRigDebugVisualizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotPatrolRigDebugVisualizer, TextScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextScale_MetaData), NewProp_TextScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::NewProp_TextScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::ClassParams = {
	&UParrotPatrolRigDebugVisualizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotPatrolRigDebugVisualizer()
{
	if (!Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer.OuterSingleton, Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotPatrolRigDebugVisualizer);
UParrotPatrolRigDebugVisualizer::~UParrotPatrolRigDebugVisualizer() {}
// ********** End Class UParrotPatrolRigDebugVisualizer ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotPatrolRigDebugVisualizer_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotPatrolRigDebugVisualizer, UParrotPatrolRigDebugVisualizer::StaticClass, TEXT("UParrotPatrolRigDebugVisualizer"), &Z_Registration_Info_UClass_UParrotPatrolRigDebugVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotPatrolRigDebugVisualizer), 1937859667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotPatrolRigDebugVisualizer_h__Script_Parrot_31704889(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotPatrolRigDebugVisualizer_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotPatrolRigDebugVisualizer_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
