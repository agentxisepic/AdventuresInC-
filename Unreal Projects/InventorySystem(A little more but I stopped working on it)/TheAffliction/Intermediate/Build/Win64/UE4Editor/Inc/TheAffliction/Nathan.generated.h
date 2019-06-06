// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEAFFLICTION_Nathan_generated_h
#error "Nathan.generated.h already included, missing '#pragma once' in Nathan.h"
#endif
#define THEAFFLICTION_Nathan_generated_h

#define TheAffliction_Source_TheAffliction_Nathan_h_14_RPC_WRAPPERS
#define TheAffliction_Source_TheAffliction_Nathan_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TheAffliction_Source_TheAffliction_Nathan_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANathan(); \
	friend struct Z_Construct_UClass_ANathan_Statics; \
public: \
	DECLARE_CLASS(ANathan, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(ANathan)


#define TheAffliction_Source_TheAffliction_Nathan_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANathan(); \
	friend struct Z_Construct_UClass_ANathan_Statics; \
public: \
	DECLARE_CLASS(ANathan, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheAffliction"), NO_API) \
	DECLARE_SERIALIZER(ANathan)


#define TheAffliction_Source_TheAffliction_Nathan_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANathan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANathan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANathan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANathan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANathan(ANathan&&); \
	NO_API ANathan(const ANathan&); \
public:


#define TheAffliction_Source_TheAffliction_Nathan_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANathan(ANathan&&); \
	NO_API ANathan(const ANathan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANathan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANathan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANathan)


#define TheAffliction_Source_TheAffliction_Nathan_h_14_PRIVATE_PROPERTY_OFFSET
#define TheAffliction_Source_TheAffliction_Nathan_h_11_PROLOG
#define TheAffliction_Source_TheAffliction_Nathan_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Nathan_h_14_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Nathan_h_14_RPC_WRAPPERS \
	TheAffliction_Source_TheAffliction_Nathan_h_14_INCLASS \
	TheAffliction_Source_TheAffliction_Nathan_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheAffliction_Source_TheAffliction_Nathan_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheAffliction_Source_TheAffliction_Nathan_h_14_PRIVATE_PROPERTY_OFFSET \
	TheAffliction_Source_TheAffliction_Nathan_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Nathan_h_14_INCLASS_NO_PURE_DECLS \
	TheAffliction_Source_TheAffliction_Nathan_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEAFFLICTION_API UClass* StaticClass<class ANathan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheAffliction_Source_TheAffliction_Nathan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
