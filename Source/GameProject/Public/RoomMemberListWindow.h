#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EUiOperation.h"
#include "MemberListInfo.h"
#include "RoomMemberListWindow.generated.h"

class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomMemberListWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* MemberListVerticalBox;
    
    URoomMemberListWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateRoomMemberListWindow(const TArray<FMemberListInfo>& ArrayInfo);
    
    UFUNCTION(BlueprintCallable)
    bool OpenProfile(const int32& InPlayerNumber);
    
    UFUNCTION(BlueprintCallable)
    void CloseProfile(int32 PlayerID, EUiOperation Operation);
    
};

