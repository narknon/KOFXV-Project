#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "TeamMemberWidget.generated.h"

class UTeamMemberItemWidget;
class UDataTable;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTeamMemberWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* TeamMemberItemBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamMemberItemWidget* WBP_90_player_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamMemberItemWidget* WBP_90_player_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamMemberItemWidget* WBP_90_player_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameImageTable;
    
public:
    UTeamMemberWidget();
};

