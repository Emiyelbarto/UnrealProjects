// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/Paddle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_APaddle_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_APaddle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Test2();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaddle::StaticRegisterNativesAPaddle()
	{
	}
	UClass* Z_Construct_UClass_APaddle_NoRegister()
	{
		return APaddle::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Paddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Paddle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement = { "FloatingMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaddle, FloatingMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle = { "SM_Paddle", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaddle, SM_Paddle), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
		&APaddle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaddle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle, 955749250);
	template<> TEST2_API UClass* StaticClass<APaddle>()
	{
		return APaddle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle(Z_Construct_UClass_APaddle, &APaddle::StaticClass, TEXT("/Script/Test2"), TEXT("APaddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
