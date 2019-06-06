// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_AfflictionMovementComponent_generated_h
#error "AfflictionMovementComponent.generated.h already included, missing '#pragma once' in AfflictionMovementComponent.h"
#endif
#define THEAFFLICTION_AfflictionMovementComponent_generated_h

#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayerStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStaminaHandle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StaminaHandle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectionIdentifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Walk(Z_Param_AxisValue,Z_Param_DirectionIdentifier); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayerStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStaminaHandle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StaminaHandle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectionIdentifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Walk(Z_Param_AxisValue,Z_Param_DirectionIdentifier); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAfflictionMovementComponent(); \
	friend struct Z_Construct_UClass_UAfflictionMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAfflictionMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(UAfflictionMovementComponent)


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAfflictionMovementComponent(); \
	friend struct Z_Construct_UClass_UAfflictionMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAfflictionMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(UAfflictionMovementComponent)


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAfflictionMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAfflictionMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAfflictionMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAfflictionMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAfflictionMovementComponent(UAfflictionMovementComponent&&); \
	NO_API UAfflictionMovementComponent(const UAfflictionMovementComponent&); \
public:


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAfflictionMovementComponent(UAfflictionMovementComponent&&); \
	NO_API UAfflictionMovementComponent(const UAfflictionMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAfflictionMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAfflictionMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAfflictionMovementComponent)


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_11_PROLOG
#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_INCLASS \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class UAfflictionMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_AfflictionMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
