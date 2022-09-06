#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreditTextureStructure.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCreditTextureStructure : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> SideTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> CreditTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TitleLogoTexture;
    
    GAMEPROJECT_API FCreditTextureStructure();
};

