#pragma once
#include "CoreMinimal.h"
#include "UserSettingWidgetBase.h"
#include "UserSettingWidgetRankMatch.generated.h"

class UThumbnailItemWidget;
class URegisterTeamWidget;
class UTextBlock;
class UUserSettingWidgetRankInfo;
class UUserSettingWidgetScore;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserSettingWidgetRankMatch : public UUserSettingWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_user_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_titles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_team_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URegisterTeamWidget* WBP_95_00_register_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UThumbnailItemWidget* team_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UThumbnailItemWidget* team_music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetRankInfo* RankInfoWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScore* ScoreWindow;
    
public:
    UUserSettingWidgetRankMatch();
};

