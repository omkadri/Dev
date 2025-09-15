// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParrot_init() {}
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature();
	PARROT_API UFunction* Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Parrot;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Parrot()
	{
		if (!Z_Registration_Info_UPackage__Script_Parrot.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_CharacterDeathSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_CharacterHitSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_GameStateInitialized__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_LevelStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_OnHitpointsAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_OnKeyChangeCanceled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_OnKeyChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_OnKeyChangeStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_OnKeySwap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Parrot_OnWindowFocusChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Parrot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xED9A9719,
				0x42962913,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Parrot.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Parrot.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Parrot(Z_Construct_UPackage__Script_Parrot, TEXT("/Script/Parrot"), Z_Registration_Info_UPackage__Script_Parrot, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xED9A9719, 0x42962913));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
