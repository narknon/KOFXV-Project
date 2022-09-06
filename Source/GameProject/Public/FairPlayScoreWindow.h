#pragma once
#include "CoreMinimal.h"
#include "FairPlayScoreWindow.generated.h"

USTRUCT(BlueprintType)
struct FFairPlayScoreWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasDecreasedScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasIncurredPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRecoverdScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasLiftedPenaltyAsTimeAdvances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasLiftedPenaltyAsBattleCompletion;
    
    GAMEPROJECT_API FFairPlayScoreWindow();
};

