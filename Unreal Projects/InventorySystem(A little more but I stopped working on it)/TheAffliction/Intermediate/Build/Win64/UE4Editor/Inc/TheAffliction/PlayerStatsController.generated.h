// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_PlayerStatsController_generated_h
#error "PlayerStatsController.generated.h already included, missing '#pragma once' in PlayerStatsController.h"
#endif
#define THEAFFLICTION_PlayerStatsController_generated_h

#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetManas) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_whichMana); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManas(Z_Param_whichMana); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealths) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_whichHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealths(Z_Param_whichHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaminas) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_whichStamina); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStaminas(Z_Param_whichStamina); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStaminaHandle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StaminaHandle(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetManas) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_whichMana); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManas(Z_Param_whichMana); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealths) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_whichHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealths(Z_Param_whichHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaminas) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_whichStamina); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStaminas(Z_Param_whichStamina); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStaminaHandle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StaminaHandle(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerStatsController(); \
	friend struct Z_Construct_UClass_APlayerStatsController_Statics; \
public: \
	DECLARE_CLASS(APlayerStatsController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(APlayerStatsController)


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerStatsController(); \
	friend struct Z_Construct_UClass_APlayerStatsController_Statics; \
public: \
	DECLARE_CLASS(APlayerStatsController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(APlayerStatsController)


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerStatsController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStatsController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerStatsController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStatsController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerStatsController(APlayerStatsController&&); \
	NO_API APlayerStatsController(const APlayerStatsController&); \
public:


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerStatsController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerStatsController(APlayerStatsController&&); \
	NO_API APlayerStatsController(const APlayerStatsController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerStatsController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStatsController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStatsController)


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_PRIVATE_PROPERTY_OFFSET
#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_12_PROLOG
#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_INCLASS \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_PlayerStatsController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class APlayerStatsController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_PlayerStatsController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
