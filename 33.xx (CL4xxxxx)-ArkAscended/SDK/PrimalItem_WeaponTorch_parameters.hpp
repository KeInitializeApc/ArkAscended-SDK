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

// 0x2 (0x2 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventNewColorization
struct UPrimalItem_WeaponTorch_C_BPPreventNewColorization_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
struct UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4589[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
struct UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_458B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_458C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_458D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
struct UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_4590[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4591[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
struct UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x1(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x2(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_459B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_459D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_459F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
struct UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x10(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
struct UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_CanStartWeaponSwitch_ReturnValue;         // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45AB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45AD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x30(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_45B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_45B3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x58(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45B5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x60(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
struct UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params
{
public:
	bool                                         bCanBeOnBelt;                                      // 0x0(0x1)(Edit, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45B9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45BA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
struct UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params
{
public:
	class AShooterCharacter*                     ShooterCharacter;                                  // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	class APrimalBuff*                           BeltTorchBuff;                                     // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_45BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x18(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45BF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_45C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x50(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
struct UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x9(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xB(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0xC(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xF(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x41 (0x41 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
struct UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params
{
public:
	bool                                         bIsOnBelt;                                         // 0x0(0x1)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45C4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_45C5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_45C6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x39(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x3A(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3B(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x3D(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3E(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3F(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FLinearColor                          NewLocalVar;                                       // 0x4(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_45D4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                Temp_struct_Variable;                              // 0x18(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1C(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45D5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x20(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FColor                                K2Node_Select_Default;                             // 0x24(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x25C (0x25C - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
struct UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_45E9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45EC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x28(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xA0(0x1)(ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_45ED[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakColor_R;                             // 0xA4(0x4)(Edit, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_G;                             // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_B;                             // 0xAC(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_A;                             // 0xB0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Array_Get_Item;                           // 0xB4(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_45F0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class UClass*>                        K2Node_MakeArray_Array_2;                          // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	TArray<class UObject*>                       K2Node_MakeArray_Array_3;                          // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
	TArray<class FString>                        K2Node_MakeArray_Array_4;                          // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_GetItemStatValues_ReturnValue;            // 0x120(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45F3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0x128(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x1A0(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_GetItemStatValues_ReturnValue_1;          // 0x1A8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_45F4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x1B0(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Conv_ByteToDouble_ReturnValue;            // 0x1B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x1C0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_45F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                K2Node_MakeArray_Array_5;                          // 0x1C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData_1;                // 0x1D8(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x250(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x254(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
struct UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4601[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4602[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4604[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0x9C(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xA0(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xA4(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0xA8(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xAC(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0xB0(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xB4(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4607[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast_1;                  // 0xC0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FFloor_A_ImplicitCast_2;                  // 0xC8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0x164 (0x164 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
struct UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params
{
public:
	class UPrimalItem*                           OwnerItem;                                         // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4623[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4624[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4625[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0xA0(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0xA8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_4627[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0xB8(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4629[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPointLightComponent*                  K2Node_DynamicCast_AsPoint_Light_Component;        // 0xC8(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xD0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xD1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_462A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0xD4(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xD8(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xDC(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Array_Get_Item_3;                         // 0xE0(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xE4(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0xF8(0x18)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x110(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x114(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x118(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x119(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x11B(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x11D(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_462B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x128(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x130(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_462C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x138(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x140(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x148(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x158(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x160(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
struct UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bRetValue;                                         // 0x9(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_462D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x11(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x12(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_462E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SelectedCustomContextMenuItem
struct UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
struct UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x9F (0x9F - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
struct UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x5(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x6(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4631[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4632[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4633[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x51(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x52(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x53(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FName                                  K2Node_Event_ContextItem;                          // 0x54(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4634[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x60(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           K2Node_Event_DestinationItem;                      // 0x68(0x8)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        K2Node_Event_AdditionalData;                       // 0x70(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4636[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x80(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4637[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsPreInventoryItem_ReturnValue;           // 0x99(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x9B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x9C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x9D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

}
}


