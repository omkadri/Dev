// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/ParrotEnemyCharacterBase.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotEnemyCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PARROT_API UClass* Z_Construct_UClass_AParrotCharacterBase();
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyCharacterBase();
PARROT_API UClass* Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister();
PARROT_API UScriptStruct* Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FParrotEnemyInitializationArgs ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs;
class UScriptStruct* FParrotEnemyInitializationArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs, (UObject*)Z_Construct_UPackage__Script_Parrot(), TEXT("ParrotEnemyInitializationArgs"));
	}
	return Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* This struct is used as a helper to both display the configurable UPROPERTY members\n* in the details panel of an authorable actor (In this case, the enemy patrol rigs)\n* and also allow conveniently passing all the necessary args in to an enemy at spawn.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This struct is used as a helper to both display the configurable UPROPERTY members\n* in the details panel of an authorable actor (In this case, the enemy patrol rigs)\n* and also allow conveniently passing all the necessary args in to an enemy at spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockXTransform_MetaData[] = {
		{ "Category", "ParrotEnemyInitializationArgs" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockYTransform_MetaData[] = {
		{ "Category", "ParrotEnemyInitializationArgs" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockZTransform_MetaData[] = {
		{ "Category", "ParrotEnemyInitializationArgs" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LockXTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockXTransform;
	static void NewProp_LockYTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockYTransform;
	static void NewProp_LockZTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockZTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParrotEnemyInitializationArgs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockXTransform_SetBit(void* Obj)
{
	((FParrotEnemyInitializationArgs*)Obj)->LockXTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockXTransform = { "LockXTransform", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParrotEnemyInitializationArgs), &Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockXTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockXTransform_MetaData), NewProp_LockXTransform_MetaData) };
void Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockYTransform_SetBit(void* Obj)
{
	((FParrotEnemyInitializationArgs*)Obj)->LockYTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockYTransform = { "LockYTransform", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParrotEnemyInitializationArgs), &Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockYTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockYTransform_MetaData), NewProp_LockYTransform_MetaData) };
void Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockZTransform_SetBit(void* Obj)
{
	((FParrotEnemyInitializationArgs*)Obj)->LockZTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockZTransform = { "LockZTransform", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParrotEnemyInitializationArgs), &Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockZTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockZTransform_MetaData), NewProp_LockZTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockXTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockYTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewProp_LockZTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
	nullptr,
	&NewStructOps,
	"ParrotEnemyInitializationArgs",
	Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::PropPointers),
	sizeof(FParrotEnemyInitializationArgs),
	alignof(FParrotEnemyInitializationArgs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs()
{
	if (!Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs.InnerSingleton, Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs.InnerSingleton;
}
// ********** End ScriptStruct FParrotEnemyInitializationArgs **************************************

// ********** Begin Class AParrotEnemyCharacterBase Function GetMovementSpeedMultiplier ************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics
{
	struct ParrotEnemyCharacterBase_eventGetMovementSpeedMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the raw multiplier value\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the raw multiplier value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventGetMovementSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "GetMovementSpeedMultiplier", Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::ParrotEnemyCharacterBase_eventGetMovementSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::ParrotEnemyCharacterBase_eventGetMovementSpeedMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execGetMovementSpeedMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplier();
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function GetMovementSpeedMultiplier **************

// ********** Begin Class AParrotEnemyCharacterBase Function GetNextPatrolLocation *****************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics
{
	struct ParrotEnemyCharacterBase_eventGetNextPatrolLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called by the AI controller to get the next patrol location for patrolling enemies\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the AI controller to get the next patrol location for patrolling enemies" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventGetNextPatrolLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "GetNextPatrolLocation", Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::ParrotEnemyCharacterBase_eventGetNextPatrolLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::ParrotEnemyCharacterBase_eventGetNextPatrolLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execGetNextPatrolLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetNextPatrolLocation();
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function GetNextPatrolLocation *******************

// ********** Begin Class AParrotEnemyCharacterBase Function HitBeginOverlap ***********************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics
{
	struct ParrotEnemyCharacterBase_eventHitBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		float Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invoked whenever an actor enters a hit collision by this enemy\n" },
#endif
		{ "CPP_Default_Force", "0.000000" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoked whenever an actor enters a hit collision by this enemy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "ClampMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventHitBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventHitBeginOverlap_Parms, Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "HitBeginOverlap", Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::ParrotEnemyCharacterBase_eventHitBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::ParrotEnemyCharacterBase_eventHitBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execHitBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitBeginOverlap(Z_Param_OverlappedActor,Z_Param_Force);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function HitBeginOverlap *************************

// ********** Begin Class AParrotEnemyCharacterBase Function HurtBeginOverlap **********************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics
{
	struct ParrotEnemyCharacterBase_eventHurtBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		UBoxComponent* Hurtbox;
		float RecoilForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invoked whenever an actor enters a hurt collision with this enemy \n" },
#endif
		{ "CPP_Default_RecoilForce", "0.000000" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoked whenever an actor enters a hurt collision with this enemy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hurtbox_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilForce_MetaData[] = {
		{ "ClampMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hurtbox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventHurtBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::NewProp_Hurtbox = { "Hurtbox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventHurtBeginOverlap_Parms, Hurtbox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hurtbox_MetaData), NewProp_Hurtbox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::NewProp_RecoilForce = { "RecoilForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventHurtBeginOverlap_Parms, RecoilForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilForce_MetaData), NewProp_RecoilForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::NewProp_Hurtbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::NewProp_RecoilForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "HurtBeginOverlap", Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::ParrotEnemyCharacterBase_eventHurtBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::ParrotEnemyCharacterBase_eventHurtBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execHurtBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(UBoxComponent,Z_Param_Hurtbox);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RecoilForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HurtBeginOverlap(Z_Param_OverlappedActor,Z_Param_Hurtbox,Z_Param_RecoilForce);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function HurtBeginOverlap ************************

// ********** Begin Class AParrotEnemyCharacterBase Function OnActivateAttackHitboxes **************
static FName NAME_AParrotEnemyCharacterBase_OnActivateAttackHitboxes = FName(TEXT("OnActivateAttackHitboxes"));
void AParrotEnemyCharacterBase::OnActivateAttackHitboxes()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnActivateAttackHitboxes);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint so it can activate its attack hitboxes\n// This has to be handled by each blueprint because each enemy has a different\n// hitbox layout\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint so it can activate its attack hitboxes\nThis has to be handled by each blueprint because each enemy has a different\nhitbox layout" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnActivateAttackHitboxes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnActivateAttackHitboxes ****************

// ********** Begin Class AParrotEnemyCharacterBase Function OnBeginAttackTriggerOverlap ***********
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics
{
	struct ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms), &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnBeginAttackTriggerOverlap", Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnBeginAttackTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execOnBeginAttackTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginAttackTriggerOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function OnBeginAttackTriggerOverlap *************

// ********** Begin Class AParrotEnemyCharacterBase Function OnBeginPatrolTriggerOverlap ***********
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics
{
	struct ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overlap event callbacks\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap event callbacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms), &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnBeginPatrolTriggerOverlap", Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnBeginPatrolTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execOnBeginPatrolTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginPatrolTriggerOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function OnBeginPatrolTriggerOverlap *************

// ********** Begin Class AParrotEnemyCharacterBase Function OnDeactivateAttackHitboxes ************
static FName NAME_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes = FName(TEXT("OnDeactivateAttackHitboxes"));
void AParrotEnemyCharacterBase::OnDeactivateAttackHitboxes()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint so it can deactivate its attack hitboxes\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint so it can deactivate its attack hitboxes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnDeactivateAttackHitboxes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnDeactivateAttackHitboxes **************

// ********** Begin Class AParrotEnemyCharacterBase Function OnEndAttackTriggerOverlap *************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics
{
	struct ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnEndAttackTriggerOverlap", Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnEndAttackTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execOnEndAttackTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndAttackTriggerOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function OnEndAttackTriggerOverlap ***************

// ********** Begin Class AParrotEnemyCharacterBase Function OnEndPatrolTriggerOverlap *************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics
{
	struct ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnEndPatrolTriggerOverlap", Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::ParrotEnemyCharacterBase_eventOnEndPatrolTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execOnEndPatrolTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndPatrolTriggerOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function OnEndPatrolTriggerOverlap ***************

// ********** Begin Class AParrotEnemyCharacterBase Function OnHitStun *****************************
static FName NAME_AParrotEnemyCharacterBase_OnHitStun = FName(TEXT("OnHitStun"));
void AParrotEnemyCharacterBase::OnHitStun()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnHitStun);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint that the enemy has been stunned\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint that the enemy has been stunned" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnHitStun", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnHitStun *******************************

// ********** Begin Class AParrotEnemyCharacterBase Function OnPlayerEnteredAttackTriggerVolume ****
static FName NAME_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume = FName(TEXT("OnPlayerEnteredAttackTriggerVolume"));
void AParrotEnemyCharacterBase::OnPlayerEnteredAttackTriggerVolume()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint that the player has entered its attack trigger volume\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint that the player has entered its attack trigger volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnPlayerEnteredAttackTriggerVolume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnPlayerEnteredAttackTriggerVolume ******

// ********** Begin Class AParrotEnemyCharacterBase Function OnPlayerEnteredPatrolTriggerVolume ****
static FName NAME_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume = FName(TEXT("OnPlayerEnteredPatrolTriggerVolume"));
void AParrotEnemyCharacterBase::OnPlayerEnteredPatrolTriggerVolume()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint that the player has entered its patrol trigger volume\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint that the player has entered its patrol trigger volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnPlayerEnteredPatrolTriggerVolume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnPlayerEnteredPatrolTriggerVolume ******

// ********** Begin Class AParrotEnemyCharacterBase Function OnPlayerExitedAttackTriggerVolume *****
static FName NAME_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume = FName(TEXT("OnPlayerExitedAttackTriggerVolume"));
void AParrotEnemyCharacterBase::OnPlayerExitedAttackTriggerVolume()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint that the player has exited its attack trigger volume\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint that the player has exited its attack trigger volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnPlayerExitedAttackTriggerVolume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnPlayerExitedAttackTriggerVolume *******

// ********** Begin Class AParrotEnemyCharacterBase Function OnPlayerExitedPatrolTriggerVolume *****
static FName NAME_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume = FName(TEXT("OnPlayerExitedPatrolTriggerVolume"));
void AParrotEnemyCharacterBase::OnPlayerExitedPatrolTriggerVolume()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint that the player has exited its patrol trigger volume\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint that the player has exited its patrol trigger volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnPlayerExitedPatrolTriggerVolume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnPlayerExitedPatrolTriggerVolume *******

// ********** Begin Class AParrotEnemyCharacterBase Function OnSetupPatrol *************************
static FName NAME_AParrotEnemyCharacterBase_OnSetupPatrol = FName(TEXT("OnSetupPatrol"));
void AParrotEnemyCharacterBase::OnSetupPatrol()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnSetupPatrol);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint so it can setup it's patrol sequence\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint so it can setup it's patrol sequence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnSetupPatrol", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnSetupPatrol ***************************

// ********** Begin Class AParrotEnemyCharacterBase Function OnStopHitStun *************************
static FName NAME_AParrotEnemyCharacterBase_OnStopHitStun = FName(TEXT("OnStopHitStun"));
void AParrotEnemyCharacterBase::OnStopHitStun()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotEnemyCharacterBase_OnStopHitStun);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the blueprint that the stun has elapsed\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the blueprint that the stun has elapsed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "OnStopHitStun", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotEnemyCharacterBase Function OnStopHitStun ***************************

// ********** Begin Class AParrotEnemyCharacterBase Function RevertMovementSpeedMultiplier *********
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes any multipliers that have modified enemy speed \n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes any multipliers that have modified enemy speed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "RevertMovementSpeedMultiplier", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execRevertMovementSpeedMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertMovementSpeedMultiplier();
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function RevertMovementSpeedMultiplier ***********

// ********** Begin Class AParrotEnemyCharacterBase Function SetMovementSpeedMultiplier ************
struct Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics
{
	struct ParrotEnemyCharacterBase_eventSetMovementSpeedMultiplier_Parms
	{
		float NewMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets a multiplier that is applied to the enemy speed\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a multiplier that is applied to the enemy speed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::NewProp_NewMultiplier = { "NewMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotEnemyCharacterBase_eventSetMovementSpeedMultiplier_Parms, NewMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::NewProp_NewMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotEnemyCharacterBase, nullptr, "SetMovementSpeedMultiplier", Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::ParrotEnemyCharacterBase_eventSetMovementSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::ParrotEnemyCharacterBase_eventSetMovementSpeedMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotEnemyCharacterBase::execSetMovementSpeedMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementSpeedMultiplier(Z_Param_NewMultiplier);
	P_NATIVE_END;
}
// ********** End Class AParrotEnemyCharacterBase Function SetMovementSpeedMultiplier **************

// ********** Begin Class AParrotEnemyCharacterBase ************************************************
void AParrotEnemyCharacterBase::StaticRegisterNativesAParrotEnemyCharacterBase()
{
	UClass* Class = AParrotEnemyCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementSpeedMultiplier", &AParrotEnemyCharacterBase::execGetMovementSpeedMultiplier },
		{ "GetNextPatrolLocation", &AParrotEnemyCharacterBase::execGetNextPatrolLocation },
		{ "HitBeginOverlap", &AParrotEnemyCharacterBase::execHitBeginOverlap },
		{ "HurtBeginOverlap", &AParrotEnemyCharacterBase::execHurtBeginOverlap },
		{ "OnBeginAttackTriggerOverlap", &AParrotEnemyCharacterBase::execOnBeginAttackTriggerOverlap },
		{ "OnBeginPatrolTriggerOverlap", &AParrotEnemyCharacterBase::execOnBeginPatrolTriggerOverlap },
		{ "OnEndAttackTriggerOverlap", &AParrotEnemyCharacterBase::execOnEndAttackTriggerOverlap },
		{ "OnEndPatrolTriggerOverlap", &AParrotEnemyCharacterBase::execOnEndPatrolTriggerOverlap },
		{ "RevertMovementSpeedMultiplier", &AParrotEnemyCharacterBase::execRevertMovementSpeedMultiplier },
		{ "SetMovementSpeedMultiplier", &AParrotEnemyCharacterBase::execSetMovementSpeedMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotEnemyCharacterBase;
UClass* AParrotEnemyCharacterBase::GetPrivateStaticClass()
{
	using TClass = AParrotEnemyCharacterBase;
	if (!Z_Registration_Info_UClass_AParrotEnemyCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotEnemyCharacterBase"),
			Z_Registration_Info_UClass_AParrotEnemyCharacterBase.InnerSingleton,
			StaticRegisterNativesAParrotEnemyCharacterBase,
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
	return Z_Registration_Info_UClass_AParrotEnemyCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotEnemyCharacterBase_NoRegister()
{
	return AParrotEnemyCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotEnemyCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* \n* The base class for our enemy types. \n* Derives from AParrotCharacterBase and shares base functionality. \n* Overrides functionality where appropriate for enemy specific behavior. \n*/" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/ParrotEnemyCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The base class for our enemy types.\n* Derives from AParrotCharacterBase and shares base functionality.\n* Overrides functionality where appropriate for enemy specific behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "Category", "Enemy|Combat" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default knock back force to apply when this enemy inflicts a hit on a player\n// Typically applied from capsule collisions\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default knock back force to apply when this enemy inflicts a hit on a player\nTypically applied from capsule collisions" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeedMultiplier_MetaData[] = {
		{ "Category", "Enemy|Combat" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The speed multiplier applied when the player enters the attack volume of the enemy\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed multiplier applied when the player enters the attack volume of the enemy" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitStunDuration_MetaData[] = {
		{ "Category", "Parrot|Character|Stats" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A duration to stun the ememy when hit. Zero will prevent any stun\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A duration to stun the ememy when hit. Zero will prevent any stun" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current attacking state of the enemy, used to drive animations\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current attacking state of the enemy, used to drive animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsShakingHead_MetaData[] = {
		{ "Category", "Enemy|Combat" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpline_MetaData[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The spline which the enemy will patrol \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spline which the enemy will patrol" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolTriggerVolume_MetaData[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to determine if the player is in a patrol zone\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to determine if the player is in a patrol zone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTriggerVolume_MetaData[] = {
		{ "Category", "Enemy|Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to determine if the player is in an attack zone\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/ParrotEnemyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to determine if the player is in an attack zone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitStunDuration;
	static void NewProp_IsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
	static void NewProp_IsShakingHead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShakingHead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolTriggerVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTriggerVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_GetMovementSpeedMultiplier, "GetMovementSpeedMultiplier" }, // 1921230577
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_GetNextPatrolLocation, "GetNextPatrolLocation" }, // 884997932
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_HitBeginOverlap, "HitBeginOverlap" }, // 853141630
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_HurtBeginOverlap, "HurtBeginOverlap" }, // 2635962735
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnActivateAttackHitboxes, "OnActivateAttackHitboxes" }, // 2921724955
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginAttackTriggerOverlap, "OnBeginAttackTriggerOverlap" }, // 4025648234
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnBeginPatrolTriggerOverlap, "OnBeginPatrolTriggerOverlap" }, // 1519003798
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnDeactivateAttackHitboxes, "OnDeactivateAttackHitboxes" }, // 4077585428
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndAttackTriggerOverlap, "OnEndAttackTriggerOverlap" }, // 1639236906
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnEndPatrolTriggerOverlap, "OnEndPatrolTriggerOverlap" }, // 1621397720
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnHitStun, "OnHitStun" }, // 1751724543
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredAttackTriggerVolume, "OnPlayerEnteredAttackTriggerVolume" }, // 2470700027
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerEnteredPatrolTriggerVolume, "OnPlayerEnteredPatrolTriggerVolume" }, // 4138677250
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedAttackTriggerVolume, "OnPlayerExitedAttackTriggerVolume" }, // 2724091636
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnPlayerExitedPatrolTriggerVolume, "OnPlayerExitedPatrolTriggerVolume" }, // 3632243393
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnSetupPatrol, "OnSetupPatrol" }, // 2270466739
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_OnStopHitStun, "OnStopHitStun" }, // 1928838412
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_RevertMovementSpeedMultiplier, "RevertMovementSpeedMultiplier" }, // 1146882435
		{ &Z_Construct_UFunction_AParrotEnemyCharacterBase_SetMovementSpeedMultiplier, "SetMovementSpeedMultiplier" }, // 219436788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotEnemyCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyCharacterBase, KnockbackForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_AttackSpeedMultiplier = { "AttackSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyCharacterBase, AttackSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeedMultiplier_MetaData), NewProp_AttackSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_HitStunDuration = { "HitStunDuration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyCharacterBase, HitStunDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitStunDuration_MetaData), NewProp_HitStunDuration_MetaData) };
void Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsAttacking_SetBit(void* Obj)
{
	((AParrotEnemyCharacterBase*)Obj)->IsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AParrotEnemyCharacterBase), &Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAttacking_MetaData), NewProp_IsAttacking_MetaData) };
void Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsShakingHead_SetBit(void* Obj)
{
	((AParrotEnemyCharacterBase*)Obj)->IsShakingHead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsShakingHead = { "IsShakingHead", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AParrotEnemyCharacterBase), &Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsShakingHead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsShakingHead_MetaData), NewProp_IsShakingHead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_PatrolSpline = { "PatrolSpline", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyCharacterBase, PatrolSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpline_MetaData), NewProp_PatrolSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_PatrolTriggerVolume = { "PatrolTriggerVolume", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyCharacterBase, PatrolTriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolTriggerVolume_MetaData), NewProp_PatrolTriggerVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_AttackTriggerVolume = { "AttackTriggerVolume", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotEnemyCharacterBase, AttackTriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTriggerVolume_MetaData), NewProp_AttackTriggerVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_KnockbackForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_AttackSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_HitStunDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_IsShakingHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_PatrolSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_PatrolTriggerVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::NewProp_AttackTriggerVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AParrotCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::ClassParams = {
	&AParrotEnemyCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotEnemyCharacterBase()
{
	if (!Z_Registration_Info_UClass_AParrotEnemyCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotEnemyCharacterBase.OuterSingleton, Z_Construct_UClass_AParrotEnemyCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotEnemyCharacterBase.OuterSingleton;
}
AParrotEnemyCharacterBase::AParrotEnemyCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotEnemyCharacterBase);
AParrotEnemyCharacterBase::~AParrotEnemyCharacterBase() {}
// ********** End Class AParrotEnemyCharacterBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h__Script_Parrot_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParrotEnemyInitializationArgs::StaticStruct, Z_Construct_UScriptStruct_FParrotEnemyInitializationArgs_Statics::NewStructOps, TEXT("ParrotEnemyInitializationArgs"), &Z_Registration_Info_UScriptStruct_FParrotEnemyInitializationArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParrotEnemyInitializationArgs), 4264289136U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotEnemyCharacterBase, AParrotEnemyCharacterBase::StaticClass, TEXT("AParrotEnemyCharacterBase"), &Z_Registration_Info_UClass_AParrotEnemyCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotEnemyCharacterBase), 1392494819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h__Script_Parrot_3746683610(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h__Script_Parrot_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h__Script_Parrot_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Enemy_ParrotEnemyCharacterBase_h__Script_Parrot_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
