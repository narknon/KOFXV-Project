#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "MemberListItemInfo_Avatar.generated.h"

class UAvatarWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMemberListItemInfo_Avatar : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAvatarWidget* WBP_99_avatarA;
    
    UMemberListItemInfo_Avatar();
};

