// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/ParrotCameraSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotCameraSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotCameraSubsystem();
PARROT_API UClass* Z_Construct_UClass_UParrotCameraSubsystem_NoRegister();
PARROT_API UEnum* Z_Construct_UEnum_Parrot_ECameraMode();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotCameraSubsystem Function GetCameraWorldPosition *******************
struct Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics
{
	struct ParrotCameraSubsystem_eventGetCameraWorldPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the world position of the camera component \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCameraSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the world position of the camera component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCameraSubsystem_eventGetCameraWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotCameraSubsystem, nullptr, "GetCameraWorldPosition", Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::ParrotCameraSubsystem_eventGetCameraWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::ParrotCameraSubsystem_eventGetCameraWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotCameraSubsystem::execGetCameraWorldPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraWorldPosition();
	P_NATIVE_END;
}
// ********** End Class UParrotCameraSubsystem Function GetCameraWorldPosition *********************

// ********** Begin Class UParrotCameraSubsystem Function IsPlayerCameraOwner **********************
struct Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics
{
	struct ParrotCameraSubsystem_eventIsPlayerCameraOwner_Parms
	{
		AParrotPlayerCharacter* TargetPlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true when the player character is the owning player of this camera system \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCameraSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true when the player character is the owning player of this camera system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCameraSubsystem_eventIsPlayerCameraOwner_Parms, TargetPlayer), Z_Construct_UClass_AParrotPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotCameraSubsystem_eventIsPlayerCameraOwner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotCameraSubsystem_eventIsPlayerCameraOwner_Parms), &Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::NewProp_TargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotCameraSubsystem, nullptr, "IsPlayerCameraOwner", Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::ParrotCameraSubsystem_eventIsPlayerCameraOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::ParrotCameraSubsystem_eventIsPlayerCameraOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotCameraSubsystem::execIsPlayerCameraOwner)
{
	P_GET_OBJECT(AParrotPlayerCharacter,Z_Param_TargetPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerCameraOwner(Z_Param_TargetPlayer);
	P_NATIVE_END;
}
// ********** End Class UParrotCameraSubsystem Function IsPlayerCameraOwner ************************

// ********** Begin Class UParrotCameraSubsystem Function SetCameraFixedPointTarget ****************
struct Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics
{
	struct ParrotCameraSubsystem_eventSetCameraFixedPointTarget_Parms
	{
		FVector TargetPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the fixed location that the camera should interpolate to \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCameraSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the fixed location that the camera should interpolate to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCameraSubsystem_eventSetCameraFixedPointTarget_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPosition_MetaData), NewProp_TargetPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::NewProp_TargetPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotCameraSubsystem, nullptr, "SetCameraFixedPointTarget", Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::ParrotCameraSubsystem_eventSetCameraFixedPointTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::ParrotCameraSubsystem_eventSetCameraFixedPointTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotCameraSubsystem::execSetCameraFixedPointTarget)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraFixedPointTarget(Z_Param_Out_TargetPosition);
	P_NATIVE_END;
}
// ********** End Class UParrotCameraSubsystem Function SetCameraFixedPointTarget ******************

// ********** Begin Class UParrotCameraSubsystem Function SetCameraMode ****************************
struct Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics
{
	struct ParrotCameraSubsystem_eventSetCameraMode_Parms
	{
		ECameraMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the camera's movement mode \n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/ParrotCameraSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the camera's movement mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCameraSubsystem_eventSetCameraMode_Parms, NewMode), Z_Construct_UEnum_Parrot_ECameraMode, METADATA_PARAMS(0, nullptr) }; // 1089537300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotCameraSubsystem, nullptr, "SetCameraMode", Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::ParrotCameraSubsystem_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::ParrotCameraSubsystem_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotCameraSubsystem::execSetCameraMode)
{
	P_GET_ENUM(ECameraMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(ECameraMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class UParrotCameraSubsystem Function SetCameraMode ******************************

// ********** Begin Class UParrotCameraSubsystem ***************************************************
void UParrotCameraSubsystem::StaticRegisterNativesUParrotCameraSubsystem()
{
	UClass* Class = UParrotCameraSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraWorldPosition", &UParrotCameraSubsystem::execGetCameraWorldPosition },
		{ "IsPlayerCameraOwner", &UParrotCameraSubsystem::execIsPlayerCameraOwner },
		{ "SetCameraFixedPointTarget", &UParrotCameraSubsystem::execSetCameraFixedPointTarget },
		{ "SetCameraMode", &UParrotCameraSubsystem::execSetCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotCameraSubsystem;
UClass* UParrotCameraSubsystem::GetPrivateStaticClass()
{
	using TClass = UParrotCameraSubsystem;
	if (!Z_Registration_Info_UClass_UParrotCameraSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotCameraSubsystem"),
			Z_Registration_Info_UClass_UParrotCameraSubsystem.InnerSingleton,
			StaticRegisterNativesUParrotCameraSubsystem,
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
	return Z_Registration_Info_UClass_UParrotCameraSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotCameraSubsystem_NoRegister()
{
	return UParrotCameraSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotCameraSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \n* A subsystem that interacts with the game camera.\n* Shares the lifetime of the current world. \n* \n*/" },
#endif
		{ "IncludePath", "Camera/ParrotCameraSubsystem.h" },
		{ "ModuleRelativePath", "Public/Camera/ParrotCameraSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A subsystem that interacts with the game camera.\nShares the lifetime of the current world." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotCameraSubsystem_GetCameraWorldPosition, "GetCameraWorldPosition" }, // 808611879
		{ &Z_Construct_UFunction_UParrotCameraSubsystem_IsPlayerCameraOwner, "IsPlayerCameraOwner" }, // 464809339
		{ &Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraFixedPointTarget, "SetCameraFixedPointTarget" }, // 469871390
		{ &Z_Construct_UFunction_UParrotCameraSubsystem_SetCameraMode, "SetCameraMode" }, // 2478016864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotCameraSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParrotCameraSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotCameraSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotCameraSubsystem_Statics::ClassParams = {
	&UParrotCameraSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotCameraSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotCameraSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotCameraSubsystem()
{
	if (!Z_Registration_Info_UClass_UParrotCameraSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotCameraSubsystem.OuterSingleton, Z_Construct_UClass_UParrotCameraSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotCameraSubsystem.OuterSingleton;
}
UParrotCameraSubsystem::UParrotCameraSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotCameraSubsystem);
UParrotCameraSubsystem::~UParrotCameraSubsystem() {}
// ********** End Class UParrotCameraSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotCameraSubsystem, UParrotCameraSubsystem::StaticClass, TEXT("UParrotCameraSubsystem"), &Z_Registration_Info_UClass_UParrotCameraSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotCameraSubsystem), 2230404681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h__Script_Parrot_1314004812(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Camera_ParrotCameraSubsystem_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
