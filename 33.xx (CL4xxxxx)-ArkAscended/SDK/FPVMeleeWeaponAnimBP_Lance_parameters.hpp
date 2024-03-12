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

// 0x10 (0x10 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimGraph
struct UFPVMeleeWeaponAnimBP_Lance_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Edit, Net, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
struct UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
struct UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x10(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4598[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_459A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x38(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x40(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x58(0x18)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetBlockingShieldOffsets_ReturnValue;     // 0x70(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0x71(0x1)(BlueprintVisible, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0x72(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_459C[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapLance_C*                          K2Node_DynamicCast_AsWeap_Lance;                   // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_459E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x88(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x90(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x98(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xA0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0xA8(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0xB0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;       // 0xB8(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
};

}
}


