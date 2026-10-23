// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class EZSwapLanguages : ModuleRules
{
	public EZSwapLanguages(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new[] {"Core", "CoreUObject", "Engine"});

		if(Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicDelayLoadDLLs.Add("MyMod.dll");

			string ProjectDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
			string DllSource = Path.Combine(ProjectDir, "Binaries", "Win64", "MyMod.dll");

			if(File.Exists(DllSource))
			{
				RuntimeDependencies.Add("$(TargetOutputDir)/MyMod.dll", DllSource);
			}
			else
			{
				System.Console.WriteLine("WARNING: MyMod.dll not found at " + DllSource + " - skipping staging.");
			}
		}
		
		//PublicIncludePaths.AddRange(
		//	new string[] {
		//		// ... add public include paths required here ...
		//	}
		//	);
				
		
		//PrivateIncludePaths.AddRange(
		//	new string[] {
		//		// ... add other private include paths required here ...
		//	}
		//	);
			
		
		//PublicDependencyModuleNames.AddRange(
		//	new string[]
		//	{
		//		"Core",
		//		// ... add other public dependencies that you statically link with here ...
		//	}
		//	);
			
		
		//PrivateDependencyModuleNames.AddRange(
		//	new string[]
		//	{
		//		"CoreUObject",
		//		"Engine",
		//		"Slate",
		//		"SlateCore",
		//		// ... add private dependencies that you statically link with here ...	
		//	}
		//	);
		
		
		//DynamicallyLoadedModuleNames.AddRange(
		//	new string[]
		//	{
		//		// ... add any modules that your module loads dynamically here ...
		//	}
		//	);
	}
}
