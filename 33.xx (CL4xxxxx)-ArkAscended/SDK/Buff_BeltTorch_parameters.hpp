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
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x12(0x1)(BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x1C0 (0x1C0 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
struct ABuff_BeltTorch_C_UpdateTorchType_Params
{
public:
	bool                                         FPV;                                               // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4462[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x10(0x18)(ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x28(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x40(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x58(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x70(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0xD0(0xF0)(ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
struct ABuff_BeltTorch_C_BPTryMultiUse_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        UseIndex;                                          // 0x8(0x4)(Edit, ConstParm, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
struct ABuff_BeltTorch_C_BPGetMultiUseEntries_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FMultiUseEntry>                MultiUseEntries;                                   // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FMultiUseEntry>                ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
struct ABuff_BeltTorch_C_InitializeTorchFromItem_Params
{
public:
	class UPrimalItem*                           TheItem;                                           // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                WeaponClassOverride;                               // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4466[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x18(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x20(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x29(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4467[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x30(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_4468[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x40(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4469[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x58(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x59(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
struct ABuff_BeltTorch_C_SetFlameColorIndex_Params
{
public:
	int32                                        TheIndex;                                          // 0x0(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
struct ABuff_BeltTorch_C_UpdateTorchFlameColor_Params
{
public:
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x8(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x18(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x19(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
struct ABuff_BeltTorch_C_SetTorchFlameColor_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x18(0x18)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
struct ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params
{
public:
	class UClass*                                WeaponClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
struct ABuff_BeltTorch_C_Update_All_Torch_Colors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x10(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x5E (0x5E - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
struct ABuff_BeltTorch_C_UpdateTorchColorsArray_Params
{
public:
	class UPrimalItem*                           ForPrimalItem;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_447A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x21(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_447B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x28(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x38(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_447D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x48(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x58(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x59(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5D(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x91 (0x91 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        TheColorIndex;                                     // 0x10(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_447E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x20(0x1)(ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_447F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_4480[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4481[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x48(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x50(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x58(0x8)(Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4482[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x69(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_4483[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x6C(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x7C(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4484[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x80(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x88(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
struct ABuff_BeltTorch_C_ApplyMeshColorization_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
struct ABuff_BeltTorch_C_ShouldDeactivateBuff_Params
{
public:
	bool                                         bShouldDeactivate;                                 // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4486[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x12(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x13(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x14(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_4487[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
struct ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4489[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x10(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
struct ABuff_BeltTorch_C_InitializeTorchMesh_Params
{
public:
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
struct ABuff_BeltTorch_C_DeactivateBeltTorch_Params
{
public:
	bool                                         bEquipTorchOnDeactivation;                         // 0x0(0x1)(ExportObject, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
struct ABuff_BeltTorch_C_AreValidTorchIDs_Params
{
public:
	int32                                        TorchID1;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        TorchID2;                                          // 0x4(0x4)(ConstParm, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAreValid;                                         // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xA(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_448D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_448E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
struct ABuff_BeltTorch_C_InitializeTorchItem_Params
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4492[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4493[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4494[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x15 (0x15 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
struct ABuff_BeltTorch_C_InitializeTorchIDs_Params
{
public:
	class UPrimalItem*                           TorchItem;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0xC(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x12(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x13(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x14(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
struct ABuff_BeltTorch_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        TheIndex;                                          // 0x10(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
struct ABuff_BeltTorch_C_BPOnInputEvent_Params
{
public:
	enum class EPrimalCharacterInputType         InputType;                                         // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
struct ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
struct ABuff_BeltTorch_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
struct ABuff_BeltTorch_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
struct ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_Event_DeltaTime_1;                          // 0x4(0x4)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_InitializeTorchItem_bInitialized;         // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ShouldDeactivateBuff_bShouldDeactivate;   // 0xB(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_44A7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_ObjectIsChildOf_ReturnValue;              // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_44A9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x20(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x30(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FLinearColor                          K2Node_CustomEvent_TheColor_1;                     // 0x38(0x10)(Edit, ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        K2Node_CustomEvent_TheIndex;                       // 0x48(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	enum class EPrimalCharacterInputType         K2Node_Event_inputType;                            // 0x51(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x53(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x54(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_44B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_CustomEvent_TheColor;                       // 0x58(0x10)(Edit, ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x68(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x70(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x79(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x7A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x7C(0x4)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_44B5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_ForInstigator;                        // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x92(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x93(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_44B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0xA0(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0xA4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


