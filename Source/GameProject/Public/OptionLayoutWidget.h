#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "OptionLayoutWidget.generated.h"

class UOptionWidget;
class UDocumentWidget;
class UButtonConfigLayoutWidget;
class UEntry_PlayerList;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDocumentWidget* WBP_00_02_Document;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_PlayerList* WBP_10_PlayerList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionWidget* WBP_10_Menu_system;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionWidget* WBP_10_Menu_game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionWidget* WBP_10_Menu_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionWidget* WBP_10_Menu_display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionWidget* WBP_10_Menu_graphic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButtonConfigLayoutWidget* WBP_99_ButtonConfig_Layout;
    
public:
    UOptionLayoutWidget();
protected:
    UFUNCTION(BlueprintCallable)
    UEntry_PlayerList* GetPlayerList();
    
    UFUNCTION(BlueprintCallable)
    UDocumentWidget* GetDocument();
    
};

