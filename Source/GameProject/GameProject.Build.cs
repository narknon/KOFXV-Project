using UnrealBuildTool;

public class GameProject : ModuleRules {
    public GameProject(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ActionTool",
            "AkAudio",
            "AudioMixer",
            "Chaos",
            "Core",
            "CoreUObject",
            "DebugMenu",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "InputSystem",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
