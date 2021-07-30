// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame2/SnakeElementBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeElementBase() {}
// Cross Module References
	SNAKEGAME2_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	SNAKEGAME2_API UClass* Z_Construct_UClass_ASnakeElementBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame2();
	SNAKEGAME2_API UFunction* Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SNAKEGAME2_API UFunction* Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType();
	SNAKEGAME2_API UFunction* Z_Construct_UFunction_ASnakeElementBase_ToggleCollision();
	SNAKEGAME2_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SNAKEGAME2_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	static FName NAME_ASnakeElementBase_SetFirstElementType = FName(TEXT("SetFirstElementType"));
	void ASnakeElementBase::SetFirstElementType()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASnakeElementBase_SetFirstElementType),NULL);
	}
	void ASnakeElementBase::StaticRegisterNativesASnakeElementBase()
	{
		UClass* Class = ASnakeElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBeginOverlap", &ASnakeElementBase::execHandleBeginOverlap },
			{ "SetFirstElementType", &ASnakeElementBase::execSetFirstElementType },
			{ "ToggleCollision", &ASnakeElementBase::execToggleCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics
	{
		struct SnakeElementBase_eventHandleBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 ItherBodeIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItherBodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SnakeElementBase_eventHandleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnakeElementBase_eventHandleBeginOverlap_Parms), &Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_ItherBodeIndex = { "ItherBodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, ItherBodeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_ItherBodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "HandleBeginOverlap", sizeof(SnakeElementBase_eventHandleBeginOverlap_Parms), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "SetFirstElementType", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "ToggleCollision", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_ToggleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister()
	{
		return ASnakeElementBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap, "HandleBeginOverlap" }, // 3594253342
		{ &Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType, "SetFirstElementType" }, // 1066158733
		{ &Z_Construct_UFunction_ASnakeElementBase_ToggleCollision, "ToggleCollision" }, // 2501434742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeElementBase.h" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner_MetaData[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner = { "SnakeOwner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeElementBase, SnakeOwner), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SnakeElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeElementBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASnakeElementBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASnakeElementBase, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeElementBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams = {
		&ASnakeElementBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeElementBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeElementBase, 2554531329);
	template<> SNAKEGAME2_API UClass* StaticClass<ASnakeElementBase>()
	{
		return ASnakeElementBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeElementBase(Z_Construct_UClass_ASnakeElementBase, &ASnakeElementBase::StaticClass, TEXT("/Script/SnakeGame2"), TEXT("ASnakeElementBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeElementBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
