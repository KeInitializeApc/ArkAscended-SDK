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
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP
struct UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	class USkeletalMeshComponent*                CallFunc_GetOwningComponent_ReturnValue;           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x10(0x18)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x30(0x4)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x34(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x35(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B5C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasDynamicBase_ReturnValue;               // 0x49(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsBeingDragged; // 0x4A(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsSwimming; // 0x4B(0x1)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsFalling; // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once; // 0x4D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_UpdateGroundConformingVariables_Interpolate; // 0x4E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_2B61[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x50(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x54(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B62[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
	uint8                                        Pad_2B63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


