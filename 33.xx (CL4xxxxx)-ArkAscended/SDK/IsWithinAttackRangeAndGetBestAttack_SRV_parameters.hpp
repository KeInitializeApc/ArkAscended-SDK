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
	class APrimalDinoAIController*               OwnerController;                                   // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_340C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x1C(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_340D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_GetAttackRotationRangeDegrees_ReturnValue; // 0x30(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_GetAttackInterval_ReturnValue;            // 0x34(0x4)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3412[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3414[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3416[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetAttackInterval_ReturnValue;            // 0x24(0x4)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged; // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue; // 0x29(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        CallFunc_GetCurrentAttackIndex_ReturnValue;        // 0x2A(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2B(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
};

}
}


