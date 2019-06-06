// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define THEAFFLICTION_Item_generated_h

#define TheAffliction_Source_TheAffliction_Item_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeAmount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AmountToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ChangeAmount(Z_Param_AmountToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsStackable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsStackable(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeAmount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AmountToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ChangeAmount(Z_Param_AmountToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsStackable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsStackable(); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define TheAffliction_Source_TheAffliction_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define TheAffliction_Source_TheAffliction_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define TheAffliction_Source_TheAffliction_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define TheAffliction_Source_TheAffliction_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsStackable() { return STRUCT_OFFSET(AItem, bIsStackable); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(AItem, Name); } \
	FORCEINLINE static uint32 __PPO__Description() { return STRUCT_OFFSET(AItem, Description); } \
	FORCEINLINE static uint32 __PPO__Rarity() { return STRUCT_OFFSET(AItem, Rarity); } \
	FORCEINLINE static uint32 __PPO__Amount() { return STRUCT_OFFSET(AItem, Amount); } \
	FORCEINLINE static uint32 __PPO__MaxAmount() { return STRUCT_OFFSET(AItem, MaxAmount); }


#define TheAffliction_Source_TheAffliction_Item_h_9_PROLOG
#define TheAffliction_Source_TheAffliction_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Item_h_12_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_Item_h_12_INCLASS \
	TheAffliction_Source_TheAffliction_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Item_h_12_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
