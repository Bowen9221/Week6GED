// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyModLibrary.h"

#ifdef MYDLLDEMO_MyModLibrary_generated_h
#error "MyModLibrary.generated.h already included, missing '#pragma once' in MyModLibrary.h"
#endif
#define MYDLLDEMO_MyModLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyModLibrary ************************************************************
#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScaleSpeedBP); \
	DECLARE_FUNCTION(execGetPreferredLanguageBP); \
	DECLARE_FUNCTION(execSetPreferredLanguageBP); \
	DECLARE_FUNCTION(execLoadMyModDLL);


struct Z_Construct_UClass_UMyModLibrary_Statics;
MYDLLDEMO_API UClass* Z_Construct_UClass_UMyModLibrary(ETypeConstructPhase);

#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UMyModLibrary_Statics; \
	friend MYDLLDEMO_API UClass* ::Z_Construct_UClass_UMyModLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UMyModLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyDLLDemo"), Z_Construct_UClass_UMyModLibrary) \
	DECLARE_SERIALIZER(UMyModLibrary)


#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyModLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyModLibrary(UMyModLibrary&&) = delete; \
	UMyModLibrary(const UMyModLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyModLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyModLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyModLibrary) \
	NO_API virtual ~UMyModLibrary();


#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_6_PROLOG
#define FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_INCLASS_NO_PURE_DECLS \
	FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyModLibrary;

// ********** End Class UMyModLibrary **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
