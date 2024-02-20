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
	class UWorld*                                OptionalInitWorld;                                 // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0xC(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x10(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x18(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x2D (0x2D - 0x0)
// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
struct UPrimalItem_GlowStick_C_BPItemBroken_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29B8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapGlowStick_Base_C*                 K2Node_DynamicCast_AsWeap_Glow_Stick_Base;         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29BA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapGlowStick_Base_C*                 K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1;       // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_29BB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x24(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
};

}
}


