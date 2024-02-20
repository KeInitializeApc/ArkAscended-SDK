#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOscillatorWaveform : uint8
{
	SineWave                       = 0,
	PerlinNoise                    = 1,
	EOscillatorWaveform_MAX        = 2,
};

enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,
};

enum class ECameraAnimationPlaySpace : uint8
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimationPlaySpace_MAX  = 3,
};

enum class ECameraAnimationEasingType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Quadratic                      = 2,
	Cubic                          = 3,
	Quartic                        = 4,
	Quintic                        = 5,
	Exponential                    = 6,
	Circular                       = 7,
	ECameraAnimationEasingType_MAX = 8,
};

enum class EInitialWaveOscillatorOffsetType : uint8
{
	Random                         = 0,
	Zero                           = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct GameplayCameras.FOscillator
struct FFOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EInitialOscillatorOffset          InitialOffset;                                     // 0x8(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EOscillatorWaveform               Waveform;                                          // 0x9(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13E0[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GameplayCameras.ROscillator
struct FROscillator
{
public:
	struct FFOscillator                          Pitch;                                             // 0x0(0xC)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config)
	struct FFOscillator                          Yaw;                                               // 0xC(0xC)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	struct FFOscillator                          Roll;                                              // 0x18(0xC)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GameplayCameras.VOscillator
struct FVOscillator
{
public:
	struct FFOscillator                          X;                                                 // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FFOscillator                          Y;                                                 // 0xC(0xC)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FFOscillator                          Z;                                                 // 0x18(0xC)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayCameras.CameraAnimationParams
struct FCameraAnimationParams
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        Scale;                                             // 0x4(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class ECameraAnimationEasingType        EaseInType;                                        // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13E5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EaseInDuration;                                    // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECameraAnimationEasingType        EaseOutType;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13E6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EaseOutDuration;                                   // 0x14(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLoop;                                             // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRandomStartTime;                                  // 0x19(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13E7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DurationOverride;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECameraAnimationPlaySpace         PlaySpace;                                         // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13E9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserPlaySpaceRot;                                  // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayCameras.CameraAnimationHandle
struct FCameraAnimationHandle
{
public:
	uint8                                        Pad_13EA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
struct FActiveCameraAnimationInfo
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FCameraAnimationParams                Params;                                            // 0x8(0x40)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FCameraAnimationHandle                Handle;                                            // 0x48(0x4)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_13ED[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x50(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x58(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EaseInCurrentTime;                                 // 0x60(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EaseOutCurrentTime;                                // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsEasingIn;                                       // 0x68(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsEasingOut;                                      // 0x69(0x1)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13EE[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayCameras.PerlinNoiseShaker
struct FPerlinNoiseShaker
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayCameras.WaveOscillator
struct FWaveOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EInitialWaveOscillatorOffsetType  InitialOffsetType;                                 // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13F1[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

}


