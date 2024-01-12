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
	int32                                        NumChannels;                                       // 0x20(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	int32                                        SampleRate;                                        // 0x24(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	enum class EAudioMixerStreamDataFormatType   Format;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_56B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EAudioMixerChannelType>    OutputChannelArray;                                // 0x30(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsSystemDefault : 1;                              // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsCurrentDevice : 1;                              // Mask: 0x2, PropSize: 0x10x40(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_56D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AudioMixer.SwapAudioOutputResult
struct FSwapAudioOutputResult
{
public:
	class FString                                CurrentDeviceId;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FString                                RequestedDeviceId;                                 // 0x10(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESwapAudioOutputDeviceResultState Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_56F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        BitPad_4E : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_571[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Cutoff;                                            // 0x4(0x4)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GainDb;                                            // 0x8(0x4)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings
{
public:
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESubmixEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode;                                          // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_572[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        InputGainDb;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ThresholdDb;                                       // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Ratio;                                             // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        KneeBandwidthDb;                                   // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LookAheadMsec;                                     // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AttackTimeMsec;                                    // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReleaseTimeMsec;                                   // 0x1C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESubmixEffectDynamicsKeySource    KeySource;                                         // 0x20(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_574[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UAudioBus*                             ExternalAudioBus;                                  // 0x28(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class USoundSubmix*                          ExternalSubmix;                                    // 0x30(0x8)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bChannelLinked : 1;                                // Mask: 0x1, PropSize: 0x10x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAnalogMode : 1;                                   // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bBypass : 1;                                       // Mask: 0x4, PropSize: 0x10x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bKeyAudition : 1;                                  // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_4F : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_575[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        KeyGainDb;                                         // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                                      // 0x44(0xC)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                                       // 0x50(0xC)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_576[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Bandwidth;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GainDb;                                            // 0x8(0x4)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_577[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings
{
public:
	TArray<struct FSubmixEffectEQBand>           EQBands;                                           // 0x0(0x10)(BlueprintVisible, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings
{
public:
	bool                                         bBypassEarlyReflections;                           // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_578[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ReflectionsDelay;                                  // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GainHF;                                            // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReflectionsGain;                                   // 0xC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBypassLateReflections;                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_57A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LateDelay;                                         // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DecayTime;                                         // 0x18(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Density;                                           // 0x1C(0x4)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Diffusion;                                         // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AirAbsorptionGainHF;                               // 0x24(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DecayHFRatio;                                      // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LateGain;                                          // 0x2C(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Gain;                                              // 0x30(0x4)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DryLevel;                                          // 0x38(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBypass;                                           // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_57B[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

}


