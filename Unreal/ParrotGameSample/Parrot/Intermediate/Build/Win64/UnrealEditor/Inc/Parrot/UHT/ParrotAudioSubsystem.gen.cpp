// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/ParrotAudioSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotAudioSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
PARROT_API UClass* Z_Construct_UClass_UParrotAudioSubsystem();
PARROT_API UClass* Z_Construct_UClass_UParrotAudioSubsystem_NoRegister();
PARROT_API UEnum* Z_Construct_UEnum_Parrot_ELevelState();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotAudioSubsystem Function GameStateChanged **************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics
{
	struct ParrotAudioSubsystem_eventGameStateChanged_Parms
	{
		ELevelState NewLevelState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reacts to changes in the game state\n// Must be a UFUNCTION as this is bound to a dynamic mulitcast delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reacts to changes in the game state\nMust be a UFUNCTION as this is bound to a dynamic mulitcast delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevelState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevelState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::NewProp_NewLevelState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::NewProp_NewLevelState = { "NewLevelState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventGameStateChanged_Parms, NewLevelState), Z_Construct_UEnum_Parrot_ELevelState, METADATA_PARAMS(0, nullptr) }; // 2645295171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::NewProp_NewLevelState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::NewProp_NewLevelState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "GameStateChanged", Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::ParrotAudioSubsystem_eventGameStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::ParrotAudioSubsystem_eventGameStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execGameStateChanged)
{
	P_GET_ENUM(ELevelState,Z_Param_NewLevelState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameStateChanged(ELevelState(Z_Param_NewLevelState));
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function GameStateChanged ****************************

// ********** Begin Class UParrotAudioSubsystem Function GetMainVolume *****************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics
{
	struct ParrotAudioSubsystem_eventGetMainVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the main volume from game user settings \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the main volume from game user settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventGetMainVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "GetMainVolume", Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::ParrotAudioSubsystem_eventGetMainVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::ParrotAudioSubsystem_eventGetMainVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execGetMainVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMainVolume();
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function GetMainVolume *******************************

// ********** Begin Class UParrotAudioSubsystem Function GetMusicVolume ****************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics
{
	struct ParrotAudioSubsystem_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the music volume from game user settings \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the music volume from game user settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "GetMusicVolume", Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::ParrotAudioSubsystem_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::ParrotAudioSubsystem_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function GetMusicVolume ******************************

// ********** Begin Class UParrotAudioSubsystem Function GetSFXVolume ******************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics
{
	struct ParrotAudioSubsystem_eventGetSFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the SFX volume from game user settings \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the SFX volume from game user settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "GetSFXVolume", Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::ParrotAudioSubsystem_eventGetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::ParrotAudioSubsystem_eventGetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execGetSFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function GetSFXVolume ********************************

// ********** Begin Class UParrotAudioSubsystem Function PlaySoundAsWorldMusic *********************
struct Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics
{
	struct ParrotAudioSubsystem_eventPlaySoundAsWorldMusic_Parms
	{
		USoundBase* Music;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Manually starts the world music given a sound\n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manually starts the world music given a sound" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Music;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventPlaySoundAsWorldMusic_Parms, Music), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::NewProp_Music,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "PlaySoundAsWorldMusic", Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::ParrotAudioSubsystem_eventPlaySoundAsWorldMusic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::ParrotAudioSubsystem_eventPlaySoundAsWorldMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execPlaySoundAsWorldMusic)
{
	P_GET_OBJECT(USoundBase,Z_Param_Music);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySoundAsWorldMusic(Z_Param_Music);
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function PlaySoundAsWorldMusic ***********************

// ********** Begin Class UParrotAudioSubsystem Function SaveAudioSettings *************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the save game object with audio system specific data\n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the save game object with audio system specific data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "SaveAudioSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execSaveAudioSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAudioSettings();
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function SaveAudioSettings ***************************

// ********** Begin Class UParrotAudioSubsystem Function SetMainVolume *****************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics
{
	struct ParrotAudioSubsystem_eventSetMainVolume_Parms
	{
		float NewVolume;
		float FadeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the runtime audio data main volume with mixers \n" },
#endif
		{ "CPP_Default_FadeIn", "0.000000" },
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the runtime audio data main volume with mixers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventSetMainVolume_Parms, NewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventSetMainVolume_Parms, FadeIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::NewProp_NewVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::NewProp_FadeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "SetMainVolume", Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::ParrotAudioSubsystem_eventSetMainVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::ParrotAudioSubsystem_eventSetMainVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execSetMainVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMainVolume(Z_Param_NewVolume,Z_Param_FadeIn);
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function SetMainVolume *******************************

// ********** Begin Class UParrotAudioSubsystem Function SetMusicVolume ****************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics
{
	struct ParrotAudioSubsystem_eventSetMusicVolume_Parms
	{
		float NewVolume;
		float FadeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the runtime audio data main volume with mixers \n" },
#endif
		{ "CPP_Default_FadeIn", "0.000000" },
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the runtime audio data main volume with mixers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventSetMusicVolume_Parms, NewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventSetMusicVolume_Parms, FadeIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::NewProp_NewVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::NewProp_FadeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "SetMusicVolume", Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::ParrotAudioSubsystem_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::ParrotAudioSubsystem_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_NewVolume,Z_Param_FadeIn);
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function SetMusicVolume ******************************

// ********** Begin Class UParrotAudioSubsystem Function SetSFXVolume ******************************
struct Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics
{
	struct ParrotAudioSubsystem_eventSetSFXVolume_Parms
	{
		float NewVolume;
		float FadeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the runtime audio data main volume with mixers \n" },
#endif
		{ "CPP_Default_FadeIn", "0.000000" },
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the runtime audio data main volume with mixers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventSetSFXVolume_Parms, NewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParrotAudioSubsystem_eventSetSFXVolume_Parms, FadeIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::NewProp_NewVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::NewProp_FadeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "SetSFXVolume", Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::ParrotAudioSubsystem_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::ParrotAudioSubsystem_eventSetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execSetSFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXVolume(Z_Param_NewVolume,Z_Param_FadeIn);
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function SetSFXVolume ********************************

// ********** Begin Class UParrotAudioSubsystem Function WorldMusicInitialized *********************
struct Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics
{
	struct ParrotAudioSubsystem_eventWorldMusicInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parrot|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true when the world music player has been created with a sound \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true when the world music player has been created with a sound" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParrotAudioSubsystem_eventWorldMusicInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParrotAudioSubsystem_eventWorldMusicInitialized_Parms), &Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParrotAudioSubsystem, nullptr, "WorldMusicInitialized", Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::ParrotAudioSubsystem_eventWorldMusicInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::ParrotAudioSubsystem_eventWorldMusicInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParrotAudioSubsystem::execWorldMusicInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WorldMusicInitialized();
	P_NATIVE_END;
}
// ********** End Class UParrotAudioSubsystem Function WorldMusicInitialized ***********************

// ********** Begin Class UParrotAudioSubsystem ****************************************************
void UParrotAudioSubsystem::StaticRegisterNativesUParrotAudioSubsystem()
{
	UClass* Class = UParrotAudioSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GameStateChanged", &UParrotAudioSubsystem::execGameStateChanged },
		{ "GetMainVolume", &UParrotAudioSubsystem::execGetMainVolume },
		{ "GetMusicVolume", &UParrotAudioSubsystem::execGetMusicVolume },
		{ "GetSFXVolume", &UParrotAudioSubsystem::execGetSFXVolume },
		{ "PlaySoundAsWorldMusic", &UParrotAudioSubsystem::execPlaySoundAsWorldMusic },
		{ "SaveAudioSettings", &UParrotAudioSubsystem::execSaveAudioSettings },
		{ "SetMainVolume", &UParrotAudioSubsystem::execSetMainVolume },
		{ "SetMusicVolume", &UParrotAudioSubsystem::execSetMusicVolume },
		{ "SetSFXVolume", &UParrotAudioSubsystem::execSetSFXVolume },
		{ "WorldMusicInitialized", &UParrotAudioSubsystem::execWorldMusicInitialized },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotAudioSubsystem;
UClass* UParrotAudioSubsystem::GetPrivateStaticClass()
{
	using TClass = UParrotAudioSubsystem;
	if (!Z_Registration_Info_UClass_UParrotAudioSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotAudioSubsystem"),
			Z_Registration_Info_UClass_UParrotAudioSubsystem.InnerSingleton,
			StaticRegisterNativesUParrotAudioSubsystem,
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
	return Z_Registration_Info_UClass_UParrotAudioSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotAudioSubsystem_NoRegister()
{
	return UParrotAudioSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotAudioSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \n* An audio subsystem that shares the lifetime of the game instance. \n* Can be accessed anywhere that a game instance can be. \n* \n*/" },
#endif
		{ "IncludePath", "Audio/ParrotAudioSubsystem.h" },
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An audio subsystem that shares the lifetime of the game instance.\nCan be accessed anywhere that a game instance can be." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMusicPlayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The audio component that persists between worlds and plays music.  \n// Must be a UPROPERTY so it is not garbage collected. \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio component that persists between worlds and plays music.\nMust be a UPROPERTY so it is not garbage collected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundMixModifier_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Default Mix Modifier for Audio \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Mix Modifier for Audio" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainSoundClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Main Sound Class for volume changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Main Sound Class for volume changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicSoundClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Music Sound Class for volume changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Music Sound Class for volume changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXSoundClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The SFX Sound Class for volume changes \n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The SFX Sound Class for volume changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelCompleteMusic_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The music to play when a level is completed\n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The music to play when a level is completed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelFailMusic_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The music to play when a level is failed\n" },
#endif
		{ "ModuleRelativePath", "Public/Audio/ParrotAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The music to play when a level is failed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMusicPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSoundMixModifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainSoundClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicSoundClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXSoundClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelCompleteMusic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelFailMusic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_GameStateChanged, "GameStateChanged" }, // 3064531012
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_GetMainVolume, "GetMainVolume" }, // 3666369134
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_GetMusicVolume, "GetMusicVolume" }, // 3369057354
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_GetSFXVolume, "GetSFXVolume" }, // 2228387893
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_PlaySoundAsWorldMusic, "PlaySoundAsWorldMusic" }, // 3603633191
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_SaveAudioSettings, "SaveAudioSettings" }, // 1965689797
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_SetMainVolume, "SetMainVolume" }, // 2233718823
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_SetMusicVolume, "SetMusicVolume" }, // 284576236
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_SetSFXVolume, "SetSFXVolume" }, // 2937331136
		{ &Z_Construct_UFunction_UParrotAudioSubsystem_WorldMusicInitialized, "WorldMusicInitialized" }, // 1708486256
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotAudioSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_WorldMusicPlayer = { "WorldMusicPlayer", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, WorldMusicPlayer), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMusicPlayer_MetaData), NewProp_WorldMusicPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_DefaultSoundMixModifier = { "DefaultSoundMixModifier", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, DefaultSoundMixModifier), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundMixModifier_MetaData), NewProp_DefaultSoundMixModifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_MainSoundClass = { "MainSoundClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, MainSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainSoundClass_MetaData), NewProp_MainSoundClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_MusicSoundClass = { "MusicSoundClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, MusicSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicSoundClass_MetaData), NewProp_MusicSoundClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_SFXSoundClass = { "SFXSoundClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, SFXSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXSoundClass_MetaData), NewProp_SFXSoundClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_LevelCompleteMusic = { "LevelCompleteMusic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, LevelCompleteMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelCompleteMusic_MetaData), NewProp_LevelCompleteMusic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_LevelFailMusic = { "LevelFailMusic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotAudioSubsystem, LevelFailMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelFailMusic_MetaData), NewProp_LevelFailMusic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotAudioSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_WorldMusicPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_DefaultSoundMixModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_MainSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_MusicSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_SFXSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_LevelCompleteMusic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotAudioSubsystem_Statics::NewProp_LevelFailMusic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotAudioSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotAudioSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotAudioSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotAudioSubsystem_Statics::ClassParams = {
	&UParrotAudioSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParrotAudioSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotAudioSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotAudioSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotAudioSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotAudioSubsystem()
{
	if (!Z_Registration_Info_UClass_UParrotAudioSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotAudioSubsystem.OuterSingleton, Z_Construct_UClass_UParrotAudioSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotAudioSubsystem.OuterSingleton;
}
UParrotAudioSubsystem::UParrotAudioSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotAudioSubsystem);
UParrotAudioSubsystem::~UParrotAudioSubsystem() {}
// ********** End Class UParrotAudioSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotAudioSubsystem, UParrotAudioSubsystem::StaticClass, TEXT("UParrotAudioSubsystem"), &Z_Registration_Info_UClass_UParrotAudioSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotAudioSubsystem), 1987584495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h__Script_Parrot_3201129778(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Audio_ParrotAudioSubsystem_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
