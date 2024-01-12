#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationBudgetBlueprintLibrary* GetDefaultObj();

	struct FAnimationBudgetAllocatorParameters SetAnimationBudgetParameters();
	class UObject* EnableAnimationBudget(bool* bEnabled);
};

// 0x28 (0x1430 - 0x1408)
// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	uint8                                        Pad_1CC[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAutoRegisterWithBudgetAllocator : 1;              // Mask: 0x1, PropSize: 0x10x1428(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAutoCalculateSignificance : 1;                    // Mask: 0x2, PropSize: 0x10x1428(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bShouldUseActorRenderedFlag : 1;                   // Mask: 0x4, PropSize: 0x10x1428(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USkeletalMeshComponentBudgeted* GetDefaultObj();

	void SetAutoRegisterWithBudgetAllocator(bool* bInAutoRegisterWithBudgetAllocator);
};

}


