#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomBattleSeatAvatar.generated.h"

class UAvatarWidget;
class URoomBattleSeatBalloon;
class URoomBattleSeatYouIcon;
class URoomPlayerNumberIcon;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomBattleSeatAvatar : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAvatarWidget* AvatarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatBalloon* WBP_03_07_table_balloon_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatBalloon* WBP_03_07_table_balloon_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatYouIcon* WBP_03_07_table_you;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomPlayerNumberIcon* WBP_03_07_player_num_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomPlayerNumberIcon* WBP_03_07_player_num_R;
    
    URoomBattleSeatAvatar();
};

