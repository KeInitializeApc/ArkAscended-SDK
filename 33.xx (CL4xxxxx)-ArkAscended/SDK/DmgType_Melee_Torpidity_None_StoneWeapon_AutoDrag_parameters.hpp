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
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A2D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x40(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A2E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       OutgoingDamage;                                    // 0x48(0x8)(Edit, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4A2F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_OutgoingDamage_ImplicitCast;    // 0x60(0x8)(Edit, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x68(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

}
}


