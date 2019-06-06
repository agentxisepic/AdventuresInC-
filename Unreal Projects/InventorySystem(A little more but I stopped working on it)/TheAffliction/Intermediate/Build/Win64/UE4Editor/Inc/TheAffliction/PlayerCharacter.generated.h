// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define THEAFFLICTION_PlayerCharacter_generated_h

#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventorySize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInventorySize(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventorySize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInventorySize(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, AAfflictionCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, AAfflictionCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InventorySize() { return STRUCT_OFFSET(APlayerCharacter, InventorySize); }


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_14_PROLOG
#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_INCLASS \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
