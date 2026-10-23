// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MyDLLDemo : ModuleRules
{
	public MyDLLDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicDelayLoadDLLs.Add("MyMod.Dll");

			string ProjectDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "C:\\Users\\bowen\\Documents\\Unreal Projects\\MyDLLDemo\\"));
			string DllSource = Path.Combine(ProjectDir, "Binaries", "Win64", "MyMod.dll");

			RuntimeDependencies.Add("$(TargetOutputDir)/MyMod.dll", DllSource);
		}

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
