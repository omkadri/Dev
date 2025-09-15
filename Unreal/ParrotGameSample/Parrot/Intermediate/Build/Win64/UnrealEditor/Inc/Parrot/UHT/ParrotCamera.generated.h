// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/ParrotCamera.h"

#ifdef PARROT_ParrotCamera_generated_h
#error "ParrotCamera.generated.h already included, missing '#pragma once' in ParrotCamera.h"
#endif
#define PARROT_ParrotCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AParrotCamera ************************************************************
#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execMovementTriggerBoxOverlapEnd); \
	DECLARE_FUNCTION(execMovementTriggerBoxOverlapBegin);


PARROT_API UClass* Z_Construct_UClass_AParrotCamera_NoRegister();

#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParrotCamera(); \
	friend struct Z_Construct_UClass_AParrotCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARROT_API UClass* Z_Construct_UClass_AParrotCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(AParrotCamera, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parrot"), Z_Construct_UClass_AParrotCamera_NoRegister) \
	DECLARE_SERIALIZER(AParrotCamera)


#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParrotCamera(AParrotCamera&&) = delete; \
	AParrotCamera(const AParrotCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParrotCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParrotCamera); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AParrotCamera) \
	NO_API virtual ~AParrotCamera();


#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_32_PROLOG
#define FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_INCLASS_NO_PURE_DECLS \
	FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParrotCamera;

// ********** End Class AParrotCamera **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Parrot_Source_Parrot_Public_Camera_ParrotCamera_h

// ********** Begin Enum ECameraMode ***************************************************************
#define FOREACH_ENUM_ECAMERAMODE(op) \
	op(ECameraMode::None) \
	op(ECameraMode::Follow) \
	op(ECameraMode::Fixed) 

enum class ECameraMode : uint8;
template<> struct TIsUEnumClass<ECameraMode> { enum { Value = true }; };
template<> PARROT_API UEnum* StaticEnum<ECameraMode>();
// ********** End Enum ECameraMode *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
