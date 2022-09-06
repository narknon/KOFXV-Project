#pragma once
#include "CoreMinimal.h"
#include "RankResultCharaWidget.h"
#include "PartyResultCharaWidget.generated.h"

class UDataTable;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPartyResultCharaWidget : public URankResultCharaWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* turn_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextureDataTable;
    
public:
    UPartyResultCharaWidget();
};

