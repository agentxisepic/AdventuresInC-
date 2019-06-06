// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItem;
#ifdef THEAFFLICTION_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define THEAFFLICTION_Inventory_generated_h

#define TheAffliction_Source_TheAffliction_Inventory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeItemsInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlotOfItem); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInventorySlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AItem**)Z_Param__Result=P_THIS->ChangeItemsInventorySlot(Z_Param_InventorySlotOfItem,Z_Param_NewInventorySlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwapItems) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlotA); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlotB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwapItems(Z_Param_InventorySlotA,Z_Param_InventorySlotB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AItem**)Z_Param__Result=P_THIS->FindItem(Z_Param_InventorySlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNextEmptyInventorySlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindNextEmptyInventorySlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemToRemoveSlotNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItem(Z_Param_ItemToRemoveSlotNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_OBJECT(AItem,Z_Param_ItemToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddItem(Z_Param_ItemToAdd); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_Inventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeItemsInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlotOfItem); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInventorySlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AItem**)Z_Param__Result=P_THIS->ChangeItemsInventorySlot(Z_Param_InventorySlotOfItem,Z_Param_NewInventorySlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwapItems) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlotA); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlotB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwapItems(Z_Param_InventorySlotA,Z_Param_InventorySlotB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AItem**)Z_Param__Result=P_THIS->FindItem(Z_Param_InventorySlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNextEmptyInventorySlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindNextEmptyInventorySlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemToRemoveSlotNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItem(Z_Param_ItemToRemoveSlotNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_OBJECT(AItem,Z_Param_ItemToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddItem(Z_Param_ItemToAdd); \
		P_NATIVE_END; \
	}


#define TheAffliction_Source_TheAffliction_Inventory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define TheAffliction_Source_TheAffliction_Inventory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define TheAffliction_Source_TheAffliction_Inventory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define TheAffliction_Source_TheAffliction_Inventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define TheAffliction_Source_TheAffliction_Inventory_h_17_PRIVATE_PROPERTY_OFFSET
#define TheAffliction_Source_TheAffliction_Inventory_h_14_PROLOG
#define TheAffliction_Source_TheAffliction_Inventory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Inventory_h_17_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Inventory_h_17_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_Inventory_h_17_INCLASS \
	TheAffliction_Source_TheAffliction_Inventory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_Inventory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Inventory_h_17_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Inventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Inventory_h_17_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Inventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
