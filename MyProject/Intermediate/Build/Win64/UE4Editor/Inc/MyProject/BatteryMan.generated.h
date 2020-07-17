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
#ifdef MYPROJECT_BatteryMan_generated_h
#error "BatteryMan.generated.h already included, missing '#pragma once' in BatteryMan.h"
#endif
#define MYPROJECT_BatteryMan_generated_h

#define MyProject_Source_MyProject_BatteryMan_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_BatteryMan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_BatteryMan_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryMan(); \
	friend struct Z_Construct_UClass_ABatteryMan_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan)


#define MyProject_Source_MyProject_BatteryMan_h_23_INCLASS \
private: \
	static void StaticRegisterNativesABatteryMan(); \
	friend struct Z_Construct_UClass_ABatteryMan_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan)


#define MyProject_Source_MyProject_BatteryMan_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan(ABatteryMan&&); \
	NO_API ABatteryMan(const ABatteryMan&); \
public:


#define MyProject_Source_MyProject_BatteryMan_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan(ABatteryMan&&); \
	NO_API ABatteryMan(const ABatteryMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryMan)


#define MyProject_Source_MyProject_BatteryMan_h_23_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_BatteryMan_h_20_PROLOG
#define MyProject_Source_MyProject_BatteryMan_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BatteryMan_h_23_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BatteryMan_h_23_RPC_WRAPPERS \
	MyProject_Source_MyProject_BatteryMan_h_23_INCLASS \
	MyProject_Source_MyProject_BatteryMan_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_BatteryMan_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BatteryMan_h_23_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BatteryMan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BatteryMan_h_23_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BatteryMan_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABatteryMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_BatteryMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
