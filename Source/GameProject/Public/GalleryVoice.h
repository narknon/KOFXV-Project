#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterID.h"
#include "GalleryVoice.generated.h"

USTRUCT(BlueprintType)
struct FGalleryVoice : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bankname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventName;
    
    GAMEPROJECT_API FGalleryVoice();
};

