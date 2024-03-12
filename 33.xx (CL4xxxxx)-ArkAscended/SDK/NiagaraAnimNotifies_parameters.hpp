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

// 0x10 (0x10 - 0x0)
// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
struct UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Params
{
public:
	class UMeshComponent*                        MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UFXSystemComponent*                    ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
struct UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Params
{
public:
	class UMeshComponent*                        MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_26A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
struct UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params
{
public:
	class UFXSystemComponent*                    ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


