#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.h"
#include "SaveQueueNode.generated.h"

class USaveData;

USTRUCT(BlueprintType)
struct GAMEPROJECT_API FSaveQueueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveData* SaveData;
    
    FSaveQueueNode();
};

