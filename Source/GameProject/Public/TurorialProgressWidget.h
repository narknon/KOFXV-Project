#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "TurorialProgressWidget.generated.h"

class UThumbnailItemWidget;
class URegisterTeamWidget;
class UHaveGuideWindowOnline;
class UTextBlock;
class UConfirmBoxButtonBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTurorialProgressWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URegisterTeamWidget* WBP_95_00_register_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UThumbnailItemWidget* team_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UThumbnailItemWidget* team_music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UConfirmBoxButtonBox*> ConfirmItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentCursor;
    
    UTurorialProgressWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleTextEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemTextEvent(int32 nCntItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorSel(int32 sel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorNml(int32 sel);
    
};

