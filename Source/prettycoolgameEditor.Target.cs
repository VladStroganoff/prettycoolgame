// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class prettycoolgameEditorTarget : TargetRules
{
	public prettycoolgameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		
		ExtraModuleNames.AddRange(new string[] { "EditorModule" });
	}
}
