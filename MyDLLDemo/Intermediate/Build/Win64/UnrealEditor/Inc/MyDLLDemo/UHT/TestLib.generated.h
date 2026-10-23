// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestLib.h"

#ifdef MYDLLDEMO_TestLib_generated_h
#error "TestLib.generated.h already included, missing '#pragma once' in TestLib.h"
#endif
#define MYDLLDEMO_TestLib_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestLib *****************************************************************
#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScaleSpeedBP); \
	DECLARE_FUNCTION(execGetPreferredLanguageBP); \
	DECLARE_FUNCTION(execSetPreferredLanguageBP); \
	DECLARE_FUNCTION(execLoadMyModDLL); \
	DECLARE_FUNCTION(execHelloTest);


struct Z_Construct_UClass_UTestLib_Statics;
MYDLLDEMO_API UClass* Z_Construct_UClass_UTestLib(ETypeConstructPhase);

#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTestLib_Statics; \
	friend MYDLLDEMO_API UClass* ::Z_Construct_UClass_UTestLib(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTestLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyDLLDemo"), Z_Construct_UClass_UTestLib) \
	DECLARE_SERIALIZER(UTestLib)


#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestLib(UTestLib&&) = delete; \
	UTestLib(const UTestLib&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestLib) \
	NO_API virtual ~UTestLib();


#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_10_PROLOG
#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestLib;

// ********** End Class UTestLib *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
