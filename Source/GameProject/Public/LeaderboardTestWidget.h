#pragma once
#include "CoreMinimal.h"
#include "DebugBaseWidget.h"
#include "LeaderboardTestWidget.generated.h"

class URankmatchPointRanking;
class UClonePointRanking;
class UCloneWinCountRanking;
class UStoryScoreRanking;
class UBossChallengeRanking;
class URankingRecord;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API ULeaderboardTestWidget : public UDebugBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URankmatchPointRanking* RankmatchPointRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClonePointRanking* ClonePointRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCloneWinCountRanking* CloneTotalWinCountRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStoryScoreRanking* StoryScoreRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBossChallengeRanking* BossChallengeRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URankingRecord*> LatestRecord;
    
public:
    ULeaderboardTestWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListUpdate(const TArray<FString>& ListStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetailDraw(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorDraw(int32 NewCursor);
    
};

