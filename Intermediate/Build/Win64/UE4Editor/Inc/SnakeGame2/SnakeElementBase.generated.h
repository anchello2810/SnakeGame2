// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SNAKEGAME2_SnakeElementBase_generated_h
#error "SnakeElementBase.generated.h already included, missing '#pragma once' in SnakeElementBase.h"
#endif
#define SNAKEGAME2_SnakeElementBase_generated_h

#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_RPC_WRAPPERS \
	virtual void SetFirstElementType_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItherBodeIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_ItherBodeIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFirstElementType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFirstElementType_Implementation(); \
		P_NATIVE_END; \
	}


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItherBodeIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_ItherBodeIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFirstElementType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFirstElementType_Implementation(); \
		P_NATIVE_END; \
	}


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_EVENT_PARMS
#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_CALLBACK_WRAPPERS
#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame2"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeElementBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeElementBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public:


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeElementBase)


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET
#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_13_PROLOG \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_EVENT_PARMS


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_RPC_WRAPPERS \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_CALLBACK_WRAPPERS \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_INCLASS \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_CALLBACK_WRAPPERS \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_INCLASS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame2_SnakeElementBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME2_API UClass* StaticClass<class ASnakeElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame2_Source_SnakeGame2_SnakeElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
