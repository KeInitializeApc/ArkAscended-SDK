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

// 0x38 (0x38 - 0x0)
// Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.UpdateLayeringValues
struct UTPV_Hatchet_MaleAnimBP_C_UpdateLayeringValues_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x3(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x5(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x7(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_53D1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_Layering_L_Hand_ImplicitCast;   // 0x10(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       K2Node_VariableSet_Layering_Spine_ImplicitCast;    // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       K2Node_VariableSet_Layering_L_Arm_ImplicitCast;    // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       K2Node_VariableSet_Layering_R_Hand_ImplicitCast;   // 0x28(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       K2Node_VariableSet_Layering_R_Arm_ImplicitCast;    // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.BlueprintUpdateAnimation
struct UTPV_Hatchet_MaleAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.ExecuteUbergraph_TPV_Hatchet_MaleAnimBP
struct UTPV_Hatchet_MaleAnimBP_C_ExecuteUbergraph_TPV_Hatchet_MaleAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_UseAltAimOffsetAnim_ReturnValue;          // 0x5(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53D2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTimeX;                           // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

}
}


