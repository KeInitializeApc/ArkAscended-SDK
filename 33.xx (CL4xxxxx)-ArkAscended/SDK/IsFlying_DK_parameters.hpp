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
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
struct UIsFlying_DK_C_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
struct UIsFlying_DK_C_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9B (0x9B - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
struct UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2CED[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x8(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EBTNodeResult                     K2Node_Event_NodeResult;                           // 0x18(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2CEE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CF0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2CF1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue;          // 0x40(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_1;        // 0x48(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, Interp)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_2;        // 0x50(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_3;        // 0x58(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, NonTransactional)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_4;        // 0x60(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_5;        // 0x68(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class AActor*                                K2Node_Event_OwnerActor_2;                         // 0x70(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_2;   // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2CF4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x88(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_HasBuffPreventingFlight_ReturnValue;      // 0x99(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


