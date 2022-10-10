using UnrealBuildTool;
 
public class SnkAnimationEd : ModuleRules
{
	public SnkAnimationEd(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"AnimGraph",
			"AnimGraphRuntime",
			"AnimationCore",
			"BlueprintGraph",
			"UnrealEd",
			"Core",
			"CoreUObject",
			"Engine",
			"KawaiiPhysics",
			"Persona",
			"InputCore", 
			"SnkAnimation"
		});
		
		PrivateIncludePaths.AddRange(new string[] {"SnkAnimationEd/Private"});
	}
}