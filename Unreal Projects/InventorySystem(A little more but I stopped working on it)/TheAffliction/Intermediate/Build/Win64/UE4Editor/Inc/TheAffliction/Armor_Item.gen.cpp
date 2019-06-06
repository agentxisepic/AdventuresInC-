// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/Armor_Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmor_Item() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_AArmor_Item_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AArmor_Item();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
// End Cross Module References
	void AArmor_Item::StaticRegisterNativesAArmor_Item()
	{
	}
	UClass* Z_Construct_UClass_AArmor_Item_NoRegister()
	{
		return AArmor_Item::StaticClass();
	}
	struct Z_Construct_UClass_AArmor_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buff_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Buff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBuffs_MetaData[];
#endif
		static void NewProp_bHasBuffs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBuffs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Protection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmor_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmor_Item_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Armor_Item.h" },
		{ "ModuleRelativePath", "Armor_Item.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmor_Item_Statics::NewProp_Buff_MetaData[] = {
		{ "Category", "Armor_Item" },
		{ "ModuleRelativePath", "Armor_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AArmor_Item_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmor_Item, Buff), METADATA_PARAMS(Z_Construct_UClass_AArmor_Item_Statics::NewProp_Buff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmor_Item_Statics::NewProp_Buff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs_MetaData[] = {
		{ "Category", "Armor_Item" },
		{ "ModuleRelativePath", "Armor_Item.h" },
	};
#endif
	void Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs_SetBit(void* Obj)
	{
		((AArmor_Item*)Obj)->bHasBuffs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs = { "bHasBuffs", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArmor_Item), &Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmor_Item_Statics::NewProp_Protection_MetaData[] = {
		{ "Category", "Armor_Item" },
		{ "ModuleRelativePath", "Armor_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArmor_Item_Statics::NewProp_Protection = { "Protection", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmor_Item, Protection), METADATA_PARAMS(Z_Construct_UClass_AArmor_Item_Statics::NewProp_Protection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmor_Item_Statics::NewProp_Protection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmor_Item_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmor_Item_Statics::NewProp_Buff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmor_Item_Statics::NewProp_bHasBuffs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmor_Item_Statics::NewProp_Protection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmor_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmor_Item>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmor_Item_Statics::ClassParams = {
		&AArmor_Item::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmor_Item_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AArmor_Item_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AArmor_Item_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmor_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmor_Item()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmor_Item_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmor_Item, 4192357325);
	template<> THEAFFLICTION_API UClass* StaticClass<AArmor_Item>()
	{
		return AArmor_Item::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmor_Item(Z_Construct_UClass_AArmor_Item, &AArmor_Item::StaticClass, TEXT("/Script/TheAffliction"), TEXT("AArmor_Item"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmor_Item);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
