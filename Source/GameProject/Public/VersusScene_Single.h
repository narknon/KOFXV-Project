#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "VersusScene_Single.generated.h"

class UVersusScene_emblem;
class UVersusScene_Panel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UVersusScene_Single : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVersusScene_Panel* WBP_93_panel_single_p1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVersusScene_Panel* WBP_93_panel_single_p2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVersusScene_emblem* WBP_93_emblem_p1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVersusScene_emblem* WBP_93_emblem_p2;
    
    UVersusScene_Single();
};

