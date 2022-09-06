using UnrealBuildTool;

public class KOFXVTarget : TargetRules {
	public KOFXVTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"GameProject",
			"GGPO",
		});
	}
}
