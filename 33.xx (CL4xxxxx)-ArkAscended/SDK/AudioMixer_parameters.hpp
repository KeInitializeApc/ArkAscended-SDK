#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
public:
	float                                        VolumeMultiplier;                                  // 0x0(0x4)(Edit, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
public:
	class USoundSubmixBase*                      Submix;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SendLevel;                                         // 0x8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_481[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.SetOutputToBusOnly
struct USynthComponent_SetOutputToBusOnly_Params
{
public:
	bool                                         bInOutputToBusOnly;                                // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
struct USynthComponent_SetLowPassFilterFrequency_Params
{
public:
	float                                        InLowPassFilterFrequency;                          // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
struct USynthComponent_SetLowPassFilterEnabled_Params
{
public:
	bool                                         InLowPassFilterEnabled;                            // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioMixer.SynthComponent.FadeOut
struct USynthComponent_FadeOut_Params
{
public:
	float                                        FadeOutDuration;                                   // 0x0(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_483[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.FadeIn
struct USynthComponent_FadeIn_Params
{
public:
	float                                        FadeInDuration;                                    // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StartTime;                                         // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_485[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function AudioMixer.SynthComponent.AdjustVolume
struct USynthComponent_AdjustVolume_Params
{
public:
	float                                        AdjustVolumeDuration;                              // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AdjustVolumeLevel;                                 // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_487[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
{
public:
	float                                        InMegabytesToFree;                                 // 0x0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
struct UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                NewDeviceId;                                       // 0x8(0x10)(ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnCompletedDeviceSwap;                             // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EAudioRecordingExportType         ExportType;                                        // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x10(0x10)(ConstParm, Net, OutParm)
	class FString                                Path;                                              // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	class USoundSubmix*                          SubmixToRecord;                                    // 0x30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundWave*                            ExistingSoundWaveToOverwrite;                      // 0x38(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundWave*                            ReturnValue;                                       // 0x40(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
struct UAudioMixerBlueprintLibrary_StopAudioBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SubmixToStopAnalyzing;                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ExpectedDuration;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundSubmix*                          SubmixToRecord;                                    // 0x10(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
struct UAudioMixerBlueprintLibrary_StartAudioBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFFTSize                          FFTSize;                                           // 0x10(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EFFTPeakInterpolationMethod       InterpolationMethod;                               // 0x11(0x1)(Edit, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFFTWindowType                    WindowType;                                        // 0x12(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AF[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HopSize;                                           // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	TArray<class USoundEffectSubmixPreset*>      SubmixEffectPresetChain;                           // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FadeTimeSec;                                       // 0x20(0x4)(ConstParm, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B1[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        EntryIndex;                                        // 0x10(0x4)(Edit, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bBypassed;                                         // 0x14(0x1)(Edit, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B2[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SubmixToPause;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
struct UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          InSoundSubmix;                                     // 0x8(0x8)(Edit, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x18(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          InSoundSubmix;                                     // 0x8(0x8)(Edit, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x18(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4BC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4BF[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        EntryIndex;                                        // 0x10(0x4)(Edit, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x8(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
public:
	class USoundWave*                            SoundWave;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, GlobalConfig)
	FDelegateProperty_                           OnLoadCompletion;                                  // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
{
public:
	class USoundCue*                             SoundCue;                                          // 0x0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SubmixToPause;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params
{
public:
	enum class EAudioSpectrumBandPresetType      InBandPresetType;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InNumBands;                                        // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InAttackTimeMsec;                                  // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        InReleaseTimeMsec;                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params
{
public:
	int32                                        InNumSemitones;                                    // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMusicalNoteName                  InStartingMusicalNote;                             // 0x4(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4CD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InStartingOctave;                                  // 0x8(0x4)(Edit, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InAttackTimeMsec;                                  // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        InReleaseTimeMsec;                                 // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4CE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params
{
public:
	int32                                        InNumBands;                                        // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InMinimumFrequency;                                // 0x4(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InMaximumFrequency;                                // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        InAttackTimeMsec;                                  // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        InReleaseTimeMsec;                                 // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4D1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
struct UAudioMixerBlueprintLibrary_IsAudioBusActive_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4D3[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<float>                                Frequencies;                                       // 0x8(0x10)(EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                Phases;                                            // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4DB[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<float>                                Frequencies;                                       // 0x8(0x10)(EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                Magnitudes;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
struct UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           OnObtainCurrentDeviceEvent;                        // 0x8(0x10)(Edit, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
struct UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           OnObtainDevicesEvent;                              // 0x8(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
struct UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params
{
public:
	struct FAudioOutputDeviceInfo                Info;                                              // 0x0(0x48)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	float                                        FadeTimeSec;                                       // 0x10(0x4)(ConstParm, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4E6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4EA[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSourceEffectChainEntry               Entry;                                             // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x8(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
public:
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
{
public:
	class USoundSubmix*                          Submix;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
struct USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
public:
	struct FSubmixEffectSubmixEQSettings         InSettings;                                        // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
public:
	class UReverbEffect*                         InReverbEffect;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DryLevel;                                          // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
public:
	struct FSubmixEffectReverbSettings           InSettings;                                        // 0x0(0x40)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
struct UQuartzClockHandle_UnsubscribeFromTimeDivision_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EQuartzCommandQuantization        InQuantizationBoundary;                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_505[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
struct UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
struct UQuartzClockHandle_SubscribeToQuantizationEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EQuartzCommandQuantization        InQuantizationBoundary;                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_50A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnQuantizationEvent;                               // 0xC(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_50B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
struct UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           OnQuantizationEvent;                               // 0x8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.StopClock
struct UQuartzClockHandle_StopClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CancelPendingEvents;                               // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_50F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzClockHandle.StartOtherClock
struct UQuartzClockHandle_StartOtherClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  OtherClockName;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           InDelegate;                                        // 0x30(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.StartClock
struct UQuartzClockHandle_StartClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
struct UQuartzClockHandle_SetTicksPerSecond_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TicksPerSecond;                                    // 0x40(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_518[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
struct UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ThirtySecondsNotesPerMinute;                       // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_51C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
struct UQuartzClockHandle_SetSecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SecondsPerTick;                                    // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_520[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
struct UQuartzClockHandle_SetMillisecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MillisecondsPerTick;                               // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_526[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
struct UQuartzClockHandle_SetBeatsPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BeatsPerMinute;                                    // 0x40(0x4)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_529[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResumeClock
struct UQuartzClockHandle_ResumeClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
struct UQuartzClockHandle_ResetTransportQuantized_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           InDelegate;                                        // 0x28(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResetTransport
struct UQuartzClockHandle_ResetTransport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           InDelegate;                                        // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.PauseClock
struct UQuartzClockHandle_PauseClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.IsClockRunning
struct UQuartzClockHandle_IsClockRunning_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_531[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
struct UQuartzClockHandle_GetTicksPerSecond_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_533[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
struct UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_536[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
struct UQuartzClockHandle_GetSecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_539[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
struct UQuartzClockHandle_GetMillisecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_53A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
struct UQuartzClockHandle_GetEstimatedRunTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_53E[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
struct UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EQuartzCommandQuantization        QuantizationType;                                  // 0x8(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_53F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Multiplier;                                        // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_540[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
struct UQuartzClockHandle_GetCurrentTimestamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzTransportTimeStamp             ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
struct UQuartzClockHandle_GetBeatsPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_545[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
struct UQuartzSubsystem_IsQuartzEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.IsClockRunning
struct UQuartzSubsystem_IsClockRunning_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ClockName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_54D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
struct UQuartzSubsystem_GetRoundTripMinLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_54E[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
struct UQuartzSubsystem_GetRoundTripMaxLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_54F[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
struct UQuartzSubsystem_GetRoundTripAverageLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_552[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetHandleForClock
struct UQuartzSubsystem_GetHandleForClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ClockName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_557[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
struct UQuartzSubsystem_GetEstimatedClockRunTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  InClockName;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
struct UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ClockName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EQuartzCommandQuantization        QuantizationType;                                  // 0x10(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Multiplier;                                        // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_560[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
struct UQuartzSubsystem_GetCurrentClockTimestamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  InClockName;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FQuartzTransportTimeStamp             ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.DoesClockExist
struct UQuartzSubsystem_DoesClockExist_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ClockName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_565[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DeleteClockByName
struct UQuartzSubsystem_DeleteClockByName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ClockName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
struct UQuartzSubsystem_DeleteClockByHandle_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UQuartzClockHandle*                    InClockHandle;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzSubsystem.CreateNewClock
struct UQuartzSubsystem_CreateNewClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ClockName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuartzClockSettings                  InSettings;                                        // 0x10(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideSettingsIfClockExists;                    // 0x30(0x1)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseAudioEngineClockManager;                       // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_567[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UQuartzClockHandle*                    ReturnValue;                                       // 0x38(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


