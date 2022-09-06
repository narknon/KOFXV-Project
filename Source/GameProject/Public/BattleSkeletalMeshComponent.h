#pragma once
#include "CoreMinimal.h"
#include "ESecondaryType.h"
#include "Components/SkeletalMeshComponent.h"
#include "EModelType.h"
#include "BattleSkeletalMeshComponent.generated.h"

class UAssetOtra;
class UAssetOmir;
class UAssetOsec;
class UAssetOcam;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API UBattleSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EModelType m_ModelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOtra* m_pAssetOtraCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOtra* m_pAssetOtraBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOtra* m_pAssetOtraFaceUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOtra* m_pAssetOtraFaceLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOtra* m_pAssetOtraPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOmir* m_pAssetOmir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOcam* m_pAssetOcam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetOsec* m_pAssetOsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESecondaryType secondaryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWindEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool calcCharaBone;
    
    UBattleSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void StopCloth(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SkipClothSimulation(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetSecondary();
    
    UFUNCTION(BlueprintCallable)
    void ResetCloth();
    
    UFUNCTION(BlueprintCallable)
    void ResetChain();
    
    UFUNCTION(BlueprintCallable)
    void DisableCloth(bool Value);
    
};

