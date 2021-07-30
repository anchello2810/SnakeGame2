// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME2_PlayerPawnBase_generated_h
#error "PlayerPawnBase.generated.h already included, missing '#pragma once' in PlayerPawnBase.h"
#endif
#define SNAKEGAME2_PlayerPawnBase_generated_h

#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalImput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerHorizontalImput(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePlayerVerticalImput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerVerticalImput(Z_Param_value); \
		P_NATIVE_END; \
	}


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalImput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerHorizontalImput(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePlayerVerticalImput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerVerticalImput(Z_Param_value); \
		P_NATIVE_END; \
	}


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawnBase(); \
	friend struct Z_Construct_UClass_APlayerPawnBase_Statics; \
public: \
	DECLARE_CLASS(APlayerPawnBase, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawnBase)


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawnBase(); \
	friend struct Z_Construct_UClass_APlayerPawnBase_Statics; \
public: \
	DECLARE_CLASS(APlayerPawnBase, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawnBase)


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawnBase(APlayerPawnBase&&); \
	NO_API APlayerPawnBase(const APlayerPawnBase&); \
public:


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawnBase(APlayerPawnBase&&); \
	NO_API APlayerPawnBase(const APlayerPawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawnBase)


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_PRIVATE_PROPERTY_OFFSET
#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_14_PROLOG
#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_RPC_WRAPPERS \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_INCLASS \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_INCLASS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME2_API UClass* StaticClass<class APlayerPawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame2_Source_SnakeGame2_PlayerPawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
