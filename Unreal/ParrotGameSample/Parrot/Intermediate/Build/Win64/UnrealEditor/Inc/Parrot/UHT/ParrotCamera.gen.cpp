// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/ParrotCamera.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotCamera() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PARROT_API UClass* Z_Construct_UClass_AParrotCamera();
PARROT_API UClass* Z_Construct_UClass_AParrotCamera_NoRegister();
PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister();
PARROT_API UClass* Z_Construct_UClass_AParrotWorldSettings_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister();
PARROT_API UEnum* Z_Construct_UEnum_Parrot_ECameraMode();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECameraMode ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraMode;
static UEnum* ECameraMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Parrot_ECameraMode, (UObject*)Z_Construct_UPackage__Script_Parrot(), TEXT("ECameraMode"));
	}
	return Z_Registration_Info_UEnum_ECameraMode.OuterSingleton;
}
template<> PARROT_API UEnum* StaticEnum<ECameraMode>()
{
	return ECameraMode_StaticEnum();
}
struct Z_Construct_UEnum_Parrot_ECameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This enum tracks which behavior the camera should implement\n" },
#endif
		{ "Fixed.Name", "ECameraMode::Fixed" },
		{ "Follow.Name", "ECameraMode::Follow" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
		{ "None.Name", "ECameraMode::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum tracks which behavior the camera should implement" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraMode::None", (int64)ECameraMode::None },
		{ "ECameraMode::Follow", (int64)ECameraMode::Follow },
		{ "ECameraMode::Fixed", (int64)ECameraMode::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Parrot_ECameraMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Parrot,
	nullptr,
	"ECameraMode",
	"ECameraMode",
	Z_Construct_UEnum_Parrot_ECameraMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Parrot_ECameraMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Parrot_ECameraMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Parrot_ECameraMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Parrot_ECameraMode()
{
	if (!Z_Registration_Info_UEnum_ECameraMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraMode.InnerSingleton, Z_Construct_UEnum_Parrot_ECameraMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraMode.InnerSingleton;
}
// ********** End Enum ECameraMode *****************************************************************

// ********** Begin Class AParrotCamera Function MovementTriggerBoxOverlapBegin ********************
struct Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics
{
	struct ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles begin overlaps of the movement trigger box \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles begin overlaps of the movement trigger box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms), &Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCamera, nullptr, "MovementTriggerBoxOverlapBegin", Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::ParrotCamera_eventMovementTriggerBoxOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCamera::execMovementTriggerBoxOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovementTriggerBoxOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AParrotCamera Function MovementTriggerBoxOverlapBegin **********************

// ********** Begin Class AParrotCamera Function MovementTriggerBoxOverlapEnd **********************
struct Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics
{
	struct ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles exit overlaps of the movement trigger box \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles exit overlaps of the movement trigger box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCamera, nullptr, "MovementTriggerBoxOverlapEnd", Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::ParrotCamera_eventMovementTriggerBoxOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCamera::execMovementTriggerBoxOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovementTriggerBoxOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AParrotCamera Function MovementTriggerBoxOverlapEnd ************************

// ********** Begin Class AParrotCamera Function OnCharacterLanded *********************************
struct Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics
{
	struct ParrotCamera_eventOnCharacterLanded_Parms
	{
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles when the character lands on a surface \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles when the character lands on a surface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCamera_eventOnCharacterLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCamera, nullptr, "OnCharacterLanded", Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::ParrotCamera_eventOnCharacterLanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::ParrotCamera_eventOnCharacterLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotCamera_OnCharacterLanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCamera_OnCharacterLanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCamera::execOnCharacterLanded)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterLanded(Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AParrotCamera Function OnCharacterLanded ***********************************

// ********** Begin Class AParrotCamera ************************************************************
void AParrotCamera::StaticRegisterNativesAParrotCamera()
{
	UClass* Class = AParrotCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MovementTriggerBoxOverlapBegin", &AParrotCamera::execMovementTriggerBoxOverlapBegin },
		{ "MovementTriggerBoxOverlapEnd", &AParrotCamera::execMovementTriggerBoxOverlapEnd },
		{ "OnCharacterLanded", &AParrotCamera::execOnCharacterLanded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotCamera;
UClass* AParrotCamera::GetPrivateStaticClass()
{
	using TClass = AParrotCamera;
	if (!Z_Registration_Info_UClass_AParrotCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotCamera"),
			Z_Registration_Info_UClass_AParrotCamera.InnerSingleton,
			StaticRegisterNativesAParrotCamera,
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
	return Z_Registration_Info_UClass_AParrotCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotCamera_NoRegister()
{
	return AParrotCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* \n* This class is used as an abstract base class to create blueprint follow camera actors.\n* This allows us to have this logic live here and allow the Camera Subsystem to instantiate\n* and set any specific derived camera configuration.\n* \n*/" },
#endif
		{ "IncludePath", "Camera/ParrotCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This class is used as an abstract base class to create blueprint follow camera actors.\n* This allows us to have this logic live here and allow the Camera Subsystem to instantiate\n* and set any specific derived camera configuration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralFollowSpeedMultiplier_MetaData[] = {
		{ "Category", "Parrot|Camera|Follow Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A multiplier applied to camera speed used to reach the player's position when intersecting with the movement trigger\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier applied to camera speed used to reach the player's position when intersecting with the movement trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowZSpeed_MetaData[] = {
		{ "Category", "Parrot|Camera|Follow Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A fixed speed per tick that camera will interpolate on the Z-axis to the follow target's Z\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A fixed speed per tick that camera will interpolate on the Z-axis to the follow target's Z" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedPointInterpolationSpeed_MetaData[] = {
		{ "Category", "Parrot|Camera|Fixed Point Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A fixed speed per tick that camera will interpolate to the fixed point\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A fixed speed per tick that camera will interpolate to the fixed point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "ParrotCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default SceneComponent to attach to.\n// Has a transform and supports attachment, but has no rendering or collision capabilities.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default SceneComponent to attach to.\nHas a transform and supports attachment, but has no rendering or collision capabilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "ParrotCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The spring arm used by the camera. Used to maintain a distance from the parent. \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spring arm used by the camera. Used to maintain a distance from the parent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "ParrotCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The camera component itself which renders a viewpoint \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The camera component itself which renders a viewpoint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingMesh_MetaData[] = {
		{ "Category", "ParrotCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A static mesh which will block the player and prevent them from moving past a certain point\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A static mesh which will block the player and prevent them from moving past a certain point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMovementTriggerBox_MetaData[] = {
		{ "Category", "ParrotCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A trigger box that will start interpolating the camera when the player is inside of it\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A trigger box that will start interpolating the camera when the player is inside of it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParrotWorldSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The settings used by the current world\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The settings used by the current world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An assigned character to follow\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An assigned character to follow" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCharacterMovementComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The follow character's movement component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The follow character's movement component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralFollowSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowZSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedPointInterpolationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMovementTriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParrotWorldSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCharacterMovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapBegin, "MovementTriggerBoxOverlapBegin" }, // 2621349370
		{ &Z_Construct_UFunction_AParrotCamera_MovementTriggerBoxOverlapEnd, "MovementTriggerBoxOverlapEnd" }, // 468626141
		{ &Z_Construct_UFunction_AParrotCamera_OnCharacterLanded, "OnCharacterLanded" }, // 814218076
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_LateralFollowSpeedMultiplier = { "LateralFollowSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, LateralFollowSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralFollowSpeedMultiplier_MetaData), NewProp_LateralFollowSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_FollowZSpeed = { "FollowZSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, FollowZSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowZSpeed_MetaData), NewProp_FollowZSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_FixedPointInterpolationSpeed = { "FixedPointInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, FixedPointInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedPointInterpolationSpeed_MetaData), NewProp_FixedPointInterpolationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_BlockingMesh = { "BlockingMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, BlockingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingMesh_MetaData), NewProp_BlockingMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_CameraMovementTriggerBox = { "CameraMovementTriggerBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, CameraMovementTriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMovementTriggerBox_MetaData), NewProp_CameraMovementTriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_ParrotWorldSettings = { "ParrotWorldSettings", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, ParrotWorldSettings), Z_Construct_UClass_AParrotWorldSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParrotWorldSettings_MetaData), NewProp_ParrotWorldSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, FollowTarget), Z_Construct_UClass_AParrotPlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowTarget_MetaData), NewProp_FollowTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParrotCamera_Statics::NewProp_FollowCharacterMovementComponent = { "FollowCharacterMovementComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCamera, FollowCharacterMovementComponent), Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCharacterMovementComponent_MetaData), NewProp_FollowCharacterMovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_LateralFollowSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_FollowZSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_FixedPointInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_BlockingMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_CameraMovementTriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_ParrotWorldSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_FollowTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCamera_Statics::NewProp_FollowCharacterMovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotCamera_Statics::ClassParams = {
	&AParrotCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AParrotCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCamera_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotCamera()
{
	if (!Z_Registration_Info_UClass_AParrotCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotCamera.OuterSingleton, Z_Construct_UClass_AParrotCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotCamera);
AParrotCamera::~AParrotCamera() {}
// ********** End Class AParrotCamera **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h__Script_Parrot_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraMode_StaticEnum, TEXT("ECameraMode"), &Z_Registration_Info_UEnum_ECameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1089537300U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotCamera, AParrotCamera::StaticClass, TEXT("AParrotCamera"), &Z_Registration_Info_UClass_AParrotCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotCamera), 2075519123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h__Script_Parrot_4265843737(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h__Script_Parrot_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h__Script_Parrot_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
