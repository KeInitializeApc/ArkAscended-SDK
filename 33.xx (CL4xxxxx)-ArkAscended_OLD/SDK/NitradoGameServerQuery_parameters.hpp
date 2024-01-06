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
	bool                                         ReturnValue;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
struct UGameServerQuerySubsystem_SetVersion_Params
{
public:
	class FString                                Version;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
struct UGameServerQuerySubsystem_SetUniqueID_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
struct UGameServerQuerySubsystem_SetTicksPerSecond_Params
{
public:
	int32                                        TickCount;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
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
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
struct UGameServerQuerySubsystem_SetPlayerMax_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
struct UGameServerQuerySubsystem_SetPlayerCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
struct UGameServerQuerySubsystem_SetPasswordProtected_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
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
	class FString                                Tag;                                               // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
struct UGameServerQuerySubsystem_RemovePlatform_Params
{
public:
	enum class EPlatform                         Platform;                                          // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
struct UGameServerQuerySubsystem_AddTag_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
struct UGameServerQuerySubsystem_AddPlatform_Params
{
public:
	enum class EPlatform                         Platform;                                          // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
};

// 0x20 (0x20 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
struct UGameServerQuerySubsystem_AddModInfo_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                Version;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
struct UGameServerQuerySubsystem_AddListenPortInfo_Params
{
public:
	enum class EPortType                         Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1242[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Port;                                              // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	class FString                                Address;                                           // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}
}


