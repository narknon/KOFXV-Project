// Fill out your copyright notice in the Description page of Project Settings.

#include "SnkAnimation_AnimGraphNodes.h"

#define LOCTEXT_NAMESPACE "SNKAnimation"

// ----------------------------------------------------------------------------
UAnimGraphNode_SnkAnimation::UAnimGraphNode_SnkAnimation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText UAnimGraphNode_SnkAnimation::GetControllerDescription() const
{
	return LOCTEXT("SNK Animation", "SNK Animation");
}


// ----------------------------------------------------------------------------
FText UAnimGraphNode_SnkAnimation::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
		return GetControllerDescription();
}

void UAnimGraphNode_SnkAnimation::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	ReconstructNode();
}

FEditorModeID UAnimGraphNode_SnkAnimation::GetEditorMode() const
{
	return "AnimGraph.SkeletalControl.SNKAnimation";
}

void UAnimGraphNode_SnkAnimation::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* SkelMeshComp) const
{
	if (!SkelMeshComp)
	{
		return;
	}

	FAnimNode_SnkAnimation* ActiveNode = GetActiveInstanceNode<FAnimNode_SnkAnimation>(SkelMeshComp->GetAnimInstance());
	if (!ActiveNode)
	{
		return;
	}
	
}

// ----------------------------------------------------------------------------
UAnimGraphNode_CablePhysics::UAnimGraphNode_CablePhysics(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText UAnimGraphNode_CablePhysics::GetControllerDescription() const
{
	return LOCTEXT("SNK Cable Physics", "SNK Cable Physics");
}


// ----------------------------------------------------------------------------
FText UAnimGraphNode_CablePhysics::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

void UAnimGraphNode_CablePhysics::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	ReconstructNode();
}

FEditorModeID UAnimGraphNode_CablePhysics::GetEditorMode() const
{
	return "AnimGraph.SkeletalControl.CablePhysics";
}

void UAnimGraphNode_CablePhysics::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* SkelMeshComp) const
{
	if (!SkelMeshComp)
	{
		return;
	}

	FAnimNode_CablePhysics* ActiveNode = GetActiveInstanceNode<FAnimNode_CablePhysics>(SkelMeshComp->GetAnimInstance());
	if (!ActiveNode)
	{
		return;
	}
	
}


#undef LOCTEXT_NAMESPACE