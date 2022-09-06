#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "OnlineProfileBestUsedrChara.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnlineProfileBestUsedrChara : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CharaTexture;
    
    GAMEPROJECT_API FOnlineProfileBestUsedrChara();
};

