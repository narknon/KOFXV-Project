#pragma once
#include "CoreMinimal.h"
#include "SwitchItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FSwitchItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ItemTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescriptionText;
    
    GAMEPROJECT_API FSwitchItemInfo();
};

