#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "UnaryCursor.h"
#include "StageData.h"
#include "EUiOperation.h"
#include "EStageID.h"
#include "StageSelect_Select.generated.h"

class UObject;
class USystemWindowBackTitle;
class UStageSelectPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStageSelect_Select : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnaryCursor StageSelectCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastStayIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 NumberPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* StageNameStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UStageSelectPanel*> WBP_92_03_panel_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageID, int32> StageIdItemMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageID, FStageData> StageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemWindowBackTitle* SystemWindowBackTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID DefaultStage;
    
public:
    UStageSelect_Select();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStageBgmText();
    
protected:
    UFUNCTION(BlueprintCallable)
    void unselOn();
    
    UFUNCTION(BlueprintCallable)
    void unselOff();
    
    UFUNCTION(BlueprintCallable)
    void TimeoutSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetStageNotNew(EStageID stage);
    
    UFUNCTION(BlueprintCallable)
    EStageID RandomStage() const;
    
    UFUNCTION(BlueprintCallable)
    void OnlineSelectedStage(EStageID StageID);
    
    UFUNCTION(BlueprintCallable)
    void OnlineMovedStageSelectCursor(EStageID StageID);
    
    UFUNCTION(BlueprintCallable)
    void MovedStageSelectCursor(EStageID StageID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveStageScene(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewStage(EStageID stage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableStageIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableStage(EStageID stage) const;
    
    UFUNCTION(BlueprintCallable)
    void InitStageData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextAsStageID(EStageID stage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStageID> GetDisableStageCN() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBgmTextAsStageID(const EStageID stage, FText& BgmTitle, FText& BgmSubtitle);
    
    UFUNCTION(BlueprintCallable)
    void ConnectOnlineGameSubsystem();
    
};

