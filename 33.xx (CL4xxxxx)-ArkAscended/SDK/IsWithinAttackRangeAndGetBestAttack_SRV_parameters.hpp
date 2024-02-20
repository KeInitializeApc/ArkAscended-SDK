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

// 0x38 (0x38 - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.UpdateBlackboardKeys
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params
{
public:
	class APrimalDinoAIController*               OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_292D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x1C(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_292E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetAttackRotationRangeDegrees_ReturnValue; // 0x30(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetAttackInterval_ReturnValue;            // 0x34(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2938[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2939[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_293C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetAttackInterval_ReturnValue;            // 0x24(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged; // 0x28(0x1)(Edit, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue; // 0x29(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        CallFunc_GetCurrentAttackIndex_ReturnValue;        // 0x2A(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2B(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


