#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x699 (0x9E1 - 0x348)
// AnimBlueprintGeneratedClass Female_Hair_Mohawk_Long_AnimBP.Female_Hair_Mohawk_Long_AnimBP_C
class UFemale_Hair_Mohawk_Long_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_489E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x388(0x1D8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x560(0x470)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	enum class EMovementMode                     K2Node_PropertyAccess_1;                           // 0x9D0(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_PropertyAccess;                             // 0x9D1(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         __CustomProperty_Swimming_F43D30A34710B25C169DE3912EF56183; // 0x9D2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_489F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      As_Primal_Character;                               // 0x9D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         Swimming;                                          // 0x9E0(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UFemale_Hair_Mohawk_Long_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	bool BlueprintThreadSafeUpdateAnimation();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Female_Hair_Mohawk_Long_AnimBP(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


