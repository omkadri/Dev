// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/ParrotEnemyPatrolRigComponent.h"
#include "Enemy/ParrotEnemyCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotEnemyPatrolRigComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotEnemyPatrolRigComponent();
PARROT_API UClass* Z_Construct_UClass_UParrotEnemyPatrolRigComponent_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_NoRegister();
PARROT_API UScriptStruct* Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotEnemyPatrolRigComponent *******************************************
void UParrotEnemyPatrolRigComponent::StaticRegisterNativesUParrotEnemyPatrolRigComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent;
UClass* UParrotEnemyPatrolRigComponent::GetPrivateStaticClass()
{
	using TClass = UParrotEnemyPatrolRigComponent;
	if (!Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotEnemyPatrolRigComponent"),
			Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent.InnerSingleton,
			StaticRegisterNativesUParrotEnemyPatrolRigComponent,
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
	return Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotEnemyPatrolRigComponent_NoRegister()
{
	return UParrotEnemyPatrolRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* This is an example of a component with default subobjects. It provides a way to have a component that creates and attaches\n* required components for its operation into its parent's hierarchy. They cannot be removed unless their parent (this component)\n* is removed.\n* \n* This is an all-in-one class to allow authoring a patrolling enemy in a single package.\n* It can be attached to an actor blueprint to allow placing in the scene, or attached to an existing actor instance\n* Since it uses a spline component (which is derived from a scene component), the patrol can be placed anywhere relative\n* to the actor parent, and if the actor parent moves, the patrol points will move with it.\n* \n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Enemy/ParrotEnemyPatrolRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This is an example of a component with default subobjects. It provides a way to have a component that creates and attaches\n* required components for its operation into its parent's hierarchy. They cannot be removed unless their parent (this component)\n* is removed.\n*\n* This is an all-in-one class to allow authoring a patrolling enemy in a single package.\n* It can be attached to an actor blueprint to allow placing in the scene, or attached to an existing actor instance\n* Since it uses a spline component (which is derived from a scene component), the patrol can be placed anywhere relative\n* to the actor parent, and if the actor parent moves, the patrol points will move with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "ParrotEnemyPatrolRigComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The enemy class to spawn \n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The enemy class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyInitArgs_MetaData[] = {
		{ "Category", "Enemy Init" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The enemy initialization arguments \n// These are used to pass data to the enemy before spawning the actor\n// since the enemy needs to have this information before BeginPlay is invoked\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The enemy initialization arguments\nThese are used to pass data to the enemy before spawning the actor\nsince the enemy needs to have this information before BeginPlay is invoked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpline_MetaData[] = {
		{ "Category", "ParrotEnemyPatrolRigComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The spawned spline that the enemy will patrol \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spawned spline that the enemy will patrol" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolTriggerBox_MetaData[] = {
		{ "Category", "ParrotEnemyPatrolRigComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a trigger box that will notify this enemy when the player enters or exits it.\n// Its functionality is intended to toggle the enemy's patrol behavior.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a trigger box that will notify this enemy when the player enters or exits it.\nIts functionality is intended to toggle the enemy's patrol behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTriggerBox_MetaData[] = {
		{ "Category", "ParrotEnemyPatrolRigComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a trigger box that will notify this enemy when the player enters or exits it.\n// Its functionality is intended to toggle the enemy's chase or attacking behavior.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a trigger box that will notify this enemy when the player enters or exits it.\nIts functionality is intended to toggle the enemy's chase or attacking behavior." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visualizer_MetaData[] = {
		{ "Category", "ParrotEnemyPatrolRigComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An editor-only component that draws the position and ordering of the waypoints in the PatrolSpline.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyPatrolRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An editor-only component that draws the position and ordering of the waypoints in the PatrolSpline." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyInitArgs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolTriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTriggerBox;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Visualizer;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotEnemyPatrolRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotEnemyPatrolRigComponent, EnemyToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyToSpawn_MetaData), NewProp_EnemyToSpawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_EnemyInitArgs = { "EnemyInitArgs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotEnemyPatrolRigComponent, EnemyInitArgs), Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyInitArgs_MetaData), NewProp_EnemyInitArgs_MetaData) }; // 4264289136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_PatrolSpline = { "PatrolSpline", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotEnemyPatrolRigComponent, PatrolSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpline_MetaData), NewProp_PatrolSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_PatrolTriggerBox = { "PatrolTriggerBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotEnemyPatrolRigComponent, PatrolTriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolTriggerBox_MetaData), NewProp_PatrolTriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_AttackTriggerBox = { "AttackTriggerBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotEnemyPatrolRigComponent, AttackTriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTriggerBox_MetaData), NewProp_AttackTriggerBox_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_Visualizer = { "Visualizer", nullptr, (EPropertyFlags)0x01240808000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotEnemyPatrolRigComponent, Visualizer), Z_Construct_UClass_UParrotPatrolRigDebugVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visualizer_MetaData), NewProp_Visualizer_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_EnemyToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_EnemyInitArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_PatrolSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_PatrolTriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_AttackTriggerBox,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::NewProp_Visualizer,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::ClassParams = {
	&UParrotEnemyPatrolRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotEnemyPatrolRigComponent()
{
	if (!Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent.OuterSingleton, Z_Construct_UClass_UParrotEnemyPatrolRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotEnemyPatrolRigComponent);
UParrotEnemyPatrolRigComponent::~UParrotEnemyPatrolRigComponent() {}
// ********** End Class UParrotEnemyPatrolRigComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigComponent_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotEnemyPatrolRigComponent, UParrotEnemyPatrolRigComponent::StaticClass, TEXT("UParrotEnemyPatrolRigComponent"), &Z_Registration_Info_UClass_UParrotEnemyPatrolRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotEnemyPatrolRigComponent), 3370777722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigComponent_h__Script_Parrot_194477600(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigComponent_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyPatrolRigComponent_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
