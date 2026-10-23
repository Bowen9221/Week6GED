// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EZSwapLanguagesBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEZSwapLanguagesBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_EZSwapLanguages(ETypeConstructPhase);
EZSWAPLANGUAGES_API UClass* Z_Construct_UClass_UEZSwapLanguagesBPLibrary(ETypeConstructPhase);
EZSWAPLANGUAGES_API UClass* Z_Construct_UClass_UEZSwapLanguagesBPLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UEZSwapLanguagesBPLibrary Function GetPreferredLanguage ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_GetPreferredLanguage_Statics
struct UHT_STATICS
{
	struct EZSwapLanguagesBPLibrary_eventGetPreferredLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|DLL" },
		{ "DisplayName", "MyMod Get Preferred Language" },
		{ "ModuleRelativePath", "Public/EZSwapLanguagesBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPreferredLanguage constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPreferredLanguage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPreferredLanguage Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EZSwapLanguagesBPLibrary_eventGetPreferredLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPreferredLanguage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEZSwapLanguagesBPLibrary, nullptr, "GetPreferredLanguage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EZSwapLanguagesBPLibrary_eventGetPreferredLanguage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EZSwapLanguagesBPLibrary_eventGetPreferredLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_GetPreferredLanguage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEZSwapLanguagesBPLibrary::execGetPreferredLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEZSwapLanguagesBPLibrary::GetPreferredLanguage();
	P_NATIVE_END;
}
// ********** End Class UEZSwapLanguagesBPLibrary Function GetPreferredLanguage ********************

// ********** Begin Class UEZSwapLanguagesBPLibrary Function LoadMyModDLL **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_LoadMyModDLL_Statics
struct UHT_STATICS
{
	struct EZSwapLanguagesBPLibrary_eventLoadMyModDLL_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|DLL" },
		{ "ModuleRelativePath", "Public/EZSwapLanguagesBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadMyModDLL constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EZSwapLanguagesBPLibrary_eventLoadMyModDLL_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadMyModDLL constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadMyModDLL Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EZSwapLanguagesBPLibrary_eventLoadMyModDLL_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadMyModDLL Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEZSwapLanguagesBPLibrary, nullptr, "LoadMyModDLL", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EZSwapLanguagesBPLibrary_eventLoadMyModDLL_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EZSwapLanguagesBPLibrary_eventLoadMyModDLL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_LoadMyModDLL(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEZSwapLanguagesBPLibrary::execLoadMyModDLL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEZSwapLanguagesBPLibrary::LoadMyModDLL();
	P_NATIVE_END;
}
// ********** End Class UEZSwapLanguagesBPLibrary Function LoadMyModDLL ****************************

// ********** Begin Class UEZSwapLanguagesBPLibrary Function ScaleSpeed ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_ScaleSpeed_Statics
struct UHT_STATICS
{
	struct EZSwapLanguagesBPLibrary_eventScaleSpeed_Parms
	{
		float BaseSpeed;
		float Multiplier;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|Gameplay" },
		{ "DisplayName", "MyMod Scale Speed" },
		{ "ModuleRelativePath", "Public/EZSwapLanguagesBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ScaleSpeed constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ScaleSpeed constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ScaleSpeed Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(EZSwapLanguagesBPLibrary_eventScaleSpeed_Parms, BaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(EZSwapLanguagesBPLibrary_eventScaleSpeed_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(EZSwapLanguagesBPLibrary_eventScaleSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ScaleSpeed Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEZSwapLanguagesBPLibrary, nullptr, "ScaleSpeed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EZSwapLanguagesBPLibrary_eventScaleSpeed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EZSwapLanguagesBPLibrary_eventScaleSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_ScaleSpeed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEZSwapLanguagesBPLibrary::execScaleSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UEZSwapLanguagesBPLibrary::ScaleSpeed(Z_Param_BaseSpeed,Z_Param_Multiplier);
	P_NATIVE_END;
}
// ********** End Class UEZSwapLanguagesBPLibrary Function ScaleSpeed ******************************

// ********** Begin Class UEZSwapLanguagesBPLibrary Function SetPreferredLanguage ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_SetPreferredLanguage_Statics
struct UHT_STATICS
{
	struct EZSwapLanguagesBPLibrary_eventSetPreferredLanguage_Parms
	{
		FString LangCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MyMod|Language" },
		{ "DisplayName", "MyMod Set Preferred Language" },
		{ "ModuleRelativePath", "Public/EZSwapLanguagesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LangCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPreferredLanguage constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LangCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPreferredLanguage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPreferredLanguage Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LangCode = { "LangCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EZSwapLanguagesBPLibrary_eventSetPreferredLanguage_Parms, LangCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LangCode_MetaData), NewProp_LangCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LangCode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPreferredLanguage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEZSwapLanguagesBPLibrary, nullptr, "SetPreferredLanguage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EZSwapLanguagesBPLibrary_eventSetPreferredLanguage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EZSwapLanguagesBPLibrary_eventSetPreferredLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_SetPreferredLanguage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEZSwapLanguagesBPLibrary::execSetPreferredLanguage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LangCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEZSwapLanguagesBPLibrary::SetPreferredLanguage(Z_Param_LangCode);
	P_NATIVE_END;
}
// ********** End Class UEZSwapLanguagesBPLibrary Function SetPreferredLanguage ********************

// ********** Begin Class UEZSwapLanguagesBPLibrary ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEZSwapLanguagesBPLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "EZSwapLanguagesBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EZSwapLanguagesBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEZSwapLanguagesBPLibrary constinit property declarations ****************
// ********** End Class UEZSwapLanguagesBPLibrary constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPreferredLanguage"), .Pointer = &UEZSwapLanguagesBPLibrary::execGetPreferredLanguage },
		{ .NameUTF8 = UTF8TEXT("LoadMyModDLL"), .Pointer = &UEZSwapLanguagesBPLibrary::execLoadMyModDLL },
		{ .NameUTF8 = UTF8TEXT("ScaleSpeed"), .Pointer = &UEZSwapLanguagesBPLibrary::execScaleSpeed },
		{ .NameUTF8 = UTF8TEXT("SetPreferredLanguage"), .Pointer = &UEZSwapLanguagesBPLibrary::execSetPreferredLanguage },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_GetPreferredLanguage, "GetPreferredLanguage" }, // e9ba085337cffd5302d1916d20d4b0d54465f2c7
		{ &Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_LoadMyModDLL, "LoadMyModDLL" }, // e624cc19d1ad90c3c5ea73e85bcbc51571ae9cd2
		{ &Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_ScaleSpeed, "ScaleSpeed" }, // fc3bb35a762e93e2c8eb17a61efc74d3b9cc553f
		{ &Z_Construct_UFunction_UEZSwapLanguagesBPLibrary_SetPreferredLanguage, "SetPreferredLanguage" }, // bf208ea185988d31eb9496c18646cde33ba6387f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEZSwapLanguagesBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EZSwapLanguages,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEZSwapLanguagesBPLibrary,
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
static void UEZSwapLanguagesBPLibrary_StaticRegisterNativesUEZSwapLanguagesBPLibrary()
{
	UClass* Class = UEZSwapLanguagesBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary;
UClass* Z_Construct_UClass_UEZSwapLanguagesBPLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEZSwapLanguagesBPLibrary;
		if (!Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EZSwapLanguagesBPLibrary"),
				Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary.InnerSingleton,
				UEZSwapLanguagesBPLibrary_StaticRegisterNativesUEZSwapLanguagesBPLibrary,
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
		return Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary.OuterSingleton;
}
#undef UHT_STATICS
UEZSwapLanguagesBPLibrary::UEZSwapLanguagesBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEZSwapLanguagesBPLibrary);
UEZSwapLanguagesBPLibrary::~UEZSwapLanguagesBPLibrary() {}
// ********** End Class UEZSwapLanguagesBPLibrary **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Plugins_EZSwapLanguages_Source_EZSwapLanguages_Public_EZSwapLanguagesBPLibrary_h__Script_EZSwapLanguages_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEZSwapLanguagesBPLibrary, TEXT("UEZSwapLanguagesBPLibrary"), &Z_Registration_Info_UClass_UEZSwapLanguagesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEZSwapLanguagesBPLibrary), 3548885001U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bowen_Documents_Unreal_Projects_MyDLLDemo_Plugins_EZSwapLanguages_Source_EZSwapLanguages_Public_EZSwapLanguagesBPLibrary_h__Script_EZSwapLanguages_64701e4d7069075e097d1dd7e199a19b176d1611{
	TEXT("/Script/EZSwapLanguages"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
