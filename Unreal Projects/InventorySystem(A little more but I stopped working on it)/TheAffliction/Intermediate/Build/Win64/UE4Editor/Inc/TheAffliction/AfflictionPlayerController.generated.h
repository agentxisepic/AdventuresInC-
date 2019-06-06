// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
class UAfflictionMovementComponent;
#ifdef THEAFFLICTION_AfflictionPlayerController_generated_h
#error "AfflictionPlayerController.generated.h already included, missing '#pragma once' in AfflictionPlayerController.h"
#endif
#define THEAFFLICTION_AfflictionPlayerController_generated_h

#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventoryComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventoryComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAfflictionMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventoryComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventoryComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAfflictionMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAfflictionPlayerController(); \
	friend struct Z_Construct_UClass_AAfflictionPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAfflictionPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(AAfflictionPlayerController)


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAfflictionPlayerController(); \
	friend struct Z_Construct_UClass_AAfflictionPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAfflictionPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(AAfflictionPlayerController)


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAfflictionPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAfflictionPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAfflictionPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAfflictionPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAfflictionPlayerController(AAfflictionPlayerController&&); \
	NO_API AAfflictionPlayerController(const AAfflictionPlayerController&); \
public:


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAfflictionPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAfflictionPlayerController(AAfflictionPlayerController&&); \
	NO_API AAfflictionPlayerController(const AAfflictionPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAfflictionPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAfflictionPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAfflictionPlayerController)


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_PRIVATE_PROPERTY_OFFSET
#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_18_PROLOG
#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_INCLASS \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_AfflictionPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class AAfflictionPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_AfflictionPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
