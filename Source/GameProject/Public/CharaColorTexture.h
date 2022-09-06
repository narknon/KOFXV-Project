#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharaColorTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharaColorTexture : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> ColorTextureArray;
    
    GAMEPROJECT_API FCharaColorTexture();
};

