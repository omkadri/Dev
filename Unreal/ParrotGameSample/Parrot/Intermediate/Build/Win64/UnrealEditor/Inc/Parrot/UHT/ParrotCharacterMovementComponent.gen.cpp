// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/ParrotCharacterMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParrotCharacterMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
PARROT_API UClass* Z_Construct_UClass_UParrotCharacterMovementComponent();
PARROT_API UClass* Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parrot();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParrotCharacterMovementComponent ****************************************
void UParrotCharacterMovementComponent::StaticRegisterNativesUParrotCharacterMovementComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParrotCharacterMovementComponent;
UClass* UParrotCharacterMovementComponent::GetPrivateStaticClass()
{
	using TClass = UParrotCharacterMovementComponent;
	if (!Z_Registration_Info_UClass_UParrotCharacterMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParrotCharacterMovementComponent"),
			Z_Registration_Info_UClass_UParrotCharacterMovementComponent.InnerSingleton,
			StaticRegisterNativesUParrotCharacterMovementComponent,
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
	return Z_Registration_Info_UClass_UParrotCharacterMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UParrotCharacterMovementComponent_NoRegister()
{
	return UParrotCharacterMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParrotCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CharacterMovementComponent handles movement logic for the associated Character owner.\n * It supports various movement modes including: walking, falling, swimming, flying, custom.\n * \n * For Parrot, we primarily use walking, falling, and jumping. \n *\n * Movement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\n * based on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n *\n * Networking is fully implemented, with server-client correction and prediction included.\n *\n * @see ACharacter, UPawnMovementComponent\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/\n */" },
#endif
		{ "IncludePath", "Player/ParrotCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CharacterMovementComponent handles movement logic for the associated Character owner.\nIt supports various movement modes including: walking, falling, swimming, flying, custom.\n\nFor Parrot, we primarily use walking, falling, and jumping.\n\nMovement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\nbased on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n\nNetworking is fully implemented, with server-client correction and prediction included.\n\n@see ACharacter, UPawnMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApexJumpHeight_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The height of the character's jump apex. \n// When the player holds down the button for the Character's JumpMaxHoldTime, this height will be reached \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of the character's jump apex.\nWhen the player holds down the button for the Character's JumpMaxHoldTime, this height will be reached" },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoyoteTime_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of time that the player has to input a jump input after walking off a ledge \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time that the player has to input a jump input after walking off a ledge" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReleaseGravityMultiplier_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A multiplier that increases gravity if the button is released early so the apex is reached more quickly.\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier that increases gravity if the button is released early so the apex is reached more quickly." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallBeginGravityScale_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The gravity scale we apply when the player reaches the apex. We ease from this to the max gravity based on the easing type.\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gravity scale we apply when the player reaches the apex. We ease from this to the max gravity based on the easing type." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallMaxGravityScale_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum gravity scale we will reach after easing from the beginning fall gravity.\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum gravity scale we will reach after easing from the beginning fall gravity." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallGravityBlendTime_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The time our blend will take to transition from the FallBeginGravityScale to FallMaxGravityScale.\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time our blend will take to transition from the FallBeginGravityScale to FallMaxGravityScale." },
#endif
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityEasingType_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The easing function type that should be applied when interpolating gravity \n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The easing function type that should be applied when interpolating gravity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallGravityEaseBlend_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controls the degree of the curve when using EaseIn, EaseOut, EaseInOut easing function types  \n" },
#endif
		{ "EditCondition", "GravityEasingType == EEasingFunc::EaseIn||GravityEasingType == EEasingFunc::EaseOut||GravityEasingType == EEasingFunc::EaseInOut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the degree of the curve when using EaseIn, EaseOut, EaseInOut easing function types" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallGravityStep_MetaData[] = {
		{ "Category", "Parrot Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The step applied when using the Step easing function type\n" },
#endif
		{ "EditCondition", "GravityEasingType == EEasingFunc::Step" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Player/ParrotCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The step applied when using the Step easing function type" },
#endif
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApexJumpHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoyoteTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EarlyReleaseGravityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallBeginGravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallMaxGravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallGravityBlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GravityEasingType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FallGravityEaseBlend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FallGravityStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParrotCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_ApexJumpHeight = { "ApexJumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, ApexJumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApexJumpHeight_MetaData), NewProp_ApexJumpHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_CoyoteTime = { "CoyoteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, CoyoteTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoyoteTime_MetaData), NewProp_CoyoteTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_EarlyReleaseGravityMultiplier = { "EarlyReleaseGravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, EarlyReleaseGravityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReleaseGravityMultiplier_MetaData), NewProp_EarlyReleaseGravityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallBeginGravityScale = { "FallBeginGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, FallBeginGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallBeginGravityScale_MetaData), NewProp_FallBeginGravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallMaxGravityScale = { "FallMaxGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, FallMaxGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallMaxGravityScale_MetaData), NewProp_FallMaxGravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallGravityBlendTime = { "FallGravityBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, FallGravityBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallGravityBlendTime_MetaData), NewProp_FallGravityBlendTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_GravityEasingType = { "GravityEasingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, GravityEasingType), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityEasingType_MetaData), NewProp_GravityEasingType_MetaData) }; // 1955521276
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallGravityEaseBlend = { "FallGravityEaseBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, FallGravityEaseBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallGravityEaseBlend_MetaData), NewProp_FallGravityEaseBlend_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallGravityStep = { "FallGravityStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParrotCharacterMovementComponent, FallGravityStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallGravityStep_MetaData), NewProp_FallGravityStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_ApexJumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_CoyoteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_EarlyReleaseGravityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallBeginGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallMaxGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallGravityBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_GravityEasingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallGravityEaseBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::NewProp_FallGravityStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Parrot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::ClassParams = {
	&UParrotCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParrotCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UParrotCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParrotCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UParrotCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParrotCharacterMovementComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParrotCharacterMovementComponent);
UParrotCharacterMovementComponent::~UParrotCharacterMovementComponent() {}
// ********** End Class UParrotCharacterMovementComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h__Script_Parrot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParrotCharacterMovementComponent, UParrotCharacterMovementComponent::StaticClass, TEXT("UParrotCharacterMovementComponent"), &Z_Registration_Info_UClass_UParrotCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParrotCharacterMovementComponent), 157759688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h__Script_Parrot_946501679(TEXT("/Script/Parrot"),
	Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h__Script_Parrot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Source_Parrot_Public_Player_ParrotCharacterMovementComponent_h__Script_Parrot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
