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

// 0x110 (0x110 - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.BPClientHandleItemNetExecCommand
struct UPrimalItemArmor_Shield_C_BPClientHandleItemNetExecCommand_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x80(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2FE0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_Array_Get_Item;                           // 0x90(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x94(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2FE2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item_1;                         // 0x98(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0x9C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Array_Get_Item_3;                         // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_2FE4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xA8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_4;                         // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_Array_Get_Item_5;                         // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xC8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0xE0(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0xE8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0xF0(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast_1;              // 0xF8(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_Y_ImplicitCast_1;              // 0x100(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_X_ImplicitCast_1;              // 0x108(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x1D4 (0x1D4 - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.PlayHitShieldEffect
struct UPrimalItemArmor_Shield_C_PlayHitShieldEffect_Params
{
public:
	bool                                         LocalOnly;                                         // 0x0(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2FFF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitLoc;                                            // 0x8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               FromLoc;                                           // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3000[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x58(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x70(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3002[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x90(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0xA0(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xA8(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xB8(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0xD0(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x148(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3003[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x150(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UStaticMeshComponent*                  K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x158(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3004[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x164(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_GetClosestPointOnCollision_OutPointOnBody; // 0x168(0x18)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_GetClosestPointOnCollision_ReturnValue;   // 0x180(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x184(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3005[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x188(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18C(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x190(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3006[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x198(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3007[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1B0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1B9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1BA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3009[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x1BC(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__4__ImplicitCast;                 // 0x1C0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__5__ImplicitCast;                 // 0x1C4(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__0__ImplicitCast;                 // 0x1C8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x1CC(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x1D0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x7C (0x7C - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.HandleShieldDamageBlocking
struct UPrimalItemArmor_Shield_C_HandleShieldDamageBlocking_Params
{
public:
	class AShooterCharacter*                     ForShooterCharacter;                               // 0x0(0x8)(ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DamageIn;                                          // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_301B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          DamageEvent;                                       // 0x10(0x20)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               HitPoint;                                          // 0x40(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x58(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_301E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x60(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x7A(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x7B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


