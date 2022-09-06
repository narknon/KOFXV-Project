#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "CharaCategory.generated.h"

USTRUCT(BlueprintType)
struct FCharaCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> CharaList;
    
    GAMEPROJECT_API FCharaCategory();
};

