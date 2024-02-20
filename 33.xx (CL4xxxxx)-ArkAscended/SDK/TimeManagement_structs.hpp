#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFrameNumberDisplayFormats : uint8
{
	NonDropFrameTimecode           = 0,
	DropFrameTimecode              = 1,
	Seconds                        = 2,
	Frames                         = 3,
	MAX_Count                      = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

enum class ETimedDataInputEvaluationType : uint8
{
	None                           = 0,
	Timecode                       = 1,
	PlatformTime                   = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

enum class ETimedDataInputState : uint8
{
	Connected                      = 0,
	Unresponsive                   = 1,
	Disconnected                   = 2,
	ETimedDataInputState_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct TimeManagement.TimedDataChannelSampleTime
struct FTimedDataChannelSampleTime
{
public:
	uint8                                        Pad_5F3[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TimeManagement.TimedDataInputEvaluationData
struct FTimedDataInputEvaluationData
{
public:
	float                                        DistanceToNewestSampleSeconds;                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DistanceToOldestSampleSeconds;                     // 0x4(0x4)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


