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
// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveActivation
struct URotateToTarget_SRV_C_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveDeactivation
struct URotateToTarget_SRV_C_ReceiveDeactivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ExecuteUbergraph_RotateToTarget_SRV
struct URotateToTarget_SRV_C_ExecuteUbergraph_RotateToTarget_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3184[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3185[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_3187[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_GetAttackRotationRate_ReturnValue;        // 0x38(0x18)(BlueprintReadOnly, Net, Parm, GlobalConfig, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x54(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x58(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x5C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_318A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


