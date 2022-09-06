#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EUiOperation.h"
#include "RoomMatchLayout.generated.h"

class URoomInfoWindow;
class URoomMatchSettingWindow;
class UGuideItemArrayWidget;
class UCommentList;
class URoomListWindow;
class URoomWindow;
class URoomMenuWindow;
class UConfirmBox;
class UGameInstanceGameParameters;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomMatchLayout : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArrayHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMatchSettingWindow* WBP_03_07_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommentList* WBP_03_07_CommentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomListWindow* WBP_03_07_RoomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomInfoWindow* WBP_03_07_RoomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomWindow* WBP_03_07_Room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMenuWindow* WBP_03_07_RoomMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBox* WBP_ConfirmBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstanceGameParameters* GameInstanceGameParameters;
    
    URoomMatchLayout();
    UFUNCTION(BlueprintCallable)
    void OpenBattleSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedBattleMemberDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedRoomStatus();
    
    UFUNCTION(BlueprintCallable)
    void EndProcessRoomMatch();
    
    UFUNCTION(BlueprintCallable)
    void CloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
};

