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

// 0x6C (0x6C - 0x0)
// Function DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag.DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C.BPAdjustHarvestingDamage
struct UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C_BPAdjustHarvestingDamage_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2238[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        ReturnValue;                                       // 0x40(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_223B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       OutgoingDamage;                                    // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_223C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_OutgoingDamage_ImplicitCast;    // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


