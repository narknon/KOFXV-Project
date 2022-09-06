#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "RankMatchRank.generated.h"

class UWidgetSwitcher;
class URankStar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankMatchRank : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankStar* star_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankStar* star_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankStar* star_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankStar* star_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankStar* star_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URankStar*> starAry;
    
    URankMatchRank();
private:
    UFUNCTION(BlueprintCallable)
    void TryUpdateStar(EPlayerID PlayerID);
    
};

