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
// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params
{
public:
	bool                                         bSkipFirstPlayer;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
struct UGameMapsSettings_GetGameMapsSettings_Params
{
public:
	class UGameMapsSettings*                     ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}

