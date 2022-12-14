#pragma once
#include "CoreMinimal.h"
#include "EItemEventType.generated.h"

UENUM(BlueprintType)
enum class EItemEventType : uint8 {
    None,
    Language,
    Vibration,
    TouchpadFunction,
    AnalogStickType,
    PoseSetting,
    PrivacyPolicy,
    SystemDefault,
    CpuLv,
    Round,
    Time,
    Entry,
    GameDefault,
    MasterVol,
    BGMVol,
    SEVol,
    CharaVoiceVol,
    AnnounceVol,
    SpeakerMode,
    SpeakerVol,
    AnnounceStyle,
    SoundDefault,
    HUDAdjust,
    HighContrast,
    HDRAdjust,
    Brightness,
    DisplayMode,
    Resolution,
    DisplayDefault,
    Bloom,
    Depth,
    Antialiasing,
    Shadow,
    Godley,
    Mipmap,
    Anisotropic,
    LensFlare,
    RayTracing,
    VideoDecorder,
    LowQualityStageFlag,
    GraphicsDefault,
    HUD_Top,
    HUD_Central,
    HUD_Bottom,
    HUD_Brightness,
    HUD_Default,
    HDR,
};

