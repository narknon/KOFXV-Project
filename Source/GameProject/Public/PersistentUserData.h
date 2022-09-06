#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PersistentUserData.generated.h"

class USystemData;
class UGameData;
class UReplayData;

UCLASS(Blueprintable)
class GAMEPROJECT_API UPersistentUserData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemData* SystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameData* GameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplayData* ReplayData;
    
    UPersistentUserData();
};

