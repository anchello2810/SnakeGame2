// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame2/SpeedBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedBonus() {}
// Cross Module References
	SNAKEGAME2_API UClass* Z_Construct_UClass_ASpeedBonus_NoRegister();
	SNAKEGAME2_API UClass* Z_Construct_UClass_ASpeedBonus();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame2();
	SNAKEGAME2_API UFunction* Z_Construct_UFunction_ASpeedBonus_AddBonus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME2_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void ASpeedBonus::StaticRegisterNativesASpeedBonus()
	{
		UClass* Class = ASpeedBonus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBonus", &ASpeedBonus::execAddBonus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpeedBonus_AddBonus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeedBonus_AddBonus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpeedBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeedBonus_AddBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeedBonus, nullptr, "AddBonus", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeedBonus_AddBonus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpeedBonus_AddBonus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeedBonus_AddBonus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeedBonus_AddBonus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpeedBonus_NoRegister()
	{
		return ASpeedBonus::StaticClass();
	}
	struct Z_Construct_UClass_ASpeedBonus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickMoment_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TickMoment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BonusClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeedBonus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpeedBonus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpeedBonus_AddBonus, "AddBonus" }, // 234888870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedBonus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpeedBonus.h" },
		{ "ModuleRelativePath", "SpeedBonus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedBonus_Statics::NewProp_TickMoment_MetaData[] = {
		{ "Category", "SpeedBonus" },
		{ "ModuleRelativePath", "SpeedBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpeedBonus_Statics::NewProp_TickMoment = { "TickMoment", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpeedBonus, TickMoment), METADATA_PARAMS(Z_Construct_UClass_ASpeedBonus_Statics::NewProp_TickMoment_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpeedBonus_Statics::NewProp_TickMoment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedBonus_Statics::NewProp_BonusClass_MetaData[] = {
		{ "Category", "SpeedBonus" },
		{ "ModuleRelativePath", "SpeedBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpeedBonus_Statics::NewProp_BonusClass = { "BonusClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpeedBonus, BonusClass), Z_Construct_UClass_ASpeedBonus_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpeedBonus_Statics::NewProp_BonusClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpeedBonus_Statics::NewProp_BonusClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeedBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedBonus_Statics::NewProp_TickMoment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedBonus_Statics::NewProp_BonusClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASpeedBonus_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASpeedBonus, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeedBonus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedBonus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpeedBonus_Statics::ClassParams = {
		&ASpeedBonus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpeedBonus_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASpeedBonus_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpeedBonus_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpeedBonus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpeedBonus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpeedBonus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpeedBonus, 1877484090);
	template<> SNAKEGAME2_API UClass* StaticClass<ASpeedBonus>()
	{
		return ASpeedBonus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpeedBonus(Z_Construct_UClass_ASpeedBonus, &ASpeedBonus::StaticClass, TEXT("/Script/SnakeGame2"), TEXT("ASpeedBonus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedBonus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
