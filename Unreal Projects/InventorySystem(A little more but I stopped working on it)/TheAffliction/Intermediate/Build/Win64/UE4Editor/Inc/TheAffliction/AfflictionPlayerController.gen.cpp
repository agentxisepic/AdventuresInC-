// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/AfflictionPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAfflictionPlayerController() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_AAfflictionPlayerController_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AAfflictionPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent();
	THEAFFLICTION_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent();
	THEAFFLICTION_API UClass* Z_Construct_UClass_UAfflictionMovementComponent_NoRegister();
// End Cross Module References
	void AAfflictionPlayerController::StaticRegisterNativesAAfflictionPlayerController()
	{
		UClass* Class = AAfflictionPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryComponent", &AAfflictionPlayerController::execGetInventoryComponent },
			{ "GetMovementComponent", &AAfflictionPlayerController::execGetMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics
	{
		struct AfflictionPlayerController_eventGetInventoryComponent_Parms
		{
			UInventory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfflictionPlayerController_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AfflictionPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAfflictionPlayerController, nullptr, "GetInventoryComponent", sizeof(AfflictionPlayerController_eventGetInventoryComponent_Parms), Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics
	{
		struct AfflictionPlayerController_eventGetMovementComponent_Parms
		{
			UAfflictionMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfflictionPlayerController_eventGetMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UAfflictionMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AfflictionPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAfflictionPlayerController, nullptr, "GetMovementComponent", sizeof(AfflictionPlayerController_eventGetMovementComponent_Parms), Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAfflictionPlayerController_NoRegister()
	{
		return AAfflictionPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAfflictionPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAfflictionPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAfflictionPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAfflictionPlayerController_GetInventoryComponent, "GetInventoryComponent" }, // 3435762751
		{ &Z_Construct_UFunction_AAfflictionPlayerController_GetMovementComponent, "GetMovementComponent" }, // 2848553462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAfflictionPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AfflictionPlayerController.h" },
		{ "ModuleRelativePath", "AfflictionPlayerController.h" },
		{ "ToolTip", "A controller responsible for handling all requests made from the player and to the player. Delegates work to components attached to the player. This delegation is handled in BPs' because Flipbook handling in C++ is a giant hassle that's an undocumented mess :)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAfflictionPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAfflictionPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAfflictionPlayerController_Statics::ClassParams = {
		&AAfflictionPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAfflictionPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAfflictionPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAfflictionPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAfflictionPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAfflictionPlayerController, 2694968881);
	template<> THEAFFLICTION_API UClass* StaticClass<AAfflictionPlayerController>()
	{
		return AAfflictionPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAfflictionPlayerController(Z_Construct_UClass_AAfflictionPlayerController, &AAfflictionPlayerController::StaticClass, TEXT("/Script/TheAffliction"), TEXT("AAfflictionPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAfflictionPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
