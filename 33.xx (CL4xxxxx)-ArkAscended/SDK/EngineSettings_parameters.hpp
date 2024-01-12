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
	bool                                         bSkipFirstPlayer;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
struct UGameMapsSettings_GetGameMapsSettings_Params
{
public:
	class UGameMapsSettings*                     ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


