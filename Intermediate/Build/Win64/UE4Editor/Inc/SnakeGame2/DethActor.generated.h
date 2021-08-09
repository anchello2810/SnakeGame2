// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME2_DethActor_generated_h
#error "DethActor.generated.h already included, missing '#pragma once' in DethActor.h"
#endif
#define SNAKEGAME2_DethActor_generated_h

#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_RPC_WRAPPERS
#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADethActor(); \
	friend struct Z_Construct_UClass_ADethActor_Statics; \
public: \
	DECLARE_CLASS(ADethActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(ADethActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADethActor*>(this); }


#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADethActor(); \
	friend struct Z_Construct_UClass_ADethActor_Statics; \
public: \
	DECLARE_CLASS(ADethActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(ADethActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADethActor*>(this); }


#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADethActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADethActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADethActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADethActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADethActor(ADethActor&&); \
	NO_API ADethActor(const ADethActor&); \
public:


#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADethActor(ADethActor&&); \
	NO_API ADethActor(const ADethActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADethActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADethActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADethActor)


#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ADethClass() { return STRUCT_OFFSET(ADethActor, ADethClass); }


#define SnakeGame2_Source_SnakeGame2_DethActor_h_10_PROLOG
#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_RPC_WRAPPERS \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_INCLASS \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame2_DethActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_INCLASS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_DethActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME2_API UClass* StaticClass<class ADethActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame2_Source_SnakeGame2_DethActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
