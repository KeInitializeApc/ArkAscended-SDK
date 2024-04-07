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

// 0x4 (0x4 - 0x0)
// Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_SCUBA_Flippers_C_BPOnInstigatorMovementModeChangedNotify_Params
{
public:
	enum class EMovementMode                     PrevMovementMode;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        PreviousCustomMode;                                // 0x1(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class EMovementMode                     NewMovementMode;                                   // 0x2(0x1)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        NewCustomMode;                                     // 0x3(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.ExecuteUbergraph_Buff_SCUBA_Flippers
struct ABuff_SCUBA_Flippers_C_ExecuteUbergraph_Buff_SCUBA_Flippers_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_52CF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	enum class EMovementMode                     K2Node_Event_PrevMovementMode;                     // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        K2Node_Event_PreviousCustomMode;                   // 0x12(0x1)(Edit, ConstParm, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMovementMode                     K2Node_Event_NewMovementMode;                      // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        K2Node_Event_NewCustomMode;                        // 0x14(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x15(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x16(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x17(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


