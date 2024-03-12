#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECoreOnlineDummy : uint8
{
	Dummy                          = 0,
	ECoreOnlineDummy_MAX           = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreOnline.JoinabilitySettings
struct FJoinabilitySettings
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bPublicSearchable;                                 // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowInvites;                                     // 0x9(0x1)(Edit, ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresence;                                  // 0xA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	int32                                        MaxPartySize;                                      // 0x10(0x4)(BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreOnline.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_2728[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


