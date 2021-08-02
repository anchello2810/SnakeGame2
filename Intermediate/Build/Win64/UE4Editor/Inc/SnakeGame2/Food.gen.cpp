// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame2/Food.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood() {}
// Cross Module References
	SNAKEGAME2_API UClass* Z_Construct_UClass_AFood_NoRegister();
	SNAKEGAME2_API UClass* Z_Construct_UClass_AFood();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame2();
	SNAKEGAME2_API UFunction* Z_Construct_UFunction_AFood_AddFoodElement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME2_API UClass* Z_Construct_UClass_AFoodElement_NoRegister();
	SNAKEGAME2_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void AFood::StaticRegisterNativesAFood()
	{
		UClass* Class = AFood::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFoodElement", &AFood::execAddFoodElement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFood_AddFoodElement_Statics
	{
		struct Food_eventAddFoodElement_Parms
		{
			int32 ElementFood;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementFood;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFood_AddFoodElement_Statics::NewProp_ElementFood = { "ElementFood", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Food_eventAddFoodElement_Parms, ElementFood), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFood_AddFoodElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFood_AddFoodElement_Statics::NewProp_ElementFood,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFood_AddFoodElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Food.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFood_AddFoodElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFood, nullptr, "AddFoodElement", sizeof(Food_eventAddFoodElement_Parms), Z_Construct_UFunction_AFood_AddFoodElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFood_AddFoodElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFood_AddFoodElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFood_AddFoodElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFood_AddFoodElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFood_AddFoodElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFood_NoRegister()
	{
		return AFood::StaticClass();
	}
	struct Z_Construct_UClass_AFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FoodElementClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFood_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFood_AddFoodElement, "AddFoodElement" }, // 3799692839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Food.h" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::NewProp_FoodElementClass_MetaData[] = {
		{ "Category", "Food" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFood_Statics::NewProp_FoodElementClass = { "FoodElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood, FoodElementClass), Z_Construct_UClass_AFoodElement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::NewProp_FoodElementClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::NewProp_FoodElementClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Statics::NewProp_FoodElementClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFood_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AFood, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_Statics::ClassParams = {
		&AFood::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFood_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFood, 8568293);
	template<> SNAKEGAME2_API UClass* StaticClass<AFood>()
	{
		return AFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFood(Z_Construct_UClass_AFood, &AFood::StaticClass, TEXT("/Script/SnakeGame2"), TEXT("AFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
