// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyModLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMyModLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MyDLLDemo(ETypeConstructPhase);
MYDLLDEMO_API UClass* Z_Construct_UClass_UMyModLibrary(ETypeConstructPhase);
MYDLLDEMO_API UClass* Z_Construct_UClass_UMyModLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMyModLibrary Function GetPreferredLanguageBP ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMyModLibrary_GetPreferredLanguageBP_Statics
struct UHT_STATICS
{
	struct MyModLibrary_eventGetPreferredLanguageBP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod" },
		{ "ModuleRelativePath", "Public/MyModLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPreferredLanguageBP constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPreferredLanguageBP constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPreferredLanguageBP Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MyModLibrary_eventGetPreferredLanguageBP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPreferredLanguageBP Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMyModLibrary, nullptr, "GetPreferredLanguageBP", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MyModLibrary_eventGetPreferredLanguageBP_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MyModLibrary_eventGetPreferredLanguageBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyModLibrary_GetPreferredLanguageBP(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMyModLibrary::execGetPreferredLanguageBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMyModLibrary::GetPreferredLanguageBP();
	P_NATIVE_END;
}
// ********** End Class UMyModLibrary Function GetPreferredLanguageBP ******************************

// ********** Begin Class UMyModLibrary Function LoadMyModDLL **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMyModLibrary_LoadMyModDLL_Statics
struct UHT_STATICS
{
	struct MyModLibrary_eventLoadMyModDLL_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod" },
		{ "ModuleRelativePath", "Public/MyModLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadMyModDLL constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyModLibrary_eventLoadMyModDLL_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadMyModDLL constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadMyModDLL Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MyModLibrary_eventLoadMyModDLL_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadMyModDLL Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMyModLibrary, nullptr, "LoadMyModDLL", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MyModLibrary_eventLoadMyModDLL_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MyModLibrary_eventLoadMyModDLL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyModLibrary_LoadMyModDLL(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMyModLibrary::execLoadMyModDLL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMyModLibrary::LoadMyModDLL();
	P_NATIVE_END;
}
// ********** End Class UMyModLibrary Function LoadMyModDLL ****************************************

// ********** Begin Class UMyModLibrary Function ScaleSpeedBP **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMyModLibrary_ScaleSpeedBP_Statics
struct UHT_STATICS
{
	struct MyModLibrary_eventScaleSpeedBP_Parms
	{
		float BaseSpeed;
		float Multiplier;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod" },
		{ "ModuleRelativePath", "Public/MyModLibrary.h" },
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
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MyModLibrary_eventScaleSpeedBP_Parms, BaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MyModLibrary_eventScaleSpeedBP_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MyModLibrary_eventScaleSpeedBP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ScaleSpeedBP Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMyModLibrary, nullptr, "ScaleSpeedBP", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MyModLibrary_eventScaleSpeedBP_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MyModLibrary_eventScaleSpeedBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyModLibrary_ScaleSpeedBP(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMyModLibrary::execScaleSpeedBP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMyModLibrary::ScaleSpeedBP(Z_Param_BaseSpeed,Z_Param_Multiplier);
	P_NATIVE_END;
}
// ********** End Class UMyModLibrary Function ScaleSpeedBP ****************************************

// ********** Begin Class UMyModLibrary Function SetPreferredLanguageBP ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMyModLibrary_SetPreferredLanguageBP_Statics
struct UHT_STATICS
{
	struct MyModLibrary_eventSetPreferredLanguageBP_Parms
	{
		FString LangCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod" },
		{ "ModuleRelativePath", "Public/MyModLibrary.h" },
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
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LangCode = { "LangCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MyModLibrary_eventSetPreferredLanguageBP_Parms, LangCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LangCode_MetaData), NewProp_LangCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LangCode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPreferredLanguageBP Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMyModLibrary, nullptr, "SetPreferredLanguageBP", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MyModLibrary_eventSetPreferredLanguageBP_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MyModLibrary_eventSetPreferredLanguageBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyModLibrary_SetPreferredLanguageBP(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMyModLibrary::execSetPreferredLanguageBP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LangCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyModLibrary::SetPreferredLanguageBP(Z_Param_LangCode);
	P_NATIVE_END;
}
// ********** End Class UMyModLibrary Function SetPreferredLanguageBP ******************************

// ********** Begin Class UMyModLibrary ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMyModLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "MyModLibrary.h" },
		{ "ModuleRelativePath", "Public/MyModLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyModLibrary constinit property declarations ****************************
// ********** End Class UMyModLibrary constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPreferredLanguageBP"), .Pointer = &UMyModLibrary::execGetPreferredLanguageBP },
		{ .NameUTF8 = UTF8TEXT("LoadMyModDLL"), .Pointer = &UMyModLibrary::execLoadMyModDLL },
		{ .NameUTF8 = UTF8TEXT("ScaleSpeedBP"), .Pointer = &UMyModLibrary::execScaleSpeedBP },
		{ .NameUTF8 = UTF8TEXT("SetPreferredLanguageBP"), .Pointer = &UMyModLibrary::execSetPreferredLanguageBP },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyModLibrary_GetPreferredLanguageBP, "GetPreferredLanguageBP" }, // f278ff804561e65d34110ac7a6f59eb179e54a45
		{ &Z_Construct_UFunction_UMyModLibrary_LoadMyModDLL, "LoadMyModDLL" }, // 14e4f8ba0231baa1d26340d05008aeb6a877b2a0
		{ &Z_Construct_UFunction_UMyModLibrary_ScaleSpeedBP, "ScaleSpeedBP" }, // 2a2ddf0345d4b618bf4716d96547b845c3b17bc9
		{ &Z_Construct_UFunction_UMyModLibrary_SetPreferredLanguageBP, "SetPreferredLanguageBP" }, // e08800a1c6301302953a92dff5f6f580ced7282b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MyDLLDemo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMyModLibrary,
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
static void UMyModLibrary_StaticRegisterNativesUMyModLibrary()
{
	UClass* Class = UMyModLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyModLibrary;
UClass* Z_Construct_UClass_UMyModLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMyModLibrary;
		if (!Z_Registration_Info_UClass_UMyModLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MyModLibrary"),
				Z_Registration_Info_UClass_UMyModLibrary.InnerSingleton,
				UMyModLibrary_StaticRegisterNativesUMyModLibrary,
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
		return Z_Registration_Info_UClass_UMyModLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMyModLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyModLibrary.OuterSingleton;
}
#undef UHT_STATICS
UMyModLibrary::UMyModLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyModLibrary);
UMyModLibrary::~UMyModLibrary() {}
// ********** End Class UMyModLibrary **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h__Script_MyDLLDemo_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyModLibrary, TEXT("UMyModLibrary"), &Z_Registration_Info_UClass_UMyModLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModLibrary), 2598659377U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Source_MyDLLDemo_Public_MyModLibrary_h__Script_MyDLLDemo_0800ccd245813113433cb1ef7ffb2609d51267f2{
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
