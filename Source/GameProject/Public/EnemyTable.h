#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "EStageID.h"
#include "ECharaColorID.h"
#include "EnemyTable.generated.h"

USTRUCT(BlueprintType)
struct FEnemyTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> EnemyChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharaColorID> EnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID stage;
    
    GAMEPROJECT_API FEnemyTable();
};

