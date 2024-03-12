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
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x80(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x88(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E49[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Array_Get_Item;                           // 0x90(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x94(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E4B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item_1;                         // 0x98(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0x9C(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Array_Get_Item_3;                         // 0xA0(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_3E4C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xA8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_4;                         // 0xC0(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_Array_Get_Item_5;                         // 0xC4(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xC8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0xE0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast_1;              // 0xF8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_Y_ImplicitCast_1;              // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_X_ImplicitCast_1;              // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x1D4 (0x1D4 - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.PlayHitShieldEffect
struct UPrimalItemArmor_Shield_C_PlayHitShieldEffect_Params
{
public:
	bool                                         LocalOnly;                                         // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3E6A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitLoc;                                            // 0x8(0x18)(Edit, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               FromLoc;                                           // 0x20(0x18)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E6B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x58(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3E6D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0xA0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xA8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xB8(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0xD0(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x148(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E6F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x150(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UStaticMeshComponent*                  K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x158(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3E70[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x164(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_GetClosestPointOnCollision_OutPointOnBody; // 0x168(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_GetClosestPointOnCollision_ReturnValue;   // 0x180(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x184(0x1)(DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3E71[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x188(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x190(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3E72[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x198(0x8)(Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3E74[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1B9(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1BA(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3E78[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x1BC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__4__ImplicitCast;                 // 0x1C0(0x4)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__5__ImplicitCast;                 // 0x1C4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__0__ImplicitCast;                 // 0x1C8(0x4)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x1CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x1D0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
};

// 0x7C (0x7C - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.HandleShieldDamageBlocking
struct UPrimalItemArmor_Shield_C_HandleShieldDamageBlocking_Params
{
public:
	class AShooterCharacter*                     ForShooterCharacter;                               // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DamageIn;                                          // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E80[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          DamageEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               HitPoint;                                          // 0x40(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x58(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E81[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x60(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x7A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x7B(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


