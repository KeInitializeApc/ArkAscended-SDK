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

// 0x20 (0x20 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.AnimGraph
struct UHuman_Male_TPV_GroundConform_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP
struct UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                CallFunc_GetOwningComponent_ReturnValue;           // 0x8(0x8)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x10(0x18)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x30(0x4)(Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x34(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x35(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2043[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x38(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x40(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasDynamicBase_ReturnValue;               // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsBeingDragged; // 0x4A(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsSwimming; // 0x4B(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsFalling; // 0x4C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once; // 0x4D(0x1)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_Interpolate; // 0x4E(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_204A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x54(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_204C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_204E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

}
}


