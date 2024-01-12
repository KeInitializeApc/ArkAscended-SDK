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
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.BlueprintUpdateAnimation
struct UFPVClimbPickWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xBC (0xBC - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base
struct UFPVClimbPickWeaponAnimBP_Base_C_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3154[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
	class AShooterWeapon_Climb*                  K2Node_DynamicCast_AsShooter_Weapon_Climb;         // 0x10(0x8)(BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x19(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3156[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3157[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x50(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x58(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x60(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0x68(0x1)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3158[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x70(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0x80(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_315A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTimeX;                           // 0x8C(0x4)(Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x90(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_315B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Abs_ReturnValue;                          // 0x98(0x8)(ConstParm, Net, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xA0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_315C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast; // 0xB0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


