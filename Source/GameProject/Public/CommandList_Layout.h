#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_MultiActionScene.h"
#include "CommandList_Layout.generated.h"

class USelectorWidget;
class UCommandList;
class UBaseWidget;
class UPauseMenuWindowWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCommandList_Layout : public UOperationalWidget_MultiActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommandList* WBP_99_CommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectorWidget* WBP_95_01_selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommandList* WBP_99_CommandList_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_CommandList_guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuWindowWidget* PauseMenu;
    
public:
    UCommandList_Layout();
};

