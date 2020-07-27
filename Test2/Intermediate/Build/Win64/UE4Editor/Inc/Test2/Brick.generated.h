// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef TEST2_Brick_generated_h
#error "Brick.generated.h already included, missing '#pragma once' in Brick.h"
#endif
#define TEST2_Brick_generated_h

#define Test2_Source_Test2_Brick_h_14_SPARSE_DATA
#define Test2_Source_Test2_Brick_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Test2_Source_Test2_Brick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Test2_Source_Test2_Brick_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend struct Z_Construct_UClass_ABrick_Statics; \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ABrick)


#define Test2_Source_Test2_Brick_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend struct Z_Construct_UClass_ABrick_Statics; \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ABrick)


#define Test2_Source_Test2_Brick_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrick(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public:


#define Test2_Source_Test2_Brick_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABrick)


#define Test2_Source_Test2_Brick_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Brick() { return STRUCT_OFFSET(ABrick, SM_Brick); } \
	FORCEINLINE static uint32 __PPO__Box_Collision() { return STRUCT_OFFSET(ABrick, Box_Collision); }


#define Test2_Source_Test2_Brick_h_11_PROLOG
#define Test2_Source_Test2_Brick_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Brick_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Brick_h_14_SPARSE_DATA \
	Test2_Source_Test2_Brick_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_Brick_h_14_INCLASS \
	Test2_Source_Test2_Brick_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Brick_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Brick_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Brick_h_14_SPARSE_DATA \
	Test2_Source_Test2_Brick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Brick_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_Brick_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class ABrick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Brick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
