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
// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
struct UAttacking_DR_C_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
struct UAttacking_DR_C_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
struct UAttacking_DR_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
struct UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_286A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor_2;                         // 0x8(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x10(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	enum class EBTNodeResult                     K2Node_Event_NodeResult;                           // 0x18(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_286D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x20(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


