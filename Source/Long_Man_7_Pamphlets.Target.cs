// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Long_Man_7_PamphletsTarget : TargetRules
{
	public Long_Man_7_PamphletsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Long_Man_7_Pamphlets" } );
	}
}
