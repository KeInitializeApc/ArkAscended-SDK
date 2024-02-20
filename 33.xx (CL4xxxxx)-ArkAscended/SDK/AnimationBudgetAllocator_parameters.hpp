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

// 0x60 (0x60 - 0x0)
// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
struct UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FAnimationBudgetAllocatorParameters   InParameters;                                      // 0x8(0x58)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
struct UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bEnabled;                                          // 0x8(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_19C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
struct USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params
{
public:
	bool                                         bInAutoRegisterWithBudgetAllocator;                // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
};

}
}


