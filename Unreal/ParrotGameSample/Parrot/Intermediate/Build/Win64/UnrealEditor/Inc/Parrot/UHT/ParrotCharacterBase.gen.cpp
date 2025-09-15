// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/ParrotCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PARROT_API UClass* Z_Construct_UClass_AParrotCharacterBase();
PARROT_API UClass* Z_Construct_UClass_AParrotCharacterBase_NoRegister();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FCharacterDeathSignature **********************************************
struct Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "CharacterDeathSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterDeathSignature)
{
	CharacterDeathSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FCharacterDeathSignature ************************************************

// ********** Begin Delegate FCharacterHitSignature ************************************************
struct Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "CharacterHitSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterHitSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterHitSignature)
{
	CharacterHitSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FCharacterHitSignature **************************************************

// ********** Begin Class AParrotCharacterBase Function CharacterDeath *****************************
struct Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// C++ logic implementation for when the character dies\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ logic implementation for when the character dies" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "CharacterDeath", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCharacterBase::execCharacterDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterDeath();
	P_NATIVE_END;
}
// ********** End Class AParrotCharacterBase Function CharacterDeath *******************************

// ********** Begin Class AParrotCharacterBase Function HitCharacter *******************************
struct Z_Construct_UFunction_AParrotCharacterBase_HitCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies a hit to this character \n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a hit to this character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_HitCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "HitCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_HitCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_HitCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotCharacterBase_HitCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_HitCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCharacterBase::execHitCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitCharacter();
	P_NATIVE_END;
}
// ********** End Class AParrotCharacterBase Function HitCharacter *********************************

// ********** Begin Class AParrotCharacterBase Function HitCharacterWithLaunchForce ****************
struct Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics
{
	struct ParrotCharacterBase_eventHitCharacterWithLaunchForce_Parms
	{
		FVector Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies a hit with force to the character based on impact \n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a hit with force to the character based on impact" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotCharacterBase_eventHitCharacterWithLaunchForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "HitCharacterWithLaunchForce", Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::ParrotCharacterBase_eventHitCharacterWithLaunchForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::ParrotCharacterBase_eventHitCharacterWithLaunchForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCharacterBase::execHitCharacterWithLaunchForce)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitCharacterWithLaunchForce(Z_Param_Out_Force);
	P_NATIVE_END;
}
// ********** End Class AParrotCharacterBase Function HitCharacterWithLaunchForce ******************

// ********** Begin Class AParrotCharacterBase Function IsDead *************************************
struct Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics
{
	struct ParrotCharacterBase_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public getter to check the death state\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public getter to check the death state" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotCharacterBase_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotCharacterBase_eventIsDead_Parms), &Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "IsDead", Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::ParrotCharacterBase_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::ParrotCharacterBase_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotCharacterBase_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCharacterBase::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// ********** End Class AParrotCharacterBase Function IsDead ***************************************

// ********** Begin Class AParrotCharacterBase Function KillCharacter ******************************
struct Z_Construct_UFunction_AParrotCharacterBase_KillCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instantly kills this character regardless of current hit point count.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantly kills this character regardless of current hit point count." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_KillCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "KillCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_KillCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_KillCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotCharacterBase_KillCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_KillCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotCharacterBase::execKillCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KillCharacter();
	P_NATIVE_END;
}
// ********** End Class AParrotCharacterBase Function KillCharacter ********************************

// ********** Begin Class AParrotCharacterBase Function OnAnimNotifyHitEffect **********************
static FName NAME_AParrotCharacterBase_OnAnimNotifyHitEffect = FName(TEXT("OnAnimNotifyHitEffect"));
void AParrotCharacterBase::OnAnimNotifyHitEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotCharacterBase_OnAnimNotifyHitEffect);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notified by the hit animation that the character's head is fully reeled back\n// so we can play any hit VFX\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notified by the hit animation that the character's head is fully reeled back\nso we can play any hit VFX" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "OnAnimNotifyHitEffect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotCharacterBase Function OnAnimNotifyHitEffect ************************

// ********** Begin Class AParrotCharacterBase Function OnCharacterDeath ***************************
static FName NAME_AParrotCharacterBase_OnCharacterDeath = FName(TEXT("OnCharacterDeath"));
void AParrotCharacterBase::OnCharacterDeath()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotCharacterBase_OnCharacterDeath);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint event here so our derived blueprint can do anything it needs to\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint event here so our derived blueprint can do anything it needs to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "OnCharacterDeath", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotCharacterBase Function OnCharacterDeath *****************************

// ********** Begin Class AParrotCharacterBase Function OnCharacterHit *****************************
static FName NAME_AParrotCharacterBase_OnCharacterHit = FName(TEXT("OnCharacterHit"));
void AParrotCharacterBase::OnCharacterHit()
{
	UFunction* Func = FindFunctionChecked(NAME_AParrotCharacterBase_OnCharacterHit);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event to be notified when we are hit during combat. Blueprint Implementable \n// to keep the implementation easy to tweak/change by design.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event to be notified when we are hit during combat. Blueprint Implementable\nto keep the implementation easy to tweak/change by design." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotCharacterBase, nullptr, "OnCharacterHit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AParrotCharacterBase Function OnCharacterHit *******************************

// ********** Begin Class AParrotCharacterBase *****************************************************
void AParrotCharacterBase::StaticRegisterNativesAParrotCharacterBase()
{
	UClass* Class = AParrotCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CharacterDeath", &AParrotCharacterBase::execCharacterDeath },
		{ "HitCharacter", &AParrotCharacterBase::execHitCharacter },
		{ "HitCharacterWithLaunchForce", &AParrotCharacterBase::execHitCharacterWithLaunchForce },
		{ "IsDead", &AParrotCharacterBase::execIsDead },
		{ "KillCharacter", &AParrotCharacterBase::execKillCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotCharacterBase;
UClass* AParrotCharacterBase::GetPrivateStaticClass()
{
	using TClass = AParrotCharacterBase;
	if (!Z_Registration_Info_UClass_AParrotCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotCharacterBase"),
			Z_Registration_Info_UClass_AParrotCharacterBase.InnerSingleton,
			StaticRegisterNativesAParrotCharacterBase,
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
	return Z_Registration_Info_UClass_AParrotCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotCharacterBase_NoRegister()
{
	return AParrotCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Characters are Pawns that have a mesh, collision, and built-in movement logic.\n * They are responsible for all physical interaction between the player or AI and the world, and also implement basic networking and input models.\n * They are designed for a vertically-oriented player representation that can walk, jump, fly, and swim through the world using CharacterMovementComponent.\n *\n * Parrot builds on the default Character implementation, overriding where necessary to provide\n * common functionality for all derivatives, such as AParrotPlayerCharacter and AParrotEnemyCharacterBase\n *\n * @see APawn\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ParrotCharacterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Characters are Pawns that have a mesh, collision, and built-in movement logic.\nThey are responsible for all physical interaction between the player or AI and the world, and also implement basic networking and input models.\nThey are designed for a vertically-oriented player representation that can walk, jump, fly, and swim through the world using CharacterMovementComponent.\n\nParrot builds on the default Character implementation, overriding where necessary to provide\ncommon functionality for all derivatives, such as AParrotPlayerCharacter and AParrotEnemyCharacterBase\n\n@see APawn\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDeathDelegate_MetaData[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate that is fired when the character dies\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate that is fired when the character dies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterHitDelegate_MetaData[] = {
		{ "Category", "Parrot|Character|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate that is fired when the character is hit/attacked\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate that is fired when the character is hit/attacked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitPoints_MetaData[] = {
		{ "Category", "Parrot|Character|Stats" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the authored value of hit points this character will have.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the authored value of hit points this character will have." },
#endif
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHitPoints_MetaData[] = {
		{ "Category", "Parrot|Character|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the working hit point count that is updated when attacked.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ParrotCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the working hit point count that is updated when attacked." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CharacterDeathDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CharacterHitDelegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHitPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AParrotCharacterBase_CharacterDeath, "CharacterDeath" }, // 1732455129
		{ &Z_Construct_UFunction_AParrotCharacterBase_HitCharacter, "HitCharacter" }, // 2355529014
		{ &Z_Construct_UFunction_AParrotCharacterBase_HitCharacterWithLaunchForce, "HitCharacterWithLaunchForce" }, // 2822803767
		{ &Z_Construct_UFunction_AParrotCharacterBase_IsDead, "IsDead" }, // 1221133054
		{ &Z_Construct_UFunction_AParrotCharacterBase_KillCharacter, "KillCharacter" }, // 3446692281
		{ &Z_Construct_UFunction_AParrotCharacterBase_OnAnimNotifyHitEffect, "OnAnimNotifyHitEffect" }, // 3798711015
		{ &Z_Construct_UFunction_AParrotCharacterBase_OnCharacterDeath, "OnCharacterDeath" }, // 3292934219
		{ &Z_Construct_UFunction_AParrotCharacterBase_OnCharacterHit, "OnCharacterHit" }, // 2823524380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_CharacterDeathDelegate = { "CharacterDeathDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCharacterBase, CharacterDeathDelegate), Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDeathDelegate_MetaData), NewProp_CharacterDeathDelegate_MetaData) }; // 2309172821
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_CharacterHitDelegate = { "CharacterHitDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCharacterBase, CharacterHitDelegate), Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterHitDelegate_MetaData), NewProp_CharacterHitDelegate_MetaData) }; // 555557577
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_HitPoints = { "HitPoints", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCharacterBase, HitPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitPoints_MetaData), NewProp_HitPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_CurrentHitPoints = { "CurrentHitPoints", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotCharacterBase, CurrentHitPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHitPoints_MetaData), NewProp_CurrentHitPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_CharacterDeathDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_CharacterHitDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_HitPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotCharacterBase_Statics::NewProp_CurrentHitPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotCharacterBase_Statics::ClassParams = {
	&AParrotCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AParrotCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCharacterBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotCharacterBase()
{
	if (!Z_Registration_Info_UClass_AParrotCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotCharacterBase.OuterSingleton, Z_Construct_UClass_AParrotCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotCharacterBase.OuterSingleton;
}
AParrotCharacterBase::AParrotCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotCharacterBase);
AParrotCharacterBase::~AParrotCharacterBase() {}
// ********** End Class AParrotCharacterBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotCharacterBase, AParrotCharacterBase::StaticClass, TEXT("AParrotCharacterBase"), &Z_Registration_Info_UClass_AParrotCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotCharacterBase), 1963840251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h__Script_Parrot_1327295857(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Character_ParrotCharacterBase_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
