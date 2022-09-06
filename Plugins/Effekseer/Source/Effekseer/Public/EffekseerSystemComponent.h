#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EffekseerHandle.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EfkEmitterSpawnParameterHolder.h"
#include "EffekseerSystemComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInstanceConstant;
class UEffekseerEffectMaterialParameterHolder;
class UTexture2D;
class UEffekseerEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EFFEKSEER_API UEffekseerSystemComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> OpaqueMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> TranslucentMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> AdditiveMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> SubtractiveMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> ModulateMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Lighting_Opaque_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Lighting_Translucent_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Lighting_Additive_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> DistortionTranslucentMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> DistortionAdditiveMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Opaque_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Translucent_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Additive_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Subtractive_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Modulate_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> DistortionTranslucent_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> DistortionAdditive_DD_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> Footprint_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* OpaqueMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* TranslucentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* AdditiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* SubtractiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* ModulateMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Lighting_Opaque_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Lighting_Translucent_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Lighting_Additive_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* DistortionTranslucentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* DistortionAdditiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Opaque_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Translucent_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Additive_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Subtractive_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Modulate_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* DistortionTranslucent_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* DistortionAdditive_DD_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UEffekseerEffectMaterialParameterHolder*, UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> OpaqueDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> TranslucentDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> AdditiveDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> SubtractiveDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> ModulateDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> LightingDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> DistortionTranslucentDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, UMaterialInstanceDynamic*> DistortionAdditiveDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetworkPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoStartNetworkAutomatically;
    
    UEffekseerSystemComponent();
    UFUNCTION(BlueprintCallable)
    void StopRoot(FEffekseerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void StopNetwork();
    
    UFUNCTION(BlueprintCallable)
    void Stop(FEffekseerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void StartNetwork();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(FEffekseerHandle Handle, const FVector& _targetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleVisibility(FEffekseerHandle Handle, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleSpawnFlag(FEffekseerHandle Handle, bool spawnFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectSpeed(FEffekseerHandle Handle, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectScaling(FEffekseerHandle Handle, FVector Scaling);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectRotation(FEffekseerHandle Handle, FQuat Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectPosition(FEffekseerHandle Handle, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectDynamicInput(FEffekseerHandle Handle, int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectAllColor(FEffekseerHandle Handle, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetAllParticleVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    FEffekseerHandle Play(UEffekseerEffect* Effect, FEfkEmitterSpawnParameterHolder emitterSpawnParamHolder, bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Exists(FEffekseerHandle Handle) const;
    
};

