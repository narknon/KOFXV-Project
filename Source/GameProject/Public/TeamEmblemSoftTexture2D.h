#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETeamID.h"
#include "TeamEmblemSoftTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTeamEmblemSoftTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamID TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    GAMEPROJECT_API FTeamEmblemSoftTexture2D();
};

