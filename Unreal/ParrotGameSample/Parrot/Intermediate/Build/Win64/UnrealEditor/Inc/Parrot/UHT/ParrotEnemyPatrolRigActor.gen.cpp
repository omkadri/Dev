// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/ParrotEnemyPatrolRigActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotEnemyPatrolRigActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyPatrolRigActor();
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyPatrolRigActor_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotEnemyPatrolRigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AParrotEnemyPatrolRigActor ***********************************************
void AParrotEnemyPatrolRigActor::StaticRegisterNativesAParrotEnemyPatrolRigActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor;
UClass* AParrotEnemyPatrolRigActor::GetPrivateStaticClass()
{
	using TClass = AParrotEnemyPatrolRigActor;
	if (!Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotEnemyPatrolRigActor"),
			Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor.InnerSingleton,
			StaticRegisterNativesAParrotEnemyPatrolRigActor,
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
	return Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotEnemyPatrolRigActor_NoRegister()
{
	return AParrotEnemyPatrolRigActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* This is an example of an actor class with a default subobject generated at construction time. This is useful\n* for guaranteeing there is a required component placed into the hierarchy that cannot be removed.\n* \n* This essentially wraps our ParrotEnemyPatrolRigComponent to allow it to be placed anywhere in\n* the level. This provides additional flexibility, as we can either place this actor into the level to\n* place a patrol at any arbitrary location, or attach the component directly to an object instance\n* that already exists in the level.\n*/" },
#endif
		{ "IncludePath", "Enemy/ParrotEnemyPatrolRigActor.h" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This is an example of an actor class with a default subobject generated at construction time. This is useful\n* for guaranteeing there is a required component placed into the hierarchy that cannot be removed.\n*\n* This essentially wraps our ParrotEnemyPatrolRigComponent to allow it to be placed anywhere in\n* the level. This provides additional flexibility, as we can either place this actor into the level to\n* place a patrol at any arbitrary location, or attach the component directly to an object instance\n* that already exists in the level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRigComponent_MetaData[] = {
		{ "Category", "ParrotEnemyPatrolRigActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The created patrol rig component that this actor owns \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The created patrol rig component that this actor owns" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotEnemyPatrolRigActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::NewProp_PatrolRigComponent = { "PatrolRigComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyPatrolRigActor, PatrolRigComponent), Z_Construct_UClass_UParrotEnemyPatrolRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRigComponent_MetaData), NewProp_PatrolRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::NewProp_PatrolRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::ClassParams = {
	&AParrotEnemyPatrolRigActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotEnemyPatrolRigActor()
{
	if (!Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor.OuterSingleton, Z_Construct_UClass_AParrotEnemyPatrolRigActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotEnemyPatrolRigActor);
AParrotEnemyPatrolRigActor::~AParrotEnemyPatrolRigActor() {}
// ********** End Class AParrotEnemyPatrolRigActor *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotEnemyPatrolRigActor, AParrotEnemyPatrolRigActor::StaticClass, TEXT("AParrotEnemyPatrolRigActor"), &Z_Registration_Info_UClass_AParrotEnemyPatrolRigActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotEnemyPatrolRigActor), 3102069745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h__Script_Parrot_899140968(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigActor_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
