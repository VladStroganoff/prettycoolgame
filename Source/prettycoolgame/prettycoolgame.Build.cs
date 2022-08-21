// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class prettycoolgame : ModuleRules
{
	public prettycoolgame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"HeadMountedDisplay",
			"NavigationSystem",
			"AIModule",
			"Niagara"
		});
	}
}
