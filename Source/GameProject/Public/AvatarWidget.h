#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "EAvatarWidgetType.h"
#include "AvatarWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAvatarWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* avatar_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* avatar_none;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* avatar_platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_edge;
    
    UAvatarWidget();
    UFUNCTION(BlueprintCallable)
    void TryGetAvatarByPlayer(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetAvatarByOrderID(EPlayerID PlayerID, int32 OrderID);
    
    UFUNCTION(BlueprintCallable)
    void TryGetAvatarByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable)
    void SwitchAvatarType(const EAvatarWidgetType& InAvatarWidgetType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlatformAvatarImage(UTexture2D* Texture);
    
};

