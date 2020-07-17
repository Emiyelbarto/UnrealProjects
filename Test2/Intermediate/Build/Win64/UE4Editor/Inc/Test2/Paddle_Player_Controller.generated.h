// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_Paddle_Player_Controller_generated_h
#error "Paddle_Player_Controller.generated.h already included, missing '#pragma once' in Paddle_Player_Controller.h"
#endif
#define TEST2_Paddle_Player_Controller_generated_h

#define Test2_Source_Test2_Paddle_Player_Controller_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle_Player_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Player_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Player_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Player_Controller)


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle_Player_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Player_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Player_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Player_Controller)


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle_Player_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle_Player_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Player_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Player_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Player_Controller(APaddle_Player_Controller&&); \
	NO_API APaddle_Player_Controller(const APaddle_Player_Controller&); \
public:


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Player_Controller(APaddle_Player_Controller&&); \
	NO_API APaddle_Player_Controller(const APaddle_Player_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Player_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Player_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle_Player_Controller)


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObj() { return STRUCT_OFFSET(APaddle_Player_Controller, BallObj); }


#define Test2_Source_Test2_Paddle_Player_Controller_h_11_PROLOG
#define Test2_Source_Test2_Paddle_Player_Controller_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_INCLASS \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Paddle_Player_Controller_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_Paddle_Player_Controller_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class APaddle_Player_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Paddle_Player_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
