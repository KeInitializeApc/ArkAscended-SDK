#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioDeviceChangedRole : uint8
{
	Invalid                        = 0,
	Console                        = 1,
	Multimedia                     = 2,
	Communications                 = 3,
	Count                          = 4,
	EAudioDeviceChangedRole_MAX    = 5,
};

enum class EAudioDeviceChangedState : uint8
{
	Invalid                        = 0,
	Active                         = 1,
	Disabled                       = 2,
	NotPresent                     = 3,
	Unplugged                      = 4,
	Count                          = 5,
	EAudioDeviceChangedState_MAX   = 6,
};

enum class EAudioMixerChannelType : uint8
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	FrontCenter                    = 2,
	LowFrequency                   = 3,
	BackLeft                       = 4,
	BackRight                      = 5,
	FrontLeftOfCenter              = 6,
	FrontRightOfCenter             = 7,
	BackCenter                     = 8,
	SideLeft                       = 9,
	SideRight                      = 10,
	TopCenter                      = 11,
	TopFrontLeft                   = 12,
	TopFrontCenter                 = 13,
	TopFrontRight                  = 14,
	TopBackLeft                    = 15,
	TopBackCenter                  = 16,
	TopBackRight                   = 17,
	Unknown                        = 18,
	ChannelTypeCount               = 19,
	DefaultChannel                 = 0,
	EAudioMixerChannelType_MAX     = 20,
};

enum class EAudioMixerStreamDataFormatType : uint8
{
	Unknown                        = 0,
	Float                          = 1,
	Int16                          = 2,
	Unsupported                    = 3,
	EAudioMixerStreamDataFormatType_MAX = 4,
};

enum class ESwapAudioOutputDeviceResultState : uint8
{
	Failure                        = 0,
	Success                        = 1,
	None                           = 2,
	ESwapAudioOutputDeviceResultState_MAX = 3,
};

enum class EMusicalNoteName : uint8
{
	C                              = 0,
	Db                             = 1,
	D                              = 2,
	Eb                             = 3,
	E                              = 4,
	F                              = 5,
	Gb                             = 6,
	G                              = 7,
	Ab                             = 8,
	A                              = 9,
	Bb                             = 10,
	B                              = 11,
	EMusicalNoteName_MAX           = 12,
};

enum class ESubmixEffectDynamicsProcessorType : uint8
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	UpwardsCompressor              = 4,
	Count                          = 5,
	ESubmixEffectDynamicsProcessorType_MAX = 6,
};

enum class ESubmixEffectDynamicsPeakMode : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class ESubmixEffectDynamicsChannelLinkMode : uint8
{
	Disabled                       = 0,
	Average                        = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

enum class ESubmixEffectDynamicsKeySource : uint8
{
	Default                        = 0,
	AudioBus                       = 1,
	Submix                         = 2,
	Count                          = 3,
	ESubmixEffectDynamicsKeySource_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct AudioMixer.AudioOutputDeviceInfo
struct FAudioOutputDeviceInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FString                                DeviceID;                                          // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor)
	int32                                        NumChannels;                                       // 0x20(0x4)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	int32                                        SampleRate;                                        // 0x24(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	enum class EAudioMixerStreamDataFormatType   Format;                                            // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_4DA[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EAudioMixerChannelType>    OutputChannelArray;                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsSystemDefault : 1;                              // Mask: 0x1, PropSize: 0x10x40(0x1)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bIsCurrentDevice : 1;                              // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4DB[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AudioMixer.SwapAudioOutputResult
struct FSwapAudioOutputResult
{
public:
	class FString                                CurrentDeviceId;                                   // 0x0(0x10)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                RequestedDeviceId;                                 // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ESwapAudioOutputDeviceResultState Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_4E0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        BitPad_2F : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_4E2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Cutoff;                                            // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GainDb;                                            // 0x8(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings
{
public:
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode;                                          // 0x2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4E5[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        InputGainDb;                                       // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ThresholdDb;                                       // 0x8(0x4)(Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Ratio;                                             // 0xC(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        KneeBandwidthDb;                                   // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LookAheadMsec;                                     // 0x14(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackTimeMsec;                                    // 0x18(0x4)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReleaseTimeMsec;                                   // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixEffectDynamicsKeySource    KeySource;                                         // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4E7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UAudioBus*                             ExternalAudioBus;                                  // 0x28(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USoundSubmix*                          ExternalSubmix;                                    // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bChannelLinked : 1;                                // Mask: 0x1, PropSize: 0x10x38(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAnalogMode : 1;                                   // Mask: 0x2, PropSize: 0x10x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bBypass : 1;                                       // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bKeyAudition : 1;                                  // Mask: 0x8, PropSize: 0x10x38(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_30 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_4EA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        KeyGainDb;                                         // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x40(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                                      // 0x44(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                                       // 0x50(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4EC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Bandwidth;                                         // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        GainDb;                                            // 0x8(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_4EF[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings
{
public:
	TArray<struct FSubmixEffectEQBand>           EQBands;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings
{
public:
	bool                                         bBypassEarlyReflections;                           // 0x0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4F1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ReflectionsDelay;                                  // 0x4(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GainHF;                                            // 0x8(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReflectionsGain;                                   // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBypassLateReflections;                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4F2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LateDelay;                                         // 0x14(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecayTime;                                         // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Density;                                           // 0x1C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Diffusion;                                         // 0x20(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AirAbsorptionGainHF;                               // 0x24(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecayHFRatio;                                      // 0x28(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LateGain;                                          // 0x2C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Gain;                                              // 0x30(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetLevel;                                          // 0x34(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryLevel;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBypass;                                           // 0x3C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4F5[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

}


