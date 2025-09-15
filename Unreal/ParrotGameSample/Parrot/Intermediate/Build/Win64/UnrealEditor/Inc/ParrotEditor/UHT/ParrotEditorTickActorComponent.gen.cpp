// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParrotEditorTickActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotEditorTickActorComponent() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityActorComponent();
PARROTEDITOR_API UClass* Z_Construct_UClass_UParrotEditorTickActorComponent();
PARROTEDITOR_API UClass* Z_Construct_UClass_UParrotEditorTickActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ParrotEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotEditorTickActorComponent ******************************************
void UParrotEditorTickActorComponent::StaticRegisterNativesUParrotEditorTickActorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotEditorTickActorComponent;
UClass* UParrotEditorTickActorComponent::GetPrivateStaticClass()
{
	using TClass = UParrotEditorTickActorComponent;
	if (!Z_Registration_Info_UClass_UParrotEditorTickActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotEditorTickActorComponent"),
			Z_Registration_Info_UClass_UParrotEditorTickActorComponent.InnerSingleton,
			StaticRegisterNativesUParrotEditorTickActorComponent,
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
	return Z_Registration_Info_UClass_UParrotEditorTickActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotEditorTickActorComponent_NoRegister()
{
	return UParrotEditorTickActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotEditorTickActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is a base class intended to use to derive blueprints for editor use that require edit-time ticking.\n * An example being using debug drawing calls to visualize actors at edit time.\n * Blueprintable here exposes the component as a BP base class. \n * BlueprintType allows it to be stored in BP variables .\n * BlueprintSpawnableComponent allows it to be spawned by blueprint actors.\n */" },
#endif
		{ "IncludePath", "ParrotEditorTickActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParrotEditorTickActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a base class intended to use to derive blueprints for editor use that require edit-time ticking.\nAn example being using debug drawing calls to visualize actors at edit time.\nBlueprintable here exposes the component as a BP base class.\nBlueprintType allows it to be stored in BP variables .\nBlueprintSpawnableComponent allows it to be spawned by blueprint actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldTickDuringPlayInEditor_MetaData[] = {
		{ "Category", "EditorTick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This flag will allow us to configure whether our blueprints continue ticking in PIE\n" },
#endif
		{ "ModuleRelativePath", "Public/ParrotEditorTickActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This flag will allow us to configure whether our blueprints continue ticking in PIE" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShouldTickDuringPlayInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldTickDuringPlayInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotEditorTickActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::NewProp_ShouldTickDuringPlayInEditor_SetBit(void* Obj)
{
	((UParrotEditorTickActorComponent*)Obj)->ShouldTickDuringPlayInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::NewProp_ShouldTickDuringPlayInEditor = { "ShouldTickDuringPlayInEditor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParrotEditorTickActorComponent), &Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::NewProp_ShouldTickDuringPlayInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldTickDuringPlayInEditor_MetaData), NewProp_ShouldTickDuringPlayInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::NewProp_ShouldTickDuringPlayInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ParrotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::ClassParams = {
	&UParrotEditorTickActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotEditorTickActorComponent()
{
	if (!Z_Registration_Info_UClass_UParrotEditorTickActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotEditorTickActorComponent.OuterSingleton, Z_Construct_UClass_UParrotEditorTickActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotEditorTickActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotEditorTickActorComponent);
UParrotEditorTickActorComponent::~UParrotEditorTickActorComponent() {}
// ********** End Class UParrotEditorTickActorComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_ParrotEditor_Public_ParrotEditorTickActorComponent_h__Script_ParrotEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotEditorTickActorComponent, UParrotEditorTickActorComponent::StaticClass, TEXT("UParrotEditorTickActorComponent"), &Z_Registration_Info_UClass_UParrotEditorTickActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotEditorTickActorComponent), 1670821694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_ParrotEditor_Public_ParrotEditorTickActorComponent_h__Script_ParrotEditor_793649226(TEXT("/Script/ParrotEditor"),
	Z_CompiledInDeferFile_FID_Parrot_Source_ParrotEditor_Public_ParrotEditorTickActorComponent_h__Script_ParrotEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_ParrotEditor_Public_ParrotEditorTickActorComponent_h__Script_ParrotEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
