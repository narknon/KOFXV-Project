#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "OnlineProfile_ListItem.generated.h"

class UTextBlock;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfile_ListItem : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_Bold_C_88;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AvatarTexture;
    
public:
    UOnlineProfile_ListItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingTitleText(const FText& TitleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingRankPoint(int32 RankmatchPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingOnlineID(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingDate(FDateTime Timestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingAvatarTex(UTexture2D* AvatarTex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FollowIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheakOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheakOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimSel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNml();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimFollow();
    
};

