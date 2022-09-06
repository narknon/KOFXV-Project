#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ENetworkTitleID.h"
#include "UserTitleWidget.generated.h"

class UTexture2D;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserTitleWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* user_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENetworkTitleID, TSoftObjectPtr<UTexture2D>> UserTitleImageArray;
    
public:
    UUserTitleWidget();
};

