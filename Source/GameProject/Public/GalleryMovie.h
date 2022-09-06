#pragma once
#include "CoreMinimal.h"
#include "EGalleryMovieID.h"
#include "Engine/DataTable.h"
#include "GalleryMovie.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGalleryMovie : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGalleryMovieID MovieID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ThumbnailImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnlockConditionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BonusMovieSEEventName;
    
    GAMEPROJECT_API FGalleryMovie();
};

