#pragma once
#include "CoreMinimal.h"
#include "Slate/WidgetTransform.h"
#include "PrimaryUserWidget.h"
#include "OrangeWidget_Interface.h"
#include "Blueprint/UserWidget.h"
#include "ScaleOffsetData.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "BaseWidget.generated.h"

class UTexture2D;
class UWidgetAnimation;
class UUMGSequencePlayer;
class UDataTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBaseWidget : public UPrimaryUserWidget, public IOrangeWidget_Interface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidgetAnimation*> AnimationsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScaleOffsetData> ScaleOffsetEffectTargets;
    
public:
    UBaseWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHUDScaleValueOffset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFlip();
    
    UFUNCTION(BlueprintCallable)
    bool StopAnimationByName(FName AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeFlip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetSide(int32 WidgetSide_Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScaleOffsetData SetScaleOffsetMaxTransform(UPARAM(Ref) FScaleOffsetData& TargetStruct, FWidgetTransform MaxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScaleOffsetData SetScaleOffsetMaxPivot(UPARAM(Ref) FScaleOffsetData& TargetStruct, FVector2D MaxPivot);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoteEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    UUMGSequencePlayer* PlayAnimationByNameReturnPlayer(FName AnimationName, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationByName(FName AnimationName, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    float PauseAnimationByName(FName AnimationName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ECharacterID, UTexture2D*> MakeCharacterTextureMapFromDataTable(UDataTable* DataTable);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAnimationPlayingByName(FName AnimationName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeScaleOffsetData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWidgetSide() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDScaleValueValue();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetAnimationCurrentTimeByName(FName AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetAnimation* GetAnimationByName(FName AnimationName) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* FindCharacterTextureFromDataTable(UDataTable* DataTable, ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> FindCharacterSoftTextureFromDataTable(UDataTable* DataTable, ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* FindCharacterCostumeTextureFromDataTable(UDataTable* DataTable, ECharacterID charaID, ECostumeType cosType);
    
    
    // Fix for true pure virtual functions not being implemented
};

