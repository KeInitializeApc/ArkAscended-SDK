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
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	bool                                         bPublicSearchable;                                 // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowInvites;                                     // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresence;                                  // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxPartySize;                                      // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreOnline.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_239F[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


