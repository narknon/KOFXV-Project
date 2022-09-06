#pragma once
#include "CoreMinimal.h"
#include "EFixedPhraseWatchingGames.h"
#include "EFixedPhraseItem.h"
#include "EFixedPhraseReply.h"
#include "EFixedPhraseQuestion.h"
#include "EFixedPhraseGreeting.h"
#include "FixedPhraseWindowInfo.generated.h"

USTRUCT(BlueprintType)
struct FFixedPhraseWindowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseItem SelectedItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseItem PreSelectedItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseWatchingGames SelectedWatchingGamesIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseWatchingGames PreSelectedWatchingGamesIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseGreeting SelectedGreetingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseGreeting PreSelectedGreetingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseQuestion SelectedQuestionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseQuestion PreSelectedQuestionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseReply SelectedReplyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFixedPhraseReply PreSelectedReplyIndex;
    
    GAMEPROJECT_API FFixedPhraseWindowInfo();
};

