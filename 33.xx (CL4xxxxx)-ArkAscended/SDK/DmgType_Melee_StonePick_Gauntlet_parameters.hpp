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

// 0x100 (0x100 - 0x0)
// Function DmgType_Melee_StonePick_Gauntlet.DmgType_Melee_StonePick_Gauntlet_C.BPAdjustDamage
struct UDmgType_Melee_StonePick_Gauntlet_C_BPAdjustDamage_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_330F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(Edit, ConstParm, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x40(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3310[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x60(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3311[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x70(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x88(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xA0(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xA4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xA8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3312[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xB0(0x18)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0xC8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xE0(0x18)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0xF8(0x8)(Edit, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

}
}


