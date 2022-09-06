#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "ECharacterID.h"
#include "CharacterPanelData.h"
#include "ETeamMemberPosition.h"
#include "ECharcterItemFlag.h"
#include "EOperationalIteamState.h"
#include "CharacterSelect_Item.generated.h"

class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelect_Item : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* sel_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* sel_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* sel_both_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* sel_both_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* seled_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* seled_R;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPanelData ItemData;
    
public:
    UCharacterSelect_Item();
    UFUNCTION(BlueprintCallable)
    void UpdateItemFlag(ECharcterItemFlag _ItemFlags);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemCharacter(ECharacterID _CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamPositionFalg(ETeamMemberPosition Position);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemState(int32 PlayerID, EOperationalIteamState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetItemData(ECharacterID _CharacterID, ECharcterItemFlag _ItemFlags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetButtonTexture(TSoftObjectPtr<UImage> Image, TSoftObjectPtr<UTexture2D> Texture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOperationalIteamState GetItemState(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharcterItemFlag GetItemFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetItemCharacterID() const;
    
};

