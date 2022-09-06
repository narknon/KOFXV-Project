#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "MemberListItem.generated.h"

class UMemberListItemInfo;
class URoomPlayerNumberIcon;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMemberListItem : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMemberListItemInfo* WBP_03_07_MemberList_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomPlayerNumberIcon* WBP_03_07_player_num;
    
    UMemberListItem();
};

