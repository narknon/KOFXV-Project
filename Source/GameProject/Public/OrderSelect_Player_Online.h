#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "OrderSelect_Player_Online.generated.h"

class UAvatarWidget;
class UOrderSelect_Player;
class UTextBlock;
class UResultRankWidget;
class UResultLineSpeedWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOrderSelect_Player_Online : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOrderSelect_Player* turn_WBP_92_01_player_side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAvatarWidget* WBP_99_avatarA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRankWidget* WBP_icon_ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultLineSpeedWidget* WBP_icon_lineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_icon_quitter;
    
    UOrderSelect_Player_Online();
};

