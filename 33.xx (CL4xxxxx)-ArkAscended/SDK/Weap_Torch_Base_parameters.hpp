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

// 0x23 (0x23 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire
struct AWeap_Torch_Base_C_CanUseNiagaraFire_Params
{
public:
	bool                                         bCanUse;                                           // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4385[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;    // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4386[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;    // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x22(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x8 (0x8 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
struct AWeap_Torch_Base_C_GetFPVNiagaraFire_Params
{
public:
	class UNiagaraComponent*                     FPVNiagaraComponent;                               // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
struct AWeap_Torch_Base_C_GetTPVNiagaraFire_Params
{
public:
	class UNiagaraComponent*                     TPVNiagaraComponent;                               // 0x0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
struct AWeap_Torch_Base_C_BPCanEquip_Params
{
public:
	class AShooterCharacter*                     ByCharacter;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xB(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_438E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x18(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base
struct AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4396[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;    // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x18(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x21(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_4397[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4398[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x38(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x48(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_4399[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_439A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0x78(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_439B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x7C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x81(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_439D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x88(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0x90(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_CanUseNiagaraFire_bCanUse;                // 0x94(0x1)(Edit, BlueprintVisible, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_CanUseNiagaraFire_bCanUse_1;              // 0x95(0x1)(Edit, BlueprintVisible, Parm, OutParm, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_CanUseNiagaraFire_bCanUse_2;              // 0x96(0x1)(Edit, BlueprintVisible, Parm, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_439E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1;  // 0x98(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;    // 0xA0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2;  // 0xA8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1;  // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, Interp)
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3;  // 0xB8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2;  // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3;  // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4;  // 0xD0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue_1;               // 0xD8(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0xE8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0xF0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xFA(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_43A0[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x100(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, SubobjectReference)
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTick_ReturnValue;       // 0x108(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x110(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x118(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, Interp)
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTick_ReturnValue_1;     // 0x120(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_K2_TimerExists_ReturnValue;               // 0x128(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_K2_TimerExists_ReturnValue_1;             // 0x129(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_43A2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTick_ReturnValue_2;     // 0x130(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_43A4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x140(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x148(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_43A5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4;  // 0x150(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x158(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x15C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x160(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x164(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x168(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x16C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference, Interp)
};

}
}


