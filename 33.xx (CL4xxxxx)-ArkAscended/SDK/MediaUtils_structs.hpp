#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMediaPlayerOptionBooleanOverride : uint8
{
	UseMediaPlayerSetting          = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct MediaUtils.MediaPlayerTrackOptions
struct FMediaPlayerTrackOptions
{
public:
	int32                                        Audio;                                             // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm)
	int32                                        Caption;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        MetaData;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        Script;                                            // 0xC(0x4)(Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Subtitle;                                          // 0x10(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Text;                                              // 0x14(0x4)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	int32                                        Video;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MediaUtils.MediaPlayerOptions
struct FMediaPlayerOptions
{
public:
	struct FMediaPlayerTrackOptions              Tracks;                                            // 0x0(0x1C)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_245B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             SeekTime;                                          // 0x20(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen;                                        // 0x28(0x1)(Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMediaPlayerOptionBooleanOverride Loop;                                              // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_245C[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


