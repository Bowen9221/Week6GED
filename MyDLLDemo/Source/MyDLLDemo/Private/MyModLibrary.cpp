#include "MyModLibrary.h"
#include "CoreMinimal.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#include <String>

void* UMyModLibrary::DllHandle = nullptr;
UMyModLibrary::SetLangFn	UMyModLibrary::pSetLang = nullptr;
UMyModLibrary::GetLangFn	UMyModLibrary::pGetLang = nullptr;
UMyModLibrary::ScaleSpeedFn UMyModLibrary::pScaleSpeed = nullptr;

bool UMyModLibrary::LoadMyModDLL()
{
	if (DllHandle) return true;

#if PLATFORM_WINDOWS
	const FString DllPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Binaries/Win64/MyMod.dll"));
	DllHandle = FPlatformProcess::GetDllHandle(*DllPath);
	if (!DllHandle) return false;

	pSetLang = reinterpret_cast<SetLangFn>(FPlatformProcess::GetDllExport(DllHandle, TEXT("SetPreferredLanguage")));
	pGetLang = reinterpret_cast<GetLangFn>(FPlatformProcess::GetDllExport(DllHandle, TEXT("GetPreferredLanguage")));
	pScaleSpeed = reinterpret_cast<ScaleSpeedFn>(FPlatformProcess::GetDllExport(DllHandle, TEXT("ScaleSpeed")));

	const bool ok = (pSetLang && pGetLang && pScaleSpeed);
	if (!ok)
	{
		FPlatformProcess::FreeDllHandle(DllHandle);
		DllHandle = nullptr;
		return false;
	}
	return true;

#else
	return false;
#endif

}

void UMyModLibrary::SetPreferredLanguageBP(const FString& LangCode)
{
	if (!DllHandle && !LoadMyModDLL()) return;
	if (pSetLang)
	{
		std::string s = TCHAR_TO_ANSI(*LangCode);
		pSetLang(s.c_str());
	}
}

FString UMyModLibrary::GetPreferredLanguageBP() {
	if (!DllHandle && !LoadMyModDLL()) return TEXT("en");
	if (pGetLang)
	{
		const char* c = pGetLang();
		return FString(ANSI_TO_TCHAR(c ? c : "en"));
	}
	return TEXT("en");
}

float UMyModLibrary::ScaleSpeedBP(float BaseSpeed, float Multiplier)
{
	if (!DllHandle && !LoadMyModDLL()) return BaseSpeed * Multiplier;
	return pScaleSpeed ? pScaleSpeed(BaseSpeed, Multiplier) : BaseSpeed * Multiplier;
}
