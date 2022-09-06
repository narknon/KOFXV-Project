#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "CommentList.generated.h"

class UHaveGuideWindowOnline;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCommentList : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* CommentListScrollBox;
    
    UCommentList();
};

