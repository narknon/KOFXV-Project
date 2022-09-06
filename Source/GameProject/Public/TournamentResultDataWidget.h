#pragma once
#include "CoreMinimal.h"
#include "OfflineResultDataWidget.h"
#include "TournamentResultDataWidget.generated.h"

class UResultOnlineIDWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTournamentResultDataWidget : public UOfflineResultDataWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultOnlineIDWidget* WBP_94_panel_id;
    
public:
    UTournamentResultDataWidget();
};

