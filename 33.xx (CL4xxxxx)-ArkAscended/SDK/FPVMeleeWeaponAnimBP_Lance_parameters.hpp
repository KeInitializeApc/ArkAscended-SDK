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
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
struct UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
struct UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x10(0x8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4145[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4146[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x40(0x18)(Edit, Net, OutParm, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_GetBlockingShieldOffsets_ReturnValue;     // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0x71(0x1)(EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0x72(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_4147[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapLance_C*                          K2Node_DynamicCast_AsWeap_Lance;                   // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4148[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x90(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x98(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xA0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0xA8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0xB0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;       // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
};

}
}


