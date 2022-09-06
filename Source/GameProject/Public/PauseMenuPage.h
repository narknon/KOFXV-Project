#pragma once
#include "CoreMinimal.h"
#include "PauseMenuType.h"
#include "PauseMenuPage.generated.h"

class UPauseMenuItemWidget;

USTRUCT(BlueprintType)
struct FPauseMenuPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PauseMenuType> MenuItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPauseMenuItemWidget*> ItemArray;
    
    GAMEPROJECT_API FPauseMenuPage();
};

