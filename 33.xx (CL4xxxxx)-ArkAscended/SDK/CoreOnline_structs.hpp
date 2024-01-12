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
	class FName                                  SessionName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, Transient, GlobalConfig, SubobjectReference)
	bool                                         bPublicSearchable;                                 // 0x8(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowInvites;                                     // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresence;                                  // 0xA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        MaxPartySize;                                      // 0x10(0x4)(BlueprintVisible, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreOnline.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_304D[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


