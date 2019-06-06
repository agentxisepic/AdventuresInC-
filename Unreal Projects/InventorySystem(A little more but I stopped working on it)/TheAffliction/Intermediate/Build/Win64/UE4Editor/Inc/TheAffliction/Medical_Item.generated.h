// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_Medical_Item_generated_h
#error "Medical_Item.generated.h already included, missing '#pragma once' in Medical_Item.h"
#endif
#define THEAFFLICTION_Medical_Item_generated_h

#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_RPC_WRAPPERS
#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMedical_Item(); \
	friend struct Z_Construct_UClass_AMedical_Item_Statics; \
public: \
	DECLARE_CLASS(AMedical_Item, AItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(AMedical_Item)


#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMedical_Item(); \
	friend struct Z_Construct_UClass_AMedical_Item_Statics; \
public: \
	DECLARE_CLASS(AMedical_Item, AItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(AMedical_Item)


#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMedical_Item(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMedical_Item) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedical_Item); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedical_Item); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedical_Item(AMedical_Item&&); \
	NO_API AMedical_Item(const AMedical_Item&); \
public:


#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedical_Item(AMedical_Item&&); \
	NO_API AMedical_Item(const AMedical_Item&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedical_Item); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedical_Item); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMedical_Item)


#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bCanHeal() { return STRUCT_OFFSET(AMedical_Item, bCanHeal); } \
	FORCEINLINE static uint32 __PPO__bCanBuff() { return STRUCT_OFFSET(AMedical_Item, bCanBuff); } \
	FORCEINLINE static uint32 __PPO__bCanDebuff() { return STRUCT_OFFSET(AMedical_Item, bCanDebuff); } \
	FORCEINLINE static uint32 __PPO__AmountToHeal() { return STRUCT_OFFSET(AMedical_Item, AmountToHeal); } \
	FORCEINLINE static uint32 __PPO__AmountToBuff() { return STRUCT_OFFSET(AMedical_Item, AmountToBuff); } \
	FORCEINLINE static uint32 __PPO__AmountToDebuff() { return STRUCT_OFFSET(AMedical_Item, AmountToDebuff); } \
	FORCEINLINE static uint32 __PPO__AffectedAttributeToBuff() { return STRUCT_OFFSET(AMedical_Item, AffectedAttributeToBuff); } \
	FORCEINLINE static uint32 __PPO__AffectedAttributeToDebuff() { return STRUCT_OFFSET(AMedical_Item, AffectedAttributeToDebuff); }


#define TheAffliction_Source_TheAffliction_Medical_Item_h_12_PROLOG
#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_INCLASS \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_Medical_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Medical_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class AMedical_Item>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_Medical_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
