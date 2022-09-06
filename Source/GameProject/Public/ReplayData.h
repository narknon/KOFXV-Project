#pragma once
#include "CoreMinimal.h"
#include "SaveData.h"
#include "ReplayGameData.h"
#include "ReplayData.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UReplayData : public USaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayGameData> ReplayList;
    
public:
    UReplayData();
};

