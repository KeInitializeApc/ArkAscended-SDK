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

// 0x8 (0x8 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck
struct UIsFlying_DK_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
struct UIsFlying_DK_C_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
struct UIsFlying_DK_C_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9B (0x9B - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
struct UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13A5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x8(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	enum class EBTNodeResult                     K2Node_Event_NodeResult;                           // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13A7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_13A9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_13AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue;          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_1;        // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_2;        // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_3;        // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_4;        // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_5;        // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class AActor*                                K2Node_Event_OwnerActor_2;                         // 0x70(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_2;   // 0x78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_13B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x88(0x8)(ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_HasBuffPreventingFlight_ReturnValue;      // 0x99(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9A(0x1)(Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)
};

}
}


