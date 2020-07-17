// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef TEST2_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define TEST2_Ball_generated_h

#define Test2_Source_Test2_Ball_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetBall(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Ball_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetBall(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Ball_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Test2_Source_Test2_Ball_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Test2_Source_Test2_Ball_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Test2_Source_Test2_Ball_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Test2_Source_Test2_Ball_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall, ProjectileMovement); }


#define Test2_Source_Test2_Ball_h_14_PROLOG
#define Test2_Source_Test2_Ball_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Ball_h_17_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Ball_h_17_RPC_WRAPPERS \
	Test2_Source_Test2_Ball_h_17_INCLASS \
	Test2_Source_Test2_Ball_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Ball_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Ball_h_17_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Ball_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Ball_h_17_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_Ball_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
