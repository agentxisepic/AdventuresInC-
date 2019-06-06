// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/PlayerStatsController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatsController() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_APlayerStatsController_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_APlayerStatsController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerStatsController_GetHealths();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerStatsController_GetManas();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerStatsController_GetStaminas();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerStatsController_StaminaHandle();
// End Cross Module References
	void APlayerStatsController::StaticRegisterNativesAPlayerStatsController()
	{
		UClass* Class = APlayerStatsController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealths", &APlayerStatsController::execGetHealths },
			{ "GetManas", &APlayerStatsController::execGetManas },
			{ "GetStaminas", &APlayerStatsController::execGetStaminas },
			{ "StaminaHandle", &APlayerStatsController::execStaminaHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics
	{
		struct PlayerStatsController_eventGetHealths_Parms
		{
			int32 whichHealth;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_whichHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatsController_eventGetHealths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::NewProp_whichHealth = { "whichHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatsController_eventGetHealths_Parms, whichHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::NewProp_whichHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatsController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerStatsController, nullptr, "GetHealths", sizeof(PlayerStatsController_eventGetHealths_Parms), Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerStatsController_GetHealths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerStatsController_GetHealths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerStatsController_GetManas_Statics
	{
		struct PlayerStatsController_eventGetManas_Parms
		{
			int32 whichMana;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_whichMana;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatsController_eventGetManas_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::NewProp_whichMana = { "whichMana", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatsController_eventGetManas_Parms, whichMana), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::NewProp_whichMana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatsController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerStatsController, nullptr, "GetManas", sizeof(PlayerStatsController_eventGetManas_Parms), Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerStatsController_GetManas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerStatsController_GetManas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics
	{
		struct PlayerStatsController_eventGetStaminas_Parms
		{
			int32 whichStamina;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_whichStamina;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatsController_eventGetStaminas_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::NewProp_whichStamina = { "whichStamina", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatsController_eventGetStaminas_Parms, whichStamina), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::NewProp_whichStamina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatsController.h" },
		{ "ToolTip", "GETTERS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerStatsController, nullptr, "GetStaminas", sizeof(PlayerStatsController_eventGetStaminas_Parms), Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerStatsController_GetStaminas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerStatsController_GetStaminas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerStatsController_StaminaHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerStatsController_StaminaHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatsController.h" },
		{ "ToolTip", "METHODS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerStatsController_StaminaHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerStatsController, nullptr, "StaminaHandle", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerStatsController_StaminaHandle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerStatsController_StaminaHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerStatsController_StaminaHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerStatsController_StaminaHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerStatsController_NoRegister()
	{
		return APlayerStatsController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStatsController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStatsController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerStatsController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerStatsController_GetHealths, "GetHealths" }, // 1522670554
		{ &Z_Construct_UFunction_APlayerStatsController_GetManas, "GetManas" }, // 3102250691
		{ &Z_Construct_UFunction_APlayerStatsController_GetStaminas, "GetStaminas" }, // 2979976648
		{ &Z_Construct_UFunction_APlayerStatsController_StaminaHandle, "StaminaHandle" }, // 64370249
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStatsController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerStatsController.h" },
		{ "ModuleRelativePath", "PlayerStatsController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStatsController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStatsController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerStatsController_Statics::ClassParams = {
		&APlayerStatsController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerStatsController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerStatsController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerStatsController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerStatsController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerStatsController, 3604704009);
	template<> THEAFFLICTION_API UClass* StaticClass<APlayerStatsController>()
	{
		return APlayerStatsController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerStatsController(Z_Construct_UClass_APlayerStatsController, &APlayerStatsController::StaticClass, TEXT("/Script/TheAffliction"), TEXT("APlayerStatsController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStatsController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
