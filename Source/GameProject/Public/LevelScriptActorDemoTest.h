#pragma once
#include "CoreMinimal.h"
#include "InputBaseLevelScriptActor.h"
#include "EDemoTestMode.h"
#include "LevelScriptActorDemoTest.generated.h"

class UDataAssetKakeaiSetting;
class UAssetCbas;

UCLASS(Blueprintable)
class ALevelScriptActorDemoTest : public AInputBaseLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDemoTestMode m_demoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAssetCbas*> m_cbasList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetKakeaiSetting* KakeaiSettingData;
    
    ALevelScriptActorDemoTest();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIEvent_Refresh(int32 pageNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIEvent_OpenWindow(int32 pageNo, int32 Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIEvent_CloseWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIEvent_ChangeItemSetting(int32 pageNo, int32 Position, int32 select);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIEvent_ChangeCursorPosition(int32 Position);
    
    UFUNCTION(BlueprintCallable)
    void TestFunc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTagString(int32 pageNo, int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemSettingNum(int32 pageNo, int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemSetting(int32 pageNo, int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemNum(int32 pageNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetContentsString(int32 pageNo, int32 ItemIndex, int32 select) const;
    
};

