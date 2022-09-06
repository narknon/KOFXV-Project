/********************************************************************************
The content of the files in this repository include portions of the AUDIOKINETIC
Wwise Technology released in source code form as part of the SDK package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
********************************************************************************/

#pragma once

#include "AkInclude.h"
#include "InitializationSettings/AkInitializationSettings.h"
#include "AkHololensInitializationSettings.generated.h"

UENUM(Meta = (Bitmask))
enum class EAkHololensAudioAPI : uint32
{
	Wasapi,
	XAudio2,
	DirectSound,
};


USTRUCT()
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Ak Initialization Settings", meta = (Bitmask, BitmaskEnum = EAkHololensAudioAPI, ToolTip = "Main audio API to use. Leave set to \"Default\" for the default audio sink. This value will be ignored if a valid \"AudioDeviceShareset\" is provided."))
	uint32 AudioAPI = (1 << (uint32)EAkHololensAudioAPI::Wasapi) | (1 << (uint32)EAkHololensAudioAPI::XAudio2) | (1 << (uint32)EAkHololensAudioAPI::DirectSound);

	UPROPERTY(EditAnywhere, Category = "Ak Initialization Settings", meta = (ToolTip = "Only used when \"AudioAPI\" is \"DirectSound\", sounds will be muted if set to false when the game loses the focus."))
	bool GlobalFocus = true;

	UPROPERTY(EditAnywhere, Category = "Ak Initialization Settings")
	bool UseHeadMountedDisplayAudioDevice = false;

	void FillInitializationStructure(FAkInitializationStructure& InitializationStructure) const;
};


UCLASS(config = Game, defaultconfig)
class AKAUDIO_API UAkHololensInitializationSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void FillInitializationStructure(FAkInitializationStructure& InitializationStructure) const;

	UPROPERTY(Config, EditAnywhere, Category = "Initialization")
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(Config, EditAnywhere, Category = "Initialization")
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(Config, EditAnywhere, Category = "Initialization", AdvancedDisplay)
	FAkHololensAdvancedInitializationSettings AdvancedSettings;

	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue)
	{
		AdvancedSettings.EnableMultiCoreRendering = NewValue;
	}
};
