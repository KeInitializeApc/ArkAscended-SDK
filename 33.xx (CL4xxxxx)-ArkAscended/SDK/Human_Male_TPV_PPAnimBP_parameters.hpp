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
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
struct UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsFirstPersonCamera_ReturnValue;          // 0x19(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsRider_ReturnValue;                      // 0x1A(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue;                 // 0x1B(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39D8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetBasedOnDinoAsActor_ReturnValue;        // 0x20(0x8)(ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_39D9[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_39DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBaseHumanAnimBP_C*                    K2Node_DynamicCast_AsBase_Human_Anim_BP;           // 0x40(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39DD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x50(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x58(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x60(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_39DE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x68(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

}
}


