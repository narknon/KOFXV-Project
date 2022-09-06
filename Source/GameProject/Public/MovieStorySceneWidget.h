#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "MovieStorySceneWidget.generated.h"

class UMovieWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMovieStorySceneWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieWidget* WBP_Movie;
    
    UMovieStorySceneWidget();
};

