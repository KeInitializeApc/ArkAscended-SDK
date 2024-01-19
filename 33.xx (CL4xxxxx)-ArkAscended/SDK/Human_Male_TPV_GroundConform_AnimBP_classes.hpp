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
	uint8                                        Pad_23FD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Edit, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x388(0xC8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x450(0x108)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x558(0x28)(ConstParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x580(0x28)(ConstParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x5A8(0x470)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xA18(0xC8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAE0(0x1A0)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xC80(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xCA0(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_bHasDynamicBase__B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_IsFalling_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC1(0x1)(EditFixedSize, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_Interpolate_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC2(0x1)(Net, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_Swimming_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_GroundConform_IsBeingDragged_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC4(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_23FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               __CustomProperty_MeshScale_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
	bool                                         Ground_Conform_Is_Being_Dragged;                   // 0xCE0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         Swimming;                                          // 0xCE1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Ground_Conform_Interpolate;                        // 0xCE2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         Ground_Conform_Is_Falling;                         // 0xCE3(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_23FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         AnimInstance;                                      // 0xCE8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst)
	bool                                         WasBeingDragged;                                   // 0xCF0(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         HasHitTheGroundOnce;                               // 0xCF1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         bHasDynamicBase_;                                  // 0xCF2(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_GroundConform_AnimBP_C* GetDefaultObj();

	struct FPoseLink AnimGraph(const struct FPoseLink& InPose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	float ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_UpdateGroundConformingVariables_IsBeingDragged, bool* CallFunc_UpdateGroundConformingVariables_IsSwimming, bool CallFunc_UpdateGroundConformingVariables_IsFalling, bool* CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once, bool CallFunc_UpdateGroundConformingVariables_Interpolate, bool CallFunc_Greater_DoubleDouble_ReturnValue, float* K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


