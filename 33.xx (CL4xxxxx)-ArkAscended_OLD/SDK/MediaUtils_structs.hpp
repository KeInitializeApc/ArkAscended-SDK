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
	int32                                        Audio;                                             // 0x0(0x4)(Edit, Net, EditFixedSize, ReturnParm)
	int32                                        Caption;                                           // 0x4(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MetaData;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	int32                                        Script;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Subtitle;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Text;                                              // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	int32                                        Video;                                             // 0x18(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MediaUtils.MediaPlayerOptions
struct FMediaPlayerOptions
{
public:
	struct FMediaPlayerTrackOptions              Tracks;                                            // 0x0(0x1C)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2669[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             SeekTime;                                          // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen;                                        // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMediaPlayerOptionBooleanOverride Loop;                                              // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_266A[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}

