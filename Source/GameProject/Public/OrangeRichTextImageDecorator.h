#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "OrangeRichTextImageDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEPROJECT_API UOrangeRichTextImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Margin;
    
public:
    UOrangeRichTextImageDecorator();
};

