#pragma once
#include "CoreMinimal.h"
#include "OrangeGuideData.h"
#include "Engine/DataTable.h"
#include "OrangeGuide.generated.h"

USTRUCT(BlueprintType)
struct FOrangeGuide : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrangeGuideData> GuideData;
    
    GAMEPROJECT_API FOrangeGuide();
};

