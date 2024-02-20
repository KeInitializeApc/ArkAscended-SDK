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

// 0x84 (0x84 - 0x0)
// Function PrimalCharAnimFunctions.PrimalCharAnimFunctions_C.UpdateGroundConformingVariables
struct UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params
{
public:
	class APrimalCharacter*                      PrimalCharacter;                                   // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         Has_Hit_The_Ground_Once;                           // 0x8(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AC5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         IsBeingDragged;                                    // 0x18(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         IsSwimming;                                        // 0x19(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         IsFalling;                                         // 0x1A(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         Should_Mark_Has_Hit_Ground_once;                   // 0x1B(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         Interpolate;                                       // 0x1C(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         bInterpolate;                                      // 0x1D(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         Ret_Should_Mark_Has_Hit_Ground_once;               // 0x1E(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bFallingMovement;                                  // 0x1F(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bSwimmingMovement;                                 // 0x20(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         Is_Being_Dragged;                                  // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         Is_Being_Dragged_And_Underwater;                   // 0x22(0x1)(ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AC9[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetImmersionDepth_ReturnValue;            // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x28(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2ACB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x38(0x8)(Edit, Net, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x41(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x42(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x43(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x44(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x45(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2ACF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AD0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x60(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x61(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x62(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x63(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x64(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x65(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x66(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x67(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x68(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x69(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2AD5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x78(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x80(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

}
}


