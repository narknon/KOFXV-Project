#pragma once
#include "CoreMinimal.h"
#include "ReplayPageData.generated.h"

class UReplayList_ItemWidget;

USTRUCT(BlueprintType)
struct FReplayPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UReplayList_ItemWidget*> ItemAry;
    
    GAMEPROJECT_API FReplayPageData();
};

