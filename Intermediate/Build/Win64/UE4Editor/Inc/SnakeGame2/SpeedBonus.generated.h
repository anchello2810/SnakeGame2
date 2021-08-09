// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME2_SpeedBonus_generated_h
#error "SpeedBonus.generated.h already included, missing '#pragma once' in SpeedBonus.h"
#endif
#define SNAKEGAME2_SpeedBonus_generated_h

#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddBonus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBonus(); \
		P_NATIVE_END; \
	}


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddBonus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBonus(); \
		P_NATIVE_END; \
	}


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeedBonus(); \
	friend struct Z_Construct_UClass_ASpeedBonus_Statics; \
public: \
	DECLARE_CLASS(ASpeedBonus, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(ASpeedBonus) \
	virtual UObject* _getUObject() const override { return const_cast<ASpeedBonus*>(this); }


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpeedBonus(); \
	friend struct Z_Construct_UClass_ASpeedBonus_Statics; \
public: \
	DECLARE_CLASS(ASpeedBonus, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(ASpeedBonus) \
	virtual UObject* _getUObject() const override { return const_cast<ASpeedBonus*>(this); }


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedBonus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeedBonus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedBonus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedBonus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedBonus(ASpeedBonus&&); \
	NO_API ASpeedBonus(const ASpeedBonus&); \
public:


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedBonus(ASpeedBonus&&); \
	NO_API ASpeedBonus(const ASpeedBonus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedBonus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedBonus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpeedBonus)


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_PRIVATE_PROPERTY_OFFSET
#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_10_PROLOG
#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_RPC_WRAPPERS \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_INCLASS \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_INCLASS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_SpeedBonus_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME2_API UClass* StaticClass<class ASpeedBonus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame2_Source_SnakeGame2_SpeedBonus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
