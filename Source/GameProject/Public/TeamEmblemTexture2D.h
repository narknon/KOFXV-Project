#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETeamID.h"
#include "TeamEmblemTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTeamEmblemTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamID TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    GAMEPROJECT_API FTeamEmblemTexture2D();
};

