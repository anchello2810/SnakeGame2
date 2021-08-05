// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame2/DethActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDethActor() {}
// Cross Module References
	SNAKEGAME2_API UClass* Z_Construct_UClass_ADethActor_NoRegister();
	SNAKEGAME2_API UClass* Z_Construct_UClass_ADethActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame2();
	SNAKEGAME2_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void ADethActor::StaticRegisterNativesADethActor()
	{
	}
	UClass* Z_Construct_UClass_ADethActor_NoRegister()
	{
		return ADethActor::StaticClass();
	}
	struct Z_Construct_UClass_ADethActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADethActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADethActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DethActor.h" },
		{ "ModuleRelativePath", "DethActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADethActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ADethActor, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADethActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADethActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADethActor_Statics::ClassParams = {
		&ADethActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADethActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADethActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADethActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADethActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADethActor, 3324056421);
	template<> SNAKEGAME2_API UClass* StaticClass<ADethActor>()
	{
		return ADethActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADethActor(Z_Construct_UClass_ADethActor, &ADethActor::StaticClass, TEXT("/Script/SnakeGame2"), TEXT("ADethActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADethActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
