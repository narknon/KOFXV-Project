#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "AgreementWidget.generated.h"

class UBaseWidget;
class UAgreementMenuWidget;
class UDocumentWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAgreementWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_00_02_DocumentBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAgreementMenuWidget* WBP_00_02_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDocumentWidget* WBP_00_02_Document;
    
public:
    UAgreementWidget();
};

