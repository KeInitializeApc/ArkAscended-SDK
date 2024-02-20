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
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
struct UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
struct UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_321D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3221[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x38(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x58(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetBlockingShieldOffsets_ReturnValue;     // 0x70(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0x71(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0x72(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3224[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapLance_C*                          K2Node_DynamicCast_AsWeap_Lance;                   // 0x78(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3226[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x88(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x90(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x98(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;       // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
};

}
}


