// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/ParrotGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PARROT_API UClass* Z_Construct_UClass_AParrotGameState();
PARROT_API UClass* Z_Construct_UClass_AParrotGameState_NoRegister();
PARROT_API UClass* Z_Construct_UClass_AParrotPlayerCharacter_NoRegister();
PARROT_API UEnum* Z_Construct_UEnum_Parrot_ELevelState();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature();
PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELevelState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelState;
static UEnum* ELevelState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Parrot_ELevelState, (UObject*)Z_Construct_UPackage__Script_Parrot(), TEXT("ELevelState"));
	}
	return Z_Registration_Info_UEnum_ELevelState.OuterSingleton;
}
template<> PARROT_API UEnum* StaticEnum<ELevelState>()
{
	return ELevelState_StaticEnum();
}
struct Z_Construct_UEnum_Parrot_ELevelState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n* UENUM, UCLASS, GENERATED_BODY, and UFUNCTION are Macros specific to Unreal Engine. These macros provide information to the Unreal Header Tool. \n* UHT allows Unreal to use data at compile time - a good example of this is UFUNCTION(BlueprintCallable) which allows a function to be called in Blueprint. \n* For a list of property specifiers - see the Epic documentation here https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/Specifiers/\n* For examples of UPROPERTY specifiers, see documentation here https://benui.ca/unreal/uproperty/\n*\n*/// This enum tracks the simple state of what is happening in the level.\n" },
#endif
		{ "GameOver.Name", "ELevelState::GameOver" },
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
		{ "Paused.Name", "ELevelState::Paused" },
		{ "Preload.Name", "ELevelState::Preload" },
		{ "Ready.Name", "ELevelState::Ready" },
		{ "Running.Name", "ELevelState::Running" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UENUM, UCLASS, GENERATED_BODY, and UFUNCTION are Macros specific to Unreal Engine. These macros provide information to the Unreal Header Tool.\nUHT allows Unreal to use data at compile time - a good example of this is UFUNCTION(BlueprintCallable) which allows a function to be called in Blueprint.\nFor a list of property specifiers - see the Epic documentation here https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/Specifiers/\nFor examples of UPROPERTY specifiers, see documentation here https://benui.ca/unreal/uproperty/\n\n// This enum tracks the simple state of what is happening in the level." },
#endif
		{ "Victory.Name", "ELevelState::Victory" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelState::Preload", (int64)ELevelState::Preload },
		{ "ELevelState::Ready", (int64)ELevelState::Ready },
		{ "ELevelState::Running", (int64)ELevelState::Running },
		{ "ELevelState::Paused", (int64)ELevelState::Paused },
		{ "ELevelState::GameOver", (int64)ELevelState::GameOver },
		{ "ELevelState::Victory", (int64)ELevelState::Victory },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Parrot_ELevelState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Parrot,
	nullptr,
	"ELevelState",
	"ELevelState",
	Z_Construct_UEnum_Parrot_ELevelState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Parrot_ELevelState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Parrot_ELevelState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Parrot_ELevelState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Parrot_ELevelState()
{
	if (!Z_Registration_Info_UEnum_ELevelState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelState.InnerSingleton, Z_Construct_UEnum_Parrot_ELevelState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelState.InnerSingleton;
}
// ********** End Enum ELevelState *****************************************************************

// ********** Begin Delegate FLevelStateChanged ****************************************************
struct Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics
{
	struct _Script_Parrot_eventLevelStateChanged_Parms
	{
		ELevelState NewLevelState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* \n* The delegate macros are used to declare a delegate with a number of parameters.Delegates are a useful way to make event driven code.\n* Conceptually, they allow functions to subscribe to a \"delegate\". When that delegate is invoked, so too are the functions.\n* Single cast delegates operate as a function pointer and allow one binding. \n* \"Multicast\" allows multiple functions to be bound to one delegate instance. \n* \"Dynamic\" allows these delegates to be blueprint assignable as UHT can find them by name. \n* You should consider using non-dynamic multicast delegates outside of this use case. \n* Epic's documentation: https://dev.epicgames.com/documentation/en-us/unreal-engine/dynamic-delegates-in-unreal-engine?application_version=5.4\n* BenUI also has some great documentation with examples that is worth checking out: \n* https://benui.ca/unreal/delegates-intro/\n* https://benui.ca/unreal/delegates-advanced/\n*\n*/// Declare a delegate type with one parameter which will pass the new level state that we just transitioned to. \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The delegate macros are used to declare a delegate with a number of parameters.Delegates are a useful way to make event driven code.\nConceptually, they allow functions to subscribe to a \"delegate\". When that delegate is invoked, so too are the functions.\nSingle cast delegates operate as a function pointer and allow one binding.\n\"Multicast\" allows multiple functions to be bound to one delegate instance.\n\"Dynamic\" allows these delegates to be blueprint assignable as UHT can find them by name.\nYou should consider using non-dynamic multicast delegates outside of this use case.\nEpic's documentation: https://dev.epicgames.com/documentation/en-us/unreal-engine/dynamic-delegates-in-unreal-engine?application_version=5.4\nBenUI also has some great documentation with examples that is worth checking out:\nhttps://benui.ca/unreal/delegates-intro/\nhttps://benui.ca/unreal/delegates-advanced/\n\n// Declare a delegate type with one parameter which will pass the new level state that we just transitioned to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevelState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevelState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::NewProp_NewLevelState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::NewProp_NewLevelState = { "NewLevelState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Parrot_eventLevelStateChanged_Parms, NewLevelState), Z_Construct_UEnum_Parrot_ELevelState, METADATA_PARAMS(0, nullptr) }; // 2645295171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::NewProp_NewLevelState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::NewProp_NewLevelState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "LevelStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::_Script_Parrot_eventLevelStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::_Script_Parrot_eventLevelStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLevelStateChanged_DelegateWrapper(const FMulticastScriptDelegate& LevelStateChanged, ELevelState NewLevelState)
{
	struct _Script_Parrot_eventLevelStateChanged_Parms
	{
		ELevelState NewLevelState;
	};
	_Script_Parrot_eventLevelStateChanged_Parms Parms;
	Parms.NewLevelState=NewLevelState;
	LevelStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FLevelStateChanged ******************************************************

// ********** Begin Delegate FGameStateInitialized *************************************************
struct Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a delegate type which will broadcast when the game state is initialized\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a delegate type which will broadcast when the game state is initialized" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Parrot, nullptr, "GameStateInitialized__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGameStateInitialized_DelegateWrapper(const FMulticastScriptDelegate& GameStateInitialized)
{
	GameStateInitialized.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FGameStateInitialized ***************************************************

// ********** Begin Class AParrotGameState Function BossDefeated ***********************************
struct Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics
{
	struct ParrotGameState_eventBossDefeated_Parms
	{
		float Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the game state when the final boss is killed\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the game state when the final boss is killed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "ClampMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotGameState_eventBossDefeated_Parms, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "BossDefeated", Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::ParrotGameState_eventBossDefeated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::ParrotGameState_eventBossDefeated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotGameState_BossDefeated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_BossDefeated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execBossDefeated)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BossDefeated(Z_Param_Delay);
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function BossDefeated *************************************

// ********** Begin Class AParrotGameState Function BossDefeatedTimerComplete **********************
struct Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The function we call\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The function we call" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "BossDefeatedTimerComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execBossDefeatedTimerComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BossDefeatedTimerComplete();
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function BossDefeatedTimerComplete ************************

// ********** Begin Class AParrotGameState Function CompleteLevel **********************************
struct Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics
{
	struct ParrotGameState_eventCompleteLevel_Parms
	{
		AParrotPlayerCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the game state when a player completes a level\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the game state when a player completes a level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotGameState_eventCompleteLevel_Parms, Player), Z_Construct_UClass_AParrotPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "CompleteLevel", Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::ParrotGameState_eventCompleteLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::ParrotGameState_eventCompleteLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotGameState_CompleteLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_CompleteLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execCompleteLevel)
{
	P_GET_OBJECT(AParrotPlayerCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteLevel(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function CompleteLevel ************************************

// ********** Begin Class AParrotGameState Function PauseGame **************************************
struct Z_Construct_UFunction_AParrotGameState_PauseGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pauses the level state \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pauses the level state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_PauseGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "PauseGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PauseGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_PauseGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotGameState_PauseGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_PauseGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execPauseGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseGame();
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function PauseGame ****************************************

// ********** Begin Class AParrotGameState Function PlayerDeath ************************************
struct Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics
{
	struct ParrotGameState_eventPlayerDeath_Parms
	{
		AParrotPlayerCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the game state when a player is killed by enemy combat\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the game state when a player is killed by enemy combat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotGameState_eventPlayerDeath_Parms, Player), Z_Construct_UClass_AParrotPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "PlayerDeath", Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::ParrotGameState_eventPlayerDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::ParrotGameState_eventPlayerDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotGameState_PlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_PlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execPlayerDeath)
{
	P_GET_OBJECT(AParrotPlayerCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerDeath(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function PlayerDeath **************************************

// ********** Begin Class AParrotGameState Function PlayerOutOfBounds ******************************
struct Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics
{
	struct ParrotGameState_eventPlayerOutOfBounds_Parms
	{
		AParrotPlayerCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the game state when a player passes out of bounds \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the game state when a player passes out of bounds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotGameState_eventPlayerOutOfBounds_Parms, Player), Z_Construct_UClass_AParrotPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "PlayerOutOfBounds", Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::ParrotGameState_eventPlayerOutOfBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::ParrotGameState_eventPlayerOutOfBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execPlayerOutOfBounds)
{
	P_GET_OBJECT(AParrotPlayerCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerOutOfBounds(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function PlayerOutOfBounds ********************************

// ********** Begin Class AParrotGameState Function ResetCurrentLevel ******************************
struct Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles logic for when the level is reset. \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles logic for when the level is reset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "ResetCurrentLevel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execResetCurrentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCurrentLevel();
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function ResetCurrentLevel ********************************

// ********** Begin Class AParrotGameState Function UnPauseGame ************************************
struct Z_Construct_UFunction_AParrotGameState_UnPauseGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unpauses the level state \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unpauses the level state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParrotGameState_UnPauseGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AParrotGameState, nullptr, "UnPauseGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParrotGameState_UnPauseGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParrotGameState_UnPauseGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AParrotGameState_UnPauseGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParrotGameState_UnPauseGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AParrotGameState::execUnPauseGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnPauseGame();
	P_NATIVE_END;
}
// ********** End Class AParrotGameState Function UnPauseGame **************************************

// ********** Begin Class AParrotGameState *********************************************************
void AParrotGameState::StaticRegisterNativesAParrotGameState()
{
	UClass* Class = AParrotGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BossDefeated", &AParrotGameState::execBossDefeated },
		{ "BossDefeatedTimerComplete", &AParrotGameState::execBossDefeatedTimerComplete },
		{ "CompleteLevel", &AParrotGameState::execCompleteLevel },
		{ "PauseGame", &AParrotGameState::execPauseGame },
		{ "PlayerDeath", &AParrotGameState::execPlayerDeath },
		{ "PlayerOutOfBounds", &AParrotGameState::execPlayerOutOfBounds },
		{ "ResetCurrentLevel", &AParrotGameState::execResetCurrentLevel },
		{ "UnPauseGame", &AParrotGameState::execUnPauseGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParrotGameState;
UClass* AParrotGameState::GetPrivateStaticClass()
{
	using TClass = AParrotGameState;
	if (!Z_Registration_Info_UClass_AParrotGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotGameState"),
			Z_Registration_Info_UClass_AParrotGameState.InnerSingleton,
			StaticRegisterNativesAParrotGameState,
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
	return Z_Registration_Info_UClass_AParrotGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_AParrotGameState_NoRegister()
{
	return AParrotGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParrotGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* \n* Declare our class with the UCLASS Macro\n* Here we are specifying that this class should be abstract and never instantiated directly \n* and that it is a type that blueprints can derive from\n* \n*/" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/ParrotGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare our class with the UCLASS Macro\nHere we are specifying that this class should be abstract and never instantiated directly\nand that it is a type that blueprints can derive from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameStateInitialized_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When the game state has initialized \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the game state has initialized" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelStateChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Our delegate instance. BlueprintAssignable here exposes this delegate to blueprints \n// When the level state has changed \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our delegate instance. BlueprintAssignable here exposes this delegate to blueprints\nWhen the level state has changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimePerLevel_MetaData[] = {
		{ "Category", "Parrot Game State" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The time in seconds that a player is allowed to complete the level before timing out\n// This must be set for the game state to function properly \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time in seconds that a player is allowed to complete the level before timing out\nThis must be set for the game state to function properly" },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "Category", "ParrotGameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of time left remaining since the player started the level\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time left remaining since the player started the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[] = {
		{ "Category", "ParrotGameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of time accumulated since the player started the level \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time accumulated since the player started the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelState_MetaData[] = {
		{ "Category", "ParrotGameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current simple state of the level \n" },
#endif
		{ "ModuleRelativePath", "Public/Game/ParrotGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current simple state of the level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStateInitialized;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelStateChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePerLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AParrotGameState_BossDefeated, "BossDefeated" }, // 393433438
		{ &Z_Construct_UFunction_AParrotGameState_BossDefeatedTimerComplete, "BossDefeatedTimerComplete" }, // 3102643995
		{ &Z_Construct_UFunction_AParrotGameState_CompleteLevel, "CompleteLevel" }, // 273664036
		{ &Z_Construct_UFunction_AParrotGameState_PauseGame, "PauseGame" }, // 2060276638
		{ &Z_Construct_UFunction_AParrotGameState_PlayerDeath, "PlayerDeath" }, // 3125165932
		{ &Z_Construct_UFunction_AParrotGameState_PlayerOutOfBounds, "PlayerOutOfBounds" }, // 1587410312
		{ &Z_Construct_UFunction_AParrotGameState_ResetCurrentLevel, "ResetCurrentLevel" }, // 340474007
		{ &Z_Construct_UFunction_AParrotGameState_UnPauseGame, "UnPauseGame" }, // 1175499137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParrotGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_OnGameStateInitialized = { "OnGameStateInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotGameState, OnGameStateInitialized), Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameStateInitialized_MetaData), NewProp_OnGameStateInitialized_MetaData) }; // 458043209
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_OnLevelStateChanged = { "OnLevelStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotGameState, OnLevelStateChanged), Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelStateChanged_MetaData), NewProp_OnLevelStateChanged_MetaData) }; // 4072870231
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_TimePerLevel = { "TimePerLevel", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotGameState, TimePerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimePerLevel_MetaData), NewProp_TimePerLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotGameState, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotGameState, AccumulatedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTime_MetaData), NewProp_AccumulatedTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_LevelState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AParrotGameState_Statics::NewProp_LevelState = { "LevelState", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParrotGameState, LevelState), Z_Construct_UEnum_Parrot_ELevelState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelState_MetaData), NewProp_LevelState_MetaData) }; // 2645295171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParrotGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_OnGameStateInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_OnLevelStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_TimePerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_AccumulatedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_LevelState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParrotGameState_Statics::NewProp_LevelState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParrotGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParrotGameState_Statics::ClassParams = {
	&AParrotGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AParrotGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AParrotGameState_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParrotGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AParrotGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParrotGameState()
{
	if (!Z_Registration_Info_UClass_AParrotGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParrotGameState.OuterSingleton, Z_Construct_UClass_AParrotGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParrotGameState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParrotGameState);
AParrotGameState::~AParrotGameState() {}
// ********** End Class AParrotGameState ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h__Script_Parrot_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELevelState_StaticEnum, TEXT("ELevelState"), &Z_Registration_Info_UEnum_ELevelState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2645295171U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParrotGameState, AParrotGameState::StaticClass, TEXT("AParrotGameState"), &Z_Registration_Info_UClass_AParrotGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParrotGameState), 938253970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h__Script_Parrot_1482390689(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h__Script_Parrot_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Game_ParrotGameState_h__Script_Parrot_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
