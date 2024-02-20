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

// 0x1C0 (0x1C0 - 0x0)
// Function DmgType_Melee_Lance.DmgType_Melee_Lance_C.BPAdjustDamage
struct UDmgType_Melee_Lance_C_BPAdjustDamage_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_146E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        ReturnValue;                                       // 0x40(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1470[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x51(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1472[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapLance_C*                          K2Node_DynamicCast_AsWeap_Lance;                   // 0x58(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_1473[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1476[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x98(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xA0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_1477[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xA8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0xC0(0xF0)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x1B0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_147A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x1B8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


