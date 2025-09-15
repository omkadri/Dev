// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/ParrotPlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotPlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PARROT_API UClass* Z_Construct_UClass_AParrotCharacterBase();
PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter();
PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHitpointsAdded *****************************************************
struct Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hit point added delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hit point added delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "OnHitpointsAdded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitpointsAdded_DelegateWrapper(const FMulticastScriptDelegate& OnHitpointsAdded)
{
	OnHitpointsAdded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnHitpointsAdded *******************************************************

// ********** Begin Class AParrotPlayerCharacter Function ActivateSpeedPowerup *********************
struct Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics
{
	struct ParrotPlayerCharacter_eventActivateSpeedPowerup_Parms
	{
		float Duration;
		float MaxSpeedMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Player|Powerups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Modifies Character Movement Component using a timer for the passed duration \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies Character Movement Component using a timer for the passed duration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotPlayerCharacter_eventActivateSpeedPowerup_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::NewProp_MaxSpeedMultiplier = { "MaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotPlayerCharacter_eventActivateSpeedPowerup_Parms, MaxSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::NewProp_MaxSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotPlayerCharacter, nullptr, "ActivateSpeedPowerup", Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::ParrotPlayerCharacter_eventActivateSpeedPowerup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::ParrotPlayerCharacter_eventActivateSpeedPowerup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotPlayerCharacter::execActivateSpeedPowerup)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeedMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateSpeedPowerup(Z_Param_Duration,Z_Param_MaxSpeedMultiplier);
	P_NATIVE_END;
}
// ********** End Class AParrotPlayerCharacter Function ActivateSpeedPowerup ***********************

// ********** Begin Class AParrotPlayerCharacter Function AddHitpoints *****************************
struct Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics
{
	struct ParrotPlayerCharacter_eventAddHitpoints_Parms
	{
		int32 PointsToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Player|Powerups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a fixed amount of hit points to character's current hit points\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a fixed amount of hit points to character's current hit points" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointsToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::NewProp_PointsToAdd = { "PointsToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotPlayerCharacter_eventAddHitpoints_Parms, PointsToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::NewProp_PointsToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotPlayerCharacter, nullptr, "AddHitpoints", Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::ParrotPlayerCharacter_eventAddHitpoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::ParrotPlayerCharacter_eventAddHitpoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotPlayerCharacter::execAddHitpoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointsToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHitpoints(Z_Param_PointsToAdd);
	P_NATIVE_END;
}
// ********** End Class AParrotPlayerCharacter Function AddHitpoints *******************************

// ********** Begin Class AParrotPlayerCharacter Function IsEnemyJumpValid *************************
struct Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics
{
	struct ParrotPlayerCharacter_eventIsEnemyJumpValid_Parms
	{
		UBoxComponent* HurtBox;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true when the player can make a valid jump off of the overlapped hurt box given the sweep result \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true when the player can make a valid jump off of the overlapped hurt box given the sweep result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HurtBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HurtBox;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::NewProp_HurtBox = { "HurtBox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotPlayerCharacter_eventIsEnemyJumpValid_Parms, HurtBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HurtBox_MetaData), NewProp_HurtBox_MetaData) };
void Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotPlayerCharacter_eventIsEnemyJumpValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotPlayerCharacter_eventIsEnemyJumpValid_Parms), &Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::NewProp_HurtBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotPlayerCharacter, nullptr, "IsEnemyJumpValid", Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::ParrotPlayerCharacter_eventIsEnemyJumpValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::ParrotPlayerCharacter_eventIsEnemyJumpValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotPlayerCharacter::execIsEnemyJumpValid)
{
	P_GET_OBJECT(UBoxComponent,Z_Param_HurtBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnemyJumpValid(Z_Param_HurtBox);
	P_NATIVE_END;
}
// ********** End Class AParrotPlayerCharacter Function IsEnemyJumpValid ***************************

// ********** Begin Class AParrotPlayerCharacter Function IsJumpInputActive ************************
struct Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics
{
	struct ParrotPlayerCharacter_eventIsJumpInputActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true, the player wants to jump\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, the player wants to jump" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotPlayerCharacter_eventIsJumpInputActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotPlayerCharacter_eventIsJumpInputActive_Parms), &Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotPlayerCharacter, nullptr, "IsJumpInputActive", Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::ParrotPlayerCharacter_eventIsJumpInputActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::ParrotPlayerCharacter_eventIsJumpInputActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotPlayerCharacter::execIsJumpInputActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsJumpInputActive();
	P_NATIVE_END;
}
// ********** End Class AParrotPlayerCharacter Function IsJumpInputActive **************************

// ********** Begin Class AParrotPlayerCharacter Function OnEnemyJump ******************************
static FName NAME_AParrotPlayerCharacter_OnEnemyJump = FName(TEXT("OnEnemyJump"));
void AParrotPlayerCharacter::OnEnemyJump()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotPlayerCharacter_OnEnemyJump);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Player|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a player jumps off of an enemy\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a player jumps off of an enemy" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotPlayerCharacter, nullptr, "OnEnemyJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotPlayerCharacter Function OnEnemyJump ********************************

// ********** Begin Class AParrotPlayerCharacter Function OnSpeedPowerupActivated ******************
struct ParrotPlayerCharacter_eventOnSpeedPowerupActivated_Parms
{
	float Duration;
};
static FName NAME_AParrotPlayerCharacter_OnSpeedPowerupActivated = FName(TEXT("OnSpeedPowerupActivated"));
void AParrotPlayerCharacter::OnSpeedPowerupActivated(float Duration)
{
	ParrotPlayerCharacter_eventOnSpeedPowerupActivated_Parms Parms;
	Parms.Duration=Duration;
	UFunction* Func = FindFunctionChecked(NAME_AParrotPlayerCharacter_OnSpeedPowerupActivated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Player|Powerups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the speed powerup has been activated \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the speed powerup has been activated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotPlayerCharacter_eventOnSpeedPowerupActivated_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotPlayerCharacter, nullptr, "OnSpeedPowerupActivated", Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::PropPointers), sizeof(ParrotPlayerCharacter_eventOnSpeedPowerupActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ParrotPlayerCharacter_eventOnSpeedPowerupActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotPlayerCharacter Function OnSpeedPowerupActivated ********************

// ********** Begin Class AParrotPlayerCharacter ***************************************************
void AParrotPlayerCharacter::StaticRegisterNativesAParrotPlayerCharacter()
{
	UClass* Class = AParrotPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateSpeedPowerup", &AParrotPlayerCharacter::execActivateSpeedPowerup },
		{ "AddHitpoints", &AParrotPlayerCharacter::execAddHitpoints },
		{ "IsEnemyJumpValid", &AParrotPlayerCharacter::execIsEnemyJumpValid },
		{ "IsJumpInputActive", &AParrotPlayerCharacter::execIsJumpInputActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotPlayerCharacter;
UClass* AParrotPlayerCharacter::GetPrivateStaticClass()
{
	using TClass = AParrotPlayerCharacter;
	if (!Z_Registration_Info_UClass_AParrotPlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotPlayerCharacter"),
			Z_Registration_Info_UClass_AParrotPlayerCharacter.InnerSingleton,
			StaticRegisterNativesAParrotPlayerCharacter,
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
	return Z_Registration_Info_UClass_AParrotPlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister()
{
	return AParrotPlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n * This class builds on the default and Parrot Character implementation, overriding where necessary\n * to provide the functionality needed for our player.\n * Similarly, we also has a custom movement component: UParrotCharacterMovementComponent\n *\n * @see UCharacterMovementComponent\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/ParrotPlayerCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class builds on the default and Parrot Character implementation, overriding where necessary\nto provide the functionality needed for our player.\nSimilarly, we also has a custom movement component: UParrotCharacterMovementComponent\n\n@see UCharacterMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitpointsAdded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for when hit points are added to the player's health \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for when hit points are added to the player's health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitStunDuration_MetaData[] = {
		{ "Category", "Parrot|Character|Stats" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A duration to stun the player when hit. Zero will prevent any stun\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A duration to stun the player when hit. Zero will prevent any stun" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStunMidAir_MetaData[] = {
		{ "Category", "Parrot|Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true, allows the player to be stunned in mid-air \n" },
#endif
		{ "EditCondition", "HitStunDuration > 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, allows the player to be stunned in mid-air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInvulnerabilityDuration_MetaData[] = {
		{ "Category", "Parrot|Character|Stats" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A duration that the player is invulnerable after being hit\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A duration that the player is invulnerable after being hit" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpeedPowerupActive_MetaData[] = {
		{ "Category", "Parrot|Player|Powerups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks whether or not the speed powerup is active \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks whether or not the speed powerup is active" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitpointsAdded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitStunDuration;
	static void NewProp_bStunMidAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStunMidAir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitInvulnerabilityDuration;
	static void NewProp_bIsSpeedPowerupActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpeedPowerupActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AParrotPlayerCharacter_ActivateSpeedPowerup, "ActivateSpeedPowerup" }, // 245163296
		{ &Z_Construct_UFunction_AParrotPlayerCharacter_AddHitpoints, "AddHitpoints" }, // 2279257307
		{ &Z_Construct_UFunction_AParrotPlayerCharacter_IsEnemyJumpValid, "IsEnemyJumpValid" }, // 2962703138
		{ &Z_Construct_UFunction_AParrotPlayerCharacter_IsJumpInputActive, "IsJumpInputActive" }, // 3749512416
		{ &Z_Construct_UFunction_AParrotPlayerCharacter_OnEnemyJump, "OnEnemyJump" }, // 394996589
		{ &Z_Construct_UFunction_AParrotPlayerCharacter_OnSpeedPowerupActivated, "OnSpeedPowerupActivated" }, // 2011748682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_OnHitpointsAdded = { "OnHitpointsAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotPlayerCharacter, OnHitpointsAdded), Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitpointsAdded_MetaData), NewProp_OnHitpointsAdded_MetaData) }; // 3437782737
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_HitStunDuration = { "HitStunDuration", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotPlayerCharacter, HitStunDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitStunDuration_MetaData), NewProp_HitStunDuration_MetaData) };
void Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bStunMidAir_SetBit(void* Obj)
{
	((AParrotPlayerCharacter*)Obj)->bStunMidAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bStunMidAir = { "bStunMidAir", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AParrotPlayerCharacter), &Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bStunMidAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStunMidAir_MetaData), NewProp_bStunMidAir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_HitInvulnerabilityDuration = { "HitInvulnerabilityDuration", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotPlayerCharacter, HitInvulnerabilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInvulnerabilityDuration_MetaData), NewProp_HitInvulnerabilityDuration_MetaData) };
void Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bIsSpeedPowerupActive_SetBit(void* Obj)
{
	((AParrotPlayerCharacter*)Obj)->bIsSpeedPowerupActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bIsSpeedPowerupActive = { "bIsSpeedPowerupActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AParrotPlayerCharacter), &Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bIsSpeedPowerupActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpeedPowerupActive_MetaData), NewProp_bIsSpeedPowerupActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_OnHitpointsAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_HitStunDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bStunMidAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_HitInvulnerabilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotPlayerCharacter_Statics::NewProp_bIsSpeedPowerupActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AParrotCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotPlayerCharacter_Statics::ClassParams = {
	&AParrotPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AParrotPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotPlayerCharacter_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AParrotPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotPlayerCharacter.OuterSingleton, Z_Construct_UClass_AParrotPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotPlayerCharacter.OuterSingleton;
}
AParrotPlayerCharacter::AParrotPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotPlayerCharacter);
AParrotPlayerCharacter::~AParrotPlayerCharacter() {}
// ********** End Class AParrotPlayerCharacter *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotPlayerCharacter, AParrotPlayerCharacter::StaticClass, TEXT("AParrotPlayerCharacter"), &Z_Registration_Info_UClass_AParrotPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotPlayerCharacter), 1538416263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h__Script_Parrot_3907011886(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotPlayerCharacter_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
