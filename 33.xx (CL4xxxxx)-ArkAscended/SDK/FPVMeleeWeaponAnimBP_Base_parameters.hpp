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
// Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.AnimGraph
struct UFPVMeleeWeaponAnimBP_Base_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Edit, Net, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.BlueprintUpdateAnimation
struct UFPVMeleeWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base
struct UFPVMeleeWeaponAnimBP_Base_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_52EF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x10(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_52F0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_52F1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x38(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x50(0x18)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetBlockingShieldOffsets_ReturnValue;     // 0x68(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0x69(0x1)(BlueprintVisible, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0x6A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52F2[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x70(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_52F3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0xA0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xA8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0xB8(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52F4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xC8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_52F5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTimeX;                           // 0xCC(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0xD0(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0xD8(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0xE0(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0xE8(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xF0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0xF8(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0x100(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;       // 0x108(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
};

}
}


