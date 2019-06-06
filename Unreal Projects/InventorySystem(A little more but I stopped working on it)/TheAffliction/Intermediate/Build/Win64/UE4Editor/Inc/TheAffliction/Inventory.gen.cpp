// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_UInventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_AddItem();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AItem_NoRegister();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_FindItem();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_GetNumberOfItems();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_ListItems();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_RemoveItem();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UInventory_SwapItems();
// End Cross Module References
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UInventory::execAddItem },
			{ "ChangeItemsInventorySlot", &UInventory::execChangeItemsInventorySlot },
			{ "FindItem", &UInventory::execFindItem },
			{ "FindNextEmptyInventorySlot", &UInventory::execFindNextEmptyInventorySlot },
			{ "GetNumberOfItems", &UInventory::execGetNumberOfItems },
			{ "ListItems", &UInventory::execListItems },
			{ "RemoveItem", &UInventory::execRemoveItem },
			{ "SwapItems", &UInventory::execSwapItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_AddItem_Statics
	{
		struct Inventory_eventAddItem_Parms
		{
			AItem* ItemToAdd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_AddItem_Statics::NewProp_ItemToAdd = { "ItemToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddItem_Parms, ItemToAdd), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddItem_Statics::NewProp_ItemToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddItem", sizeof(Inventory_eventAddItem_Parms), Z_Construct_UFunction_UInventory_AddItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_AddItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics
	{
		struct Inventory_eventChangeItemsInventorySlot_Parms
		{
			int32 InventorySlotOfItem;
			int32 NewInventorySlot;
			AItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewInventorySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventorySlotOfItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventChangeItemsInventorySlot_Parms, ReturnValue), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::NewProp_NewInventorySlot = { "NewInventorySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventChangeItemsInventorySlot_Parms, NewInventorySlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::NewProp_InventorySlotOfItem = { "InventorySlotOfItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventChangeItemsInventorySlot_Parms, InventorySlotOfItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::NewProp_NewInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::NewProp_InventorySlotOfItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ChangeItemsInventorySlot", sizeof(Inventory_eventChangeItemsInventorySlot_Parms), Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_FindItem_Statics
	{
		struct Inventory_eventFindItem_Parms
		{
			int32 InventorySlot;
			AItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventorySlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_FindItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventFindItem_Parms, ReturnValue), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_FindItem_Statics::NewProp_InventorySlot = { "InventorySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventFindItem_Parms, InventorySlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_FindItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_FindItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_FindItem_Statics::NewProp_InventorySlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_FindItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_FindItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "FindItem", sizeof(Inventory_eventFindItem_Parms), Z_Construct_UFunction_UInventory_FindItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_FindItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_FindItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_FindItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_FindItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_FindItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics
	{
		struct Inventory_eventFindNextEmptyInventorySlot_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventFindNextEmptyInventorySlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "FindNextEmptyInventorySlot", sizeof(Inventory_eventFindNextEmptyInventorySlot_Parms), Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics
	{
		struct Inventory_eventGetNumberOfItems_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetNumberOfItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetNumberOfItems", sizeof(Inventory_eventGetNumberOfItems_Parms), Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetNumberOfItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetNumberOfItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ListItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ListItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ListItems", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ListItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_ListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_ListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RemoveItem_Statics
	{
		struct Inventory_eventRemoveItem_Parms
		{
			int32 ItemToRemoveSlotNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemToRemoveSlotNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ItemToRemoveSlotNumber = { "ItemToRemoveSlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveItem_Parms, ItemToRemoveSlotNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ItemToRemoveSlotNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveItem", sizeof(Inventory_eventRemoveItem_Parms), Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SwapItems_Statics
	{
		struct Inventory_eventSwapItems_Parms
		{
			int32 InventorySlotA;
			int32 InventorySlotB;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventorySlotB;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventorySlotA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_SwapItems_Statics::NewProp_InventorySlotB = { "InventorySlotB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSwapItems_Parms, InventorySlotB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_SwapItems_Statics::NewProp_InventorySlotA = { "InventorySlotA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSwapItems_Parms, InventorySlotA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SwapItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SwapItems_Statics::NewProp_InventorySlotB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SwapItems_Statics::NewProp_InventorySlotA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SwapItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SwapItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SwapItems", sizeof(Inventory_eventSwapItems_Parms), Z_Construct_UFunction_UInventory_SwapItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_SwapItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SwapItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_SwapItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SwapItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SwapItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddItem, "AddItem" }, // 1461616804
		{ &Z_Construct_UFunction_UInventory_ChangeItemsInventorySlot, "ChangeItemsInventorySlot" }, // 1366900052
		{ &Z_Construct_UFunction_UInventory_FindItem, "FindItem" }, // 1670004762
		{ &Z_Construct_UFunction_UInventory_FindNextEmptyInventorySlot, "FindNextEmptyInventorySlot" }, // 2053542949
		{ &Z_Construct_UFunction_UInventory_GetNumberOfItems, "GetNumberOfItems" }, // 2503846933
		{ &Z_Construct_UFunction_UInventory_ListItems, "ListItems" }, // 642933158
		{ &Z_Construct_UFunction_UInventory_RemoveItem, "RemoveItem" }, // 109024999
		{ &Z_Construct_UFunction_UInventory_SwapItems, "SwapItems" }, // 2577093320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory.h" },
		{ "ModuleRelativePath", "Inventory.h" },
		{ "ToolTip", "A component for managing an inventory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 360958738);
	template<> THEAFFLICTION_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/TheAffliction"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
