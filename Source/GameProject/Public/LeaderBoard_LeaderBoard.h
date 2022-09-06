#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "LeaderBoard_LeaderBoard.generated.h"

class URankingRecord;
class UDataTable;
class UImage;
class UScrollBox;
class URankmatchPointRanking;
class UStoryScoreRanking;
class UBossChallengeRanking;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API ULeaderBoard_LeaderBoard : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iCursorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URankingRecord*> LatestRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A_C_96;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DtTeamChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URankingRecord* MyRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URankmatchPointRanking* RankmatchPointRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStoryScoreRanking* StoryScoreRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBossChallengeRanking* BossChallengeRanking;
    
    ULeaderBoard_LeaderBoard();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLayout(const FText& String, const bool bfriend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PageDraw(int32 NowPage, int32 NowPageMax);
    
    UFUNCTION(BlueprintCallable)
    bool IsMyData(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    bool IsEGS();
    
    UFUNCTION(BlueprintCallable)
    FText GetTimeStr(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTeamCharaTexture(URankingRecord* Record, int32 charaNo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStarNumStr_Rank(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    FText GetStarNumStr_Champ(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRankSwitcherType(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    FText GetRankPointText(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    FText GetRankName(URankingRecord* Record);
    
    UFUNCTION(BlueprintCallable)
    FText GetNetworkTitle(int32 TitleID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorDraw(int32 NewCursor);
    
};

