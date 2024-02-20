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
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimGraph
struct UFPVClimbPickWeaponAnimBP_Base_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.BlueprintUpdateAnimation
struct UFPVClimbPickWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xBC (0xBC - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base
struct UFPVClimbPickWeaponAnimBP_Base_C_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2F29[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterWeapon_Climb*                  K2Node_DynamicCast_AsShooter_Weapon_Climb;         // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x19(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F2B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2F2C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x38(0x18)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x50(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x60(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F2D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x70(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0x80(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTimeX;                           // 0x8C(0x4)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x90(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2F2F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Abs_ReturnValue;                          // 0x98(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xA0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F33[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast; // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
};

}
}


