#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomFixedPhraseWindow.generated.h"

class UScrollBox;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomFixedPhraseWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* FixedPhraseTitleVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* FixedPhraseTextScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* WatchingGamesTextScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* GreetingTextScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* QuestionTextScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* ReplyTextScrollBox;
    
    URoomFixedPhraseWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCloseWindow();
    
};

