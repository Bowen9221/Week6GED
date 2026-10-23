// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestLib.generated.h"


UCLASS()
class MYDLLDEMO_API UTestLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public: 

	UFUNCTION(BLueprintPure, Category = "MyMod|Test")
	static FString HelloTest();

	UFUNCTION(BlueprintCallable, Category = "MyMod|DLL")
	static bool LoadMyModDLL();

	

	UFUNCTION(BlueprintCallable, Category = "MyMod|DLL")
	static void SetPreferredLanguageBP(const FString& LangCode);

	UFUNCTION(BlueprintPure, Category = "MyMod|DLL")
	static FString GetPreferredLanguageBP();

	UFUNCTION(BlueprintPure, Category = "MyMod|Dll")
	static float ScaleSpeedBP(float BaseSpeed, float Multiplier);

private:
	static void* DllHandle;

	typedef void		(*SetLangFn)(const char*);
	typedef const char* (*GetLangFn)();
	typedef float		(*ScaleSpeedFn)(float, float);

	static SetLangFn	pSetLang;
	static GetLangFn	pGetLang;
	static ScaleSpeedFn	pScaleSpeed;


	
};
