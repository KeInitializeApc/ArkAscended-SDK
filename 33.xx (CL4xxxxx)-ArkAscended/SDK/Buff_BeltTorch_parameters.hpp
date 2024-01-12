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
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x11(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x12(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
};

// 0x1C0 (0x1C0 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
struct ABuff_BeltTorch_C_UpdateTorchType_Params
{
public:
	bool                                         FPV;                                               // 0x0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_A42[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x10(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x28(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x40(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x58(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x70(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0xD0(0xF0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
struct ABuff_BeltTorch_C_BPTryMultiUse_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        UseIndex;                                          // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
struct ABuff_BeltTorch_C_BPGetMultiUseEntries_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FMultiUseEntry>                MultiUseEntries;                                   // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FMultiUseEntry>                ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
struct ABuff_BeltTorch_C_InitializeTorchFromItem_Params
{
public:
	class UPrimalItem*                           TheItem;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                WeaponClassOverride;                               // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_A56[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x29(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x2A(0x1)(BlueprintVisible, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_A57[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_A58[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	uint8                                        Pad_A5A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x58(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x59(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5A(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
struct ABuff_BeltTorch_C_SetFlameColorIndex_Params
{
public:
	int32                                        TheIndex;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
struct ABuff_BeltTorch_C_UpdateTorchFlameColor_Params
{
public:
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x19(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1A(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
struct ABuff_BeltTorch_C_SetTorchFlameColor_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x10(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
struct ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params
{
public:
	class UClass*                                WeaponClass;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
struct ABuff_BeltTorch_C_Update_All_Torch_Colors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x5E (0x5E - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
struct ABuff_BeltTorch_C_UpdateTorchColorsArray_Params
{
public:
	class UPrimalItem*                           ForPrimalItem;                                     // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_A7A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_A7B[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_A7C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x58(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x59(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5A(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5D(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x91 (0x91 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        TheColorIndex;                                     // 0x10(0x4)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_A83[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x18(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x20(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_A84[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_A85[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x30(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_A87[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x50(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_A88[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x69(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_A8A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x6C(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x7C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_A8C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
struct ABuff_BeltTorch_C_ApplyMeshColorization_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
struct ABuff_BeltTorch_C_ShouldDeactivateBuff_Params
{
public:
	bool                                         bShouldDeactivate;                                 // 0x0(0x1)(Edit, BlueprintReadOnly, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_AA1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x11(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x12(0x1)(Edit, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x13(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x14(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_AA6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
struct ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_AAC[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
struct ABuff_BeltTorch_C_InitializeTorchMesh_Params
{
public:
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x0(0x1)(BlueprintVisible, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
struct ABuff_BeltTorch_C_DeactivateBeltTorch_Params
{
public:
	bool                                         bEquipTorchOnDeactivation;                         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
struct ABuff_BeltTorch_C_AreValidTorchIDs_Params
{
public:
	int32                                        TorchID1;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        TorchID2;                                          // 0x4(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAreValid;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xA(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_ABD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_ABE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
struct ABuff_BeltTorch_C_InitializeTorchItem_Params
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(ConstParm, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_AC6[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_AC7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_ACC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x15 (0x15 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
struct ABuff_BeltTorch_C_InitializeTorchIDs_Params
{
public:
	class UPrimalItem*                           TorchItem;                                         // 0x0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0xC(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x12(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x13(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
struct ABuff_BeltTorch_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        TheIndex;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
struct ABuff_BeltTorch_C_BPOnInputEvent_Params
{
public:
	enum class EPrimalCharacterInputType         InputType;                                         // 0x0(0x1)(Edit, ConstParm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
struct ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
struct ABuff_BeltTorch_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
struct ABuff_BeltTorch_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
struct ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTime_1;                          // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_InitializeTorchItem_bInitialized;         // 0xA(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_ShouldDeactivateBuff_bShouldDeactivate;   // 0xB(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_B15[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_ObjectIsChildOf_ReturnValue;              // 0x1A(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1C(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_B1E[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x20(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x30(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FLinearColor                          K2Node_CustomEvent_TheColor_1;                     // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
	int32                                        K2Node_CustomEvent_TheIndex;                       // 0x48(0x4)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalCharacterInputType         K2Node_Event_inputType;                            // 0x51(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x53(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x54(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_B24[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_CustomEvent_TheColor;                       // 0x58(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x68(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x79(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x7A(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x7C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x80(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_B29[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_ForInstigator;                        // 0x88(0x8)(Edit, ConstParm, ReturnParm, EditConst, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x90(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x92(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x93(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B2D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0xA0(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0xA4(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

}
}


