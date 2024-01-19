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
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bPublicSearchable;                                 // 0x8(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowInvites;                                     // 0x9(0x1)(Edit, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresence;                                  // 0xA(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0xC(0x4)(Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        MaxPartySize;                                      // 0x10(0x4)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreOnline.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_33AC[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


