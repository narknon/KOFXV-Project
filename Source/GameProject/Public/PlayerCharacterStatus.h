#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "ECharacterStatusGender.h"
#include "ECharacterStatusPhysique.h"
#include "PlayerCharacterStatus.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCharacterStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID CharacterColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterStatusGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterStatusPhysique Physique;
    
    GAMEPROJECT_API FPlayerCharacterStatus();
};

