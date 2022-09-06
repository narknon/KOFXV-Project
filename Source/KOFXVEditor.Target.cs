using UnrealBuildTool;

public class KOFXVEditorTarget : TargetRules {
	public KOFXVEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"GameProject",
			"GGPO",
		});
	}
}
