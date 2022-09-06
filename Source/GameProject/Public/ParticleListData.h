#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "ParticleListData.generated.h"

class ABattleParticleSystemActor;

USTRUCT(BlueprintType)
struct FParticleListData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleParticleSystemActor> BP_Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleParticleSystemActor> BP_Asset_NonBleedingOverrider;
    
    GAMEPROJECT_API FParticleListData();
};

