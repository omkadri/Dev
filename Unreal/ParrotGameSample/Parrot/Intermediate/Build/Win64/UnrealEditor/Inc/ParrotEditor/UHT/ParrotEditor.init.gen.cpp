// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParrotEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ParrotEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ParrotEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_ParrotEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ParrotEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xE1309E16,
				0xAB0E10EB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ParrotEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ParrotEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ParrotEditor(Z_Construct_UPackage__Script_ParrotEditor, TEXT("/Script/ParrotEditor"), Z_Registration_Info_UPackage__Script_ParrotEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE1309E16, 0xAB0E10EB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
