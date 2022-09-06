#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EOnlineGameMode.h"
#include "RoomListWindow.generated.h"

class UHaveGuideWindow;
class UScrollBox;
class UReportWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomListWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* GuideWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* RoomListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReportWidget* WBP_99_wdw_report;
    
    URoomListWindow();
    UFUNCTION(BlueprintCallable)
    void SetOpenedWindowFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineGameMode(const EOnlineGameMode& Mode);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedWindow();
    
    UFUNCTION(BlueprintCallable)
    EOnlineGameMode GetOnlineGameMode();
    
};

