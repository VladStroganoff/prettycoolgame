// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EditorModule : ModuleRules
{
	public EditorModule(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add(ModuleDirectory + "/Public");
		PrivateIncludePaths.AddRange(new string[] {
			ModuleDirectory + "/Private",
			System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "Source/Editor/Blutility/Private"
		});

		PublicDependencyModuleNames.AddRange(new string[] { "prettycoolgame",
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UnrealEd",
				"Kismet",
				"Blutility",
				"UMG",
				"UMGEditor"
			});
	}
}
