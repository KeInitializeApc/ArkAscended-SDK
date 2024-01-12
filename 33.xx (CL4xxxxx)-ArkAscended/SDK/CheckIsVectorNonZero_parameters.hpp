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
// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ReceiveExecute
struct UCheckIsVectorNonZero_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero
struct UCheckIsVectorNonZero_C_ExecuteUbergraph_CheckIsVectorNonZero_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1988[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x8(0x18)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x30(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

}
}


