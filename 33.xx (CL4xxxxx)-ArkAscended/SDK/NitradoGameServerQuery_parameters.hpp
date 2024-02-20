#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.Start
struct UGameServerQuerySubsystem_Start_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
struct UGameServerQuerySubsystem_SetVersion_Params
{
public:
	class FString                                Version;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
struct UGameServerQuerySubsystem_SetUniqueID_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
struct UGameServerQuerySubsystem_SetTicksPerSecond_Params
{
public:
	int32                                        TickCount;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName
struct UGameServerQuerySubsystem_SetServerName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady
struct UGameServerQuerySubsystem_SetReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(ConstParm, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
struct UGameServerQuerySubsystem_SetPlayerMax_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
struct UGameServerQuerySubsystem_SetPlayerCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
struct UGameServerQuerySubsystem_SetPasswordProtected_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName
struct UGameServerQuerySubsystem_SetMapName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag
struct UGameServerQuerySubsystem_RemoveTag_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
struct UGameServerQuerySubsystem_RemovePlatform_Params
{
public:
	enum class EPlatform                         Platform;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
struct UGameServerQuerySubsystem_AddTag_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
struct UGameServerQuerySubsystem_AddPlatform_Params
{
public:
	enum class EPlatform                         Platform;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
struct UGameServerQuerySubsystem_AddModInfo_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                Version;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
struct UGameServerQuerySubsystem_AddListenPortInfo_Params
{
public:
	enum class EPortType                         Type;                                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_FFC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Port;                                              // 0x4(0x4)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                Address;                                           // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


