// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_PlayerControllerNathan_generated_h
#error "PlayerControllerNathan.generated.h already included, missing '#pragma once' in PlayerControllerNathan.h"
#endif
#define THEAFFLICTION_PlayerControllerNathan_generated_h

#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeftRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeftRight(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForwardBackward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForwardBackward(Z_Param_AxisValue); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeftRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeftRight(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForwardBackward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForwardBackward(Z_Param_AxisValue); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerNathan(); \
	friend struct Z_Construct_UClass_APlayerControllerNathan_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerNathan, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerNathan)


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerControllerNathan(); \
	friend struct Z_Construct_UClass_APlayerControllerNathan_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerNathan, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerNathan)


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerNathan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerNathan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerNathan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerNathan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerNathan(APlayerControllerNathan&&); \
	NO_API APlayerControllerNathan(const APlayerControllerNathan&); \
public:


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerNathan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerNathan(APlayerControllerNathan&&); \
	NO_API APlayerControllerNathan(const APlayerControllerNathan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerNathan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerNathan); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerNathan)


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerMovementSpeed() { return STRUCT_OFFSET(APlayerControllerNathan, PlayerMovementSpeed); }


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_12_PROLOG
#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_INCLASS \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_PlayerControllerNathan_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class APlayerControllerNathan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_PlayerControllerNathan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
