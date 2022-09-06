#pragma once
#include "CoreMinimal.h"
#include "JukeboxBase.h"
#include "Jukebox_Layout.generated.h"

class USettingSoundListWidget;
class UPanelWidget;
class USettingStageListWidget;
class UGuideLayoutWidget;
class USettingJacketListWidget;
class UCustomEntry;
class UReportWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UJukebox_Layout : public UJukeboxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPanelWidget* HorizontalBox_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UJukeboxBase* WBP_08_customEntry_guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingStageListWidget* WBP_95_01_list_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingSoundListWidget* WBP_95_01_list_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingJacketListWidget* WBP_95_01_list_jacket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCustomEntry* WBP_08_wdw_customEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideLayoutWidget* WBP_99_guide_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReportWidget* WBP_99_wdw_report;
    
    UJukebox_Layout();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenStageList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenSoundList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenJacketList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCloseStageList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCloseSoundList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCloseJacketList(bool is_sound_list_open);
    
};

