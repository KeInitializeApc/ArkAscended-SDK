#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9AB (0xCF3 - 0x348)
// AnimBlueprintGeneratedClass Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C
class UHuman_Male_TPV_GroundConform_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2B66[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x388(0xC8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x450(0x108)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x558(0x28)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x580(0x28)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x5A8(0x470)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xA18(0xC8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAE0(0x1A0)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xC80(0x20)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xCA0(0x20)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         __CustomProperty_bHasDynamicBase__B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         __CustomProperty_IsFalling_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	bool                                         __CustomProperty_Interpolate_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	bool                                         __CustomProperty_Swimming_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC3(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         __CustomProperty_GroundConform_IsBeingDragged_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC4(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, SubobjectReference)
	uint8                                        Pad_2B6A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               __CustomProperty_MeshScale_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	bool                                         Ground_Conform_Is_Being_Dragged;                   // 0xCE0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         Swimming;                                          // 0xCE1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         Ground_Conform_Interpolate;                        // 0xCE2(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         Ground_Conform_Is_Falling;                         // 0xCE3(0x1)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, SubobjectReference)
	uint8                                        Pad_2B6B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         AnimInstance;                                      // 0xCE8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         WasBeingDragged;                                   // 0xCF0(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, SubobjectReference)
	bool                                         HasHitTheGroundOnce;                               // 0xCF1(0x1)(ConstParm, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         bHasDynamicBase_;                                  // 0xCF2(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_GroundConform_AnimBP_C* GetDefaultObj();

	struct FPoseLink AnimGraph(const struct FPoseLink& AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A();
	float BlueprintUpdateAnimation();
	void BlueprintInitializeAnimation();
	double ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(float K2Node_Event_DeltaTimeX, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float K2Node_StructMemberSet_Alpha_ImplicitCast);
};

}


