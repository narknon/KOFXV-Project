#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OGLModelProxyActor.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "EStageID.h"
#include "EPlayerID.h"
#include "ECostumeType.h"
#include "EActorTag.h"
#include "BattleActor.generated.h"

class UAssetCbas;
class UAssetCdmg;
class UAssetCrct;
class UAssetCact;
class UAssetCeff;
class UAssetCatk;
class UAssetCcmd;
class UAssetCseq;
class UAssetComb;
class UAssetCmtr;
class UDataTable;
class UAssetSlst;
class UDataAssetActionExpansion;
class UCelLightData;
class UBattleCharaMovementComponent;

UCLASS(Blueprintable)
class GAMEPROJECT_API ABattleActor : public AOGLModelProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID m_characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCbas* m_pAssetCbas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCact* m_pAssetCact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCrct* m_pAssetCrct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCatk* m_pAssetCatk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCdmg* m_pAssetCdmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCcmd* m_pAssetCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCseq* m_pAssetCseq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetComb* m_pAssetComb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCmtr* m_pAssetCmtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCeff* m_pAssetCeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetCcmd* m_pCommonAssetCcmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pAssetLeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetSlst* m_pAssetSlst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetSlst* m_pCommonAssetSlst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCelLightData> m_pCelLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetActionExpansion* m_pActionExpansion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBattleCharaMovementComponent* CharaMovement;
    
    ABattleActor();
    UFUNCTION(BlueprintCallable)
    void SetActorVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    bool IsMirror();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageID GetStageID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetPlayerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECostumeType GetCostumeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharaColorID GetColorID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActorTag GetActorTag() const;
    
};

