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
	int32                                        Audio;                                             // 0x0(0x4)(Edit, EditFixedSize, DisableEditOnTemplate)
	int32                                        Caption;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        MetaData;                                          // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
	int32                                        Script;                                            // 0xC(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Subtitle;                                          // 0x10(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        Text;                                              // 0x14(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	int32                                        Video;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MediaUtils.MediaPlayerOptions
struct FMediaPlayerOptions
{
public:
	struct FMediaPlayerTrackOptions              Tracks;                                            // 0x0(0x1C)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2824[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             SeekTime;                                          // 0x20(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen;                                        // 0x28(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EMediaPlayerOptionBooleanOverride Loop;                                              // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_2826[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


