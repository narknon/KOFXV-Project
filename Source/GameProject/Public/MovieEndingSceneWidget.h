#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "MovieEndingSceneWidget.generated.h"

class UMovieWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMovieEndingSceneWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieWidget* WBP_Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCreditBGMStartSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditBGMStartSecondFromLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fBlackSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipSeek;
    
    UMovieEndingSceneWidget();
};

