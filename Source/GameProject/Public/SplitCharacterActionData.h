#pragma once
#include "CoreMinimal.h"
#include "ESplitDataFormatType.h"
#include "ECharacterID.h"
#include "SplitCharacterActionData.generated.h"

USTRUCT(BlueprintType)
struct FSplitCharacterActionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplitDataFormatType FormatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionNo;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ActionBinaryData;
    
public:
    GAMEPROJECT_API FSplitCharacterActionData();
};

