#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EButtonType.h"
#include "KeyTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKeyTexture2D : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonType ButtonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    GAMEPROJECT_API FKeyTexture2D();
};

