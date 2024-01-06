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

// 0x8 (0x8 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
struct IAudioLinkBlueprintInterface_SetLinkSound_Params
{
public:
	class USoundBase*                            NewSound;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
struct IAudioLinkBlueprintInterface_PlayLink_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
struct IAudioLinkBlueprintInterface_IsLinkPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


