// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestLib.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTestLib() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MyDLLDemo(ETypeConstructPhase);
MYDLLDEMO_API UClass* Z_Construct_UClass_UTestLib(ETypeConstructPhase);
MYDLLDEMO_API UClass* Z_Construct_UClass_UTestLib(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTestLib Function GetPreferredLanguageBP *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTestLib_GetPreferredLanguageBP_Statics
struct UHT_STATICS
{
	struct TestLib_eventGetPreferredLanguageBP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|DLL" },
		{ "ModuleRelativePath", "Public/TestLib.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPreferredLanguageBP constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPreferredLanguageBP constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPreferredLanguageBP Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TestLib_eventGetPreferredLanguageBP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPreferredLanguageBP Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTestLib, nullptr, "GetPreferredLanguageBP", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TestLib_eventGetPreferredLanguageBP_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TestLib_eventGetPreferredLanguageBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestLib_GetPreferredLanguageBP(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTestLib::execGetPreferredLanguageBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UTestLib::GetPreferredLanguageBP();
	P_NATIVE_END;
}
// ********** End Class UTestLib Function GetPreferredLanguageBP ***********************************

// ********** Begin Class UTestLib Function HelloTest **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTestLib_HelloTest_Statics
struct UHT_STATICS
{
	struct TestLib_eventHelloTest_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|Test" },
		{ "ModuleRelativePath", "Public/TestLib.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HelloTest constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HelloTest constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HelloTest Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TestLib_eventHelloTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HelloTest Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTestLib, nullptr, "HelloTest", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TestLib_eventHelloTest_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TestLib_eventHelloTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestLib_HelloTest(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTestLib::execHelloTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UTestLib::HelloTest();
	P_NATIVE_END;
}
// ********** End Class UTestLib Function HelloTest ************************************************

// ********** Begin Class UTestLib Function LoadMyModDLL *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTestLib_LoadMyModDLL_Statics
struct UHT_STATICS
{
	struct TestLib_eventLoadMyModDLL_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|DLL" },
		{ "ModuleRelativePath", "Public/TestLib.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadMyModDLL constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TestLib_eventLoadMyModDLL_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadMyModDLL constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadMyModDLL Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TestLib_eventLoadMyModDLL_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadMyModDLL Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTestLib, nullptr, "LoadMyModDLL", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TestLib_eventLoadMyModDLL_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TestLib_eventLoadMyModDLL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestLib_LoadMyModDLL(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTestLib::execLoadMyModDLL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTestLib::LoadMyModDLL();
	P_NATIVE_END;
}
// ********** End Class UTestLib Function LoadMyModDLL *********************************************

// ********** Begin Class UTestLib Function ScaleSpeedBP *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTestLib_ScaleSpeedBP_Statics
struct UHT_STATICS
{
	struct TestLib_eventScaleSpeedBP_Parms
	{
		float BaseSpeed;
		float Multiplier;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|Dll" },
		{ "ModuleRelativePath", "Public/TestLib.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ScaleSpeedBP constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ScaleSpeedBP constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ScaleSpeedBP Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(TestLib_eventScaleSpeedBP_Parms, BaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(TestLib_eventScaleSpeedBP_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(TestLib_eventScaleSpeedBP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ScaleSpeedBP Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTestLib, nullptr, "ScaleSpeedBP", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TestLib_eventScaleSpeedBP_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TestLib_eventScaleSpeedBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestLib_ScaleSpeedBP(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTestLib::execScaleSpeedBP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UTestLib::ScaleSpeedBP(Z_Param_BaseSpeed,Z_Param_Multiplier);
	P_NATIVE_END;
}
// ********** End Class UTestLib Function ScaleSpeedBP *********************************************

// ********** Begin Class UTestLib Function SetPreferredLanguageBP *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTestLib_SetPreferredLanguageBP_Statics
struct UHT_STATICS
{
	struct TestLib_eventSetPreferredLanguageBP_Parms
	{
		FString LangCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|DLL" },
		{ "ModuleRelativePath", "Public/TestLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LangCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPreferredLanguageBP constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LangCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPreferredLanguageBP constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPreferredLanguageBP Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LangCode = { "LangCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TestLib_eventSetPreferredLanguageBP_Parms, LangCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LangCode_MetaData), NewProp_LangCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LangCode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPreferredLanguageBP Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTestLib, nullptr, "SetPreferredLanguageBP", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TestLib_eventSetPreferredLanguageBP_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TestLib_eventSetPreferredLanguageBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestLib_SetPreferredLanguageBP(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTestLib::execSetPreferredLanguageBP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LangCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTestLib::SetPreferredLanguageBP(Z_Param_LangCode);
	P_NATIVE_END;
}
// ********** End Class UTestLib Function SetPreferredLanguageBP ***********************************

// ********** Begin Class UTestLib *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTestLib_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TestLib.h" },
		{ "ModuleRelativePath", "Public/TestLib.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestLib constinit property declarations *********************************
// ********** End Class UTestLib constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPreferredLanguageBP"), .Pointer = &UTestLib::execGetPreferredLanguageBP },
		{ .NameUTF8 = UTF8TEXT("HelloTest"), .Pointer = &UTestLib::execHelloTest },
		{ .NameUTF8 = UTF8TEXT("LoadMyModDLL"), .Pointer = &UTestLib::execLoadMyModDLL },
		{ .NameUTF8 = UTF8TEXT("ScaleSpeedBP"), .Pointer = &UTestLib::execScaleSpeedBP },
		{ .NameUTF8 = UTF8TEXT("SetPreferredLanguageBP"), .Pointer = &UTestLib::execSetPreferredLanguageBP },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestLib_GetPreferredLanguageBP, "GetPreferredLanguageBP" }, // 60376e47120bd9bf092bb55b4daef939ace0d070
		{ &Z_Construct_UFunction_UTestLib_HelloTest, "HelloTest" }, // 9763216390a98452ce62e3eec6991c014a0d6b7b
		{ &Z_Construct_UFunction_UTestLib_LoadMyModDLL, "LoadMyModDLL" }, // 8c89118fce0c109a27f8147634d06571c44a1204
		{ &Z_Construct_UFunction_UTestLib_ScaleSpeedBP, "ScaleSpeedBP" }, // ef2a097db16294cb67adf8333174bc865387ff74
		{ &Z_Construct_UFunction_UTestLib_SetPreferredLanguageBP, "SetPreferredLanguageBP" }, // 90351ed7f8b015805306f12e92c8bbdf164231ad
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MyDLLDemo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTestLib,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTestLib_StaticRegisterNativesUTestLib()
{
	UClass* Class = UTestLib::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTestLib;
UClass* Z_Construct_UClass_UTestLib(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTestLib;
		if (!Z_Registration_Info_UClass_UTestLib.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TestLib"),
				Z_Registration_Info_UClass_UTestLib.InnerSingleton,
				UTestLib_StaticRegisterNativesUTestLib,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UTestLib.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTestLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestLib.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestLib.OuterSingleton;
}
#undef UHT_STATICS
UTestLib::UTestLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestLib);
UTestLib::~UTestLib() {}
// ********** End Class UTestLib *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h__Script_MyDLLDemo_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestLib, TEXT("UTestLib"), &Z_Registration_Info_UClass_UTestLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestLib), 782508437U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_TestLib_h__Script_MyDLLDemo_84dbde25ae2a2a966a87f409c4515625708151cd{
	TEXT("/Script/MyDLLDemo"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
