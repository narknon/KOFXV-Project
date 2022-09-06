#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EMovieID.h"
#include "MovieDataTable.h"
#include "MovieWidget.generated.h"

class UTelopBaseWidget;
class UTelopWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMovieWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTelopWidget* WBP_Telop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTelopBaseWidget* WBP_94_telop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoMovieStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEndCreditImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieID PlayMovieID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UMovieWidget();
    UFUNCTION(BlueprintCallable)
    void SetMovieData(const FMovieDataTable& InData);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMAndSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MovieStop();
    
    UFUNCTION(BlueprintCallable)
    void MovieStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void MovieStartAfterAnimation(const FName& Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MovieStart();
    
    UFUNCTION(BlueprintCallable)
    void MovieSeeked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MovieSeek(float SeekSeconds);
    
    UFUNCTION(BlueprintCallable)
    void MovieEndCleanUp();
    
    UFUNCTION(BlueprintCallable)
    void ClearAnimation();
    
};

