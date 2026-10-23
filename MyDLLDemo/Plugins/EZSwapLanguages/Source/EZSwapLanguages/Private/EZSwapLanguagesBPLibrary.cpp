// Copyright Epic Games, Inc. All Rights Reserved.

#include "EZSwapLanguagesBPLibrary.h"
#include "misc/Paths.h"
#include "HAL/PlatformProcess.h"
#include <string>

void* UEZSwapLanguagesBPLibrary::DllHandle = nullptr;
UEZSwapLanguagesBPLibrary::SetLangFn UEZSwapLanguagesBPLibrary::pSetLang = nullptr;
UEZSwapLanguagesBPLibrary::GetLangFn UEZSwapLanguagesBPLibrary::pGetLang = nullptr;
UEZSwapLanguagesBPLibrary::ScaleSpeedFn UEZSwapLanguagesBPLibrary::pScaleSpeed = nullptr;

bool UEZSwapLanguagesBPLibrary::LoadMyModDLL()
{
	if (DllHandle) return true;

#if PLATFORM_WINDOWS

	DllHandle = FPlatformProcess::GetDllHandle(TEXT("MyMod.dll"));
	if (!DllHandle) return false;

	pSetLang = reinterpret_cast<SetLangFn>(FPlatformProcess::GetDllExport(DllHandle, TEXT("SetPreferredLanguage")));
	pGetLang = reinterpret_cast<GetLangFn>(FPlatformProcess::GetDllExport(DllHandle, TEXT("GetPreferredLanguage")));
	pScaleSpeed = reinterpret_cast<ScaleSpeedFn>(FPlatformProcess::GetDllExport(DllHandle, TEXT("Scale Speed")));

	const bool ok = (pSetLang && pGetLang && pScaleSpeed);
		if (!ok)
		{
			FPlatformProcess::FreeDllHandle(DllHandle);
			DllHandle = nullptr;
		}
	return ok;
#else
	return false;
#endif
}

void UEZSwapLanguagesBPLibrary::SetPreferredLanguage(const FString& LangCode)
{
	if (!DllHandle && !LoadMyModDLL()) return;
	if (pSetLang)
	{
		std::string s = TCHAR_TO_ANSI(*LangCode);
		pSetLang(s.c_str());
	}
}

FString UEZSwapLanguagesBPLibrary::GetPreferredLanguage()
{
	if (!DllHandle && !LoadMyModDLL()) return TEXT("en");
	if (pGetLang)
	{
		const char* c = pGetLang();
		return FString(ANSI_TO_TCHAR(c ? c : "en"));
	}
	return TEXT("en");
}

float UEZSwapLanguagesBPLibrary::ScaleSpeed(float BaseSpeed, float Multiplier)
{
	if (!DllHandle && !LoadMyModDLL()) return BaseSpeed * Multiplier;
	return pScaleSpeed ? pScaleSpeed(BaseSpeed, Multiplier) : BaseSpeed * Multiplier;
}
