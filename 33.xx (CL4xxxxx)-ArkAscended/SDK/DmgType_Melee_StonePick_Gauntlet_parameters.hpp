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
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B01[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        ReturnValue;                                       // 0x40(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1B02[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B03[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x70(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x88(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xA0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xA4(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xA8(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B05[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xB0(0x18)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0xC8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xE0(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0xF8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


