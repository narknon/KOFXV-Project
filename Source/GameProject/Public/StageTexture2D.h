#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageID.h"
#include "StageTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStageTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID StageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StageImage;
    
    GAMEPROJECT_API FStageTexture2D();
};

