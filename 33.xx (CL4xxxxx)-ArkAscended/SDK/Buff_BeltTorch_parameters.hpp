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

// 0x13 (0x13 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX
struct ABuff_BeltTorch_C_ActivateVFX_Params
{
public:
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x11(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x12(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x1C0 (0x1C0 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
struct ABuff_BeltTorch_C_UpdateTorchType_Params
{
public:
	bool                                         FPV;                                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3117[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x28(0x18)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x40(0x18)(BlueprintVisible, ExportObject, ReturnParm, Transient, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x70(0x60)(BlueprintVisible, Net, Parm, ReturnParm, Transient, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0xD0(0xF0)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
struct ABuff_BeltTorch_C_BPTryMultiUse_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        UseIndex;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
struct ABuff_BeltTorch_C_BPGetMultiUseEntries_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMultiUseEntry>                MultiUseEntries;                                   // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMultiUseEntry>                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
struct ABuff_BeltTorch_C_InitializeTorchFromItem_Params
{
public:
	class UPrimalItem*                           TheItem;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                WeaponClassOverride;                               // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3128[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x29(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3129[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x30(0x8)(ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_312A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x40(0x8)(Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x48(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_312B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x58(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5A(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
struct ABuff_BeltTorch_C_SetFlameColorIndex_Params
{
public:
	int32                                        TheIndex;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
struct ABuff_BeltTorch_C_UpdateTorchFlameColor_Params
{
public:
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x8(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x19(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1A(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
struct ABuff_BeltTorch_C_SetTorchFlameColor_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x18(0x18)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
struct ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params
{
public:
	class UClass*                                WeaponClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
struct ABuff_BeltTorch_C_Update_All_Torch_Colors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x5E (0x5E - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
struct ABuff_BeltTorch_C_UpdateTorchColorsArray_Params
{
public:
	class UPrimalItem*                           ForPrimalItem;                                     // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_314A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x21(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_314D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x28(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x38(0x8)(ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_314E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x44(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x59(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5A(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x91 (0x91 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        TheColorIndex;                                     // 0x10(0x4)(BlueprintVisible, Parm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3159[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x20(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_315B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_315C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_315E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x50(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x58(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3160[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x69(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3162[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x6C(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x7C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	uint8                                        Pad_3163[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x88(0x8)(ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
struct ABuff_BeltTorch_C_ApplyMeshColorization_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
struct ABuff_BeltTorch_C_ShouldDeactivateBuff_Params
{
public:
	bool                                         bShouldDeactivate;                                 // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, Transient, SubobjectReference)
	uint8                                        Pad_316E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x11(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x12(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x13(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x14(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3173[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
struct ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_317E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
struct ABuff_BeltTorch_C_InitializeTorchMesh_Params
{
public:
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
struct ABuff_BeltTorch_C_DeactivateBeltTorch_Params
{
public:
	bool                                         bEquipTorchOnDeactivation;                         // 0x0(0x1)(Edit, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
struct ABuff_BeltTorch_C_AreValidTorchIDs_Params
{
public:
	int32                                        TorchID1;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	int32                                        TorchID2;                                          // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         bAreValid;                                         // 0x8(0x1)(BlueprintVisible, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_319C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_319D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
struct ABuff_BeltTorch_C_InitializeTorchItem_Params
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_31A3[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31A5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x15 (0x15 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
struct ABuff_BeltTorch_C_InitializeTorchIDs_Params
{
public:
	class UPrimalItem*                           TorchItem;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x12(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x13(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x14(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
struct ABuff_BeltTorch_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        TheIndex;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
struct ABuff_BeltTorch_C_BPOnInputEvent_Params
{
public:
	enum class EPrimalCharacterInputType         InputType;                                         // 0x0(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
struct ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
struct ABuff_BeltTorch_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
struct ABuff_BeltTorch_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
struct ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTime_1;                          // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_InitializeTorchItem_bInitialized;         // 0xA(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_ShouldDeactivateBuff_bShouldDeactivate;   // 0xB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_31E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_ObjectIsChildOf_ReturnValue;              // 0x1A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_31E7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	struct FLinearColor                          K2Node_CustomEvent_TheColor_1;                     // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        K2Node_CustomEvent_TheIndex;                       // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	enum class EPrimalCharacterInputType         K2Node_Event_inputType;                            // 0x51(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x53(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x54(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_31EB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_CustomEvent_TheColor;                       // 0x58(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x68(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x79(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x7A(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x7C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x80(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_31F0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_ForInstigator;                        // 0x88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x90(0x1)(OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x92(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x93(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_31F7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x98(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0xA4(0x4)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, SubobjectReference)
};

}
}


