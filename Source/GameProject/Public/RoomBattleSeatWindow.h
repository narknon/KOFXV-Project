#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomCount.h"
#include "RoomBattleSeatWindow.generated.h"

class URoomBattleSeatAvatar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomBattleSeatWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatAvatar* seat_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatAvatar* seat_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatAvatar* seat_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatAvatar* seat_D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatAvatar* seat_E;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatAvatar* seat_F;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_inBattle;
    
    URoomBattleSeatWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCountDown(FRoomCount Count);
    
    UFUNCTION(BlueprintCallable)
    void EndSeatShuffleAnimation();
    
};

