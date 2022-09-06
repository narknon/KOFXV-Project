#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "ETeamMemberPosition.h"
#include "ECharcterItemFlag.h"
#include "CharacterPanelData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterPanelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharcterItemFlag ItemFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamMemberPosition TeamMemberPosition;
    
    GAMEPROJECT_API FCharacterPanelData();
};

