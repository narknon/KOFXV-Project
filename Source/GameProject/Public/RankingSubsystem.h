#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RankingSubsystem.generated.h"

class URankmatchPointRanking;

UCLASS(Blueprintable)
class GAMEPROJECT_API URankingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URankmatchPointRanking* RankmatchPointRanking;
    
    URankingSubsystem();
};

