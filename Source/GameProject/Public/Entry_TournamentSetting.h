#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ETournamentRule.h"
#include "Entry_TournamentSetting.generated.h"

class UOperationalWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_TournamentSetting : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* WBP_Setting_Switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* WBP_99_itemA_Confirm_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastTournamentSettingCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSettingSwitchCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETournamentRule, FText> FristToWinText;
    
    UEntry_TournamentSetting();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTournamentCursorDisplay(int32 TournamentIndex, int32 SettingSwitchIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateModeText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentSettingCursorIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSettingSwitchCursorIndex();
    
};

