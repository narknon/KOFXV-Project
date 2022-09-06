#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OrangeWidget_Interface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class UOrangeWidget_Interface : public UInterface {
    GENERATED_BODY()
};

class IOrangeWidget_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTextureAry(const TArray<UTexture2D*>& Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTextAry(const TArray<FText>& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float InitializeAnimTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeAnim_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float DeinitializeAnimTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeinitializeAnim_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deinitialize_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ConfirmAnimTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConfirmAnim_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CancelAnimTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelAnim_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ArtistAnimOutTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ArtistAnimOut_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ArtistAnimInTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ArtistAnimIn_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AnimOutTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimOut_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AnimInTime_Widget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimIn_Widget();
    
};

