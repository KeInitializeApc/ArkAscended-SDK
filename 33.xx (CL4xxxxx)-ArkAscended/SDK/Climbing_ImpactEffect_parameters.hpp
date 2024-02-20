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

// 0xC (0xC - 0x0)
// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DeactivateImpactEffect
struct AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x54 (0x54 - 0x0)
// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ExecuteUbergraph_Climbing_ImpactEffect
struct AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2916[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2917[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Climb*                  K2Node_DynamicCast_AsShooter_Weapon_Climb;         // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x41(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2919[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x50(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

}
}


