#pragma once
#include "CoreMinimal.h"
#include "StarIconPanelInfo.generated.h"

USTRUCT(BlueprintType)
struct FStarIconPanelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RankName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StarIconCount;
    
    GAMEPROJECT_API FStarIconPanelInfo();
};

