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
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Edit, Net, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintThreadSafeUpdateAnimation
struct UHuman_Male_TPV_PPAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x8(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xC(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
struct UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_467A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_467B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTimeX;                           // 0x1C(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsFirstPersonCamera_ReturnValue;          // 0x20(0x1)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_467C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_467E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FMax_ReturnValue;                         // 0x38(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsRider_ReturnValue;                      // 0x40(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue;                 // 0x41(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_467F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetBasedOnDinoAsActor_ReturnValue;        // 0x48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x50(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x52(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_4680[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x58(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4682[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBaseHumanAnimBP_C*                    K2Node_DynamicCast_AsBase_Human_Anim_BP;           // 0x68(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_4683[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x78(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x80(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


