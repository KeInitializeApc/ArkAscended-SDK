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
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.AnimGraph
struct UHuman_Male_TPV_PPAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
struct UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsFirstPersonCamera_ReturnValue;          // 0x19(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsRider_ReturnValue;                      // 0x1A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue;                 // 0x1B(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F95[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetBasedOnDinoAsActor_ReturnValue;        // 0x20(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F96[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F98[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBaseHumanAnimBP_C*                    K2Node_DynamicCast_AsBase_Human_Anim_BP;           // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x49(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F99[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x50(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x58(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x60(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F9A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


