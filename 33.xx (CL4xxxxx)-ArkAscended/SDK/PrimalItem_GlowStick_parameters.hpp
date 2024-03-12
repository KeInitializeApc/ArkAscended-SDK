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

// 0x28 (0x28 - 0x0)
// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPPostInitializeItem
struct UPrimalItem_GlowStick_C_BPPostInitializeItem_Params
{
public:
	class UWorld*                                OptionalInitWorld;                                 // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0x8(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_14B7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x18(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x20(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x2D (0x2D - 0x0)
// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
struct UPrimalItem_GlowStick_C_BPItemBroken_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_14BF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapGlowStick_Base_C*                 K2Node_DynamicCast_AsWeap_Glow_Stick_Base;         // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_14C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapGlowStick_Base_C*                 K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1;       // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_14C2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x24(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0x28(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2C(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


