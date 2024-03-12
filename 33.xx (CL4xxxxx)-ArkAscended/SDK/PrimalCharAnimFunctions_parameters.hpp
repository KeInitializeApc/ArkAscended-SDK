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
	class APrimalCharacter*                      PrimalCharacter;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, GlobalConfig)
	bool                                         Has_Hit_The_Ground_Once;                           // 0x8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33E9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsBeingDragged;                                    // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         IsSwimming;                                        // 0x19(0x1)(ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         IsFalling;                                         // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         Should_Mark_Has_Hit_Ground_once;                   // 0x1B(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Interpolate;                                       // 0x1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bInterpolate;                                      // 0x1D(0x1)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Ret_Should_Mark_Has_Hit_Ground_once;               // 0x1E(0x1)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFallingMovement;                                  // 0x1F(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bSwimmingMovement;                                 // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Is_Being_Dragged;                                  // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Is_Being_Dragged_And_Underwater;                   // 0x22(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33EF[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_33F0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetImmersionDepth_ReturnValue;            // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x42(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x43(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x44(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x45(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x46(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x47(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x48(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x50(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_33F1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x61(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x62(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x63(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x64(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x65(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x66(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x67(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x68(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x69(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_33F2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x78(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x80(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


