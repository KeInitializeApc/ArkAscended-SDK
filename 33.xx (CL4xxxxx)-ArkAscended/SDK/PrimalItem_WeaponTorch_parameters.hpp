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
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
struct UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_253A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
struct UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_253D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_253E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2540[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
struct UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xA(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_2544[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2545[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
struct UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_254E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2550[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2551[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x28(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
struct UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x8(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
struct UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanStartWeaponSwitch_ReturnValue;         // 0x9(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_255D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_255E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x30(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_255F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2560[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x58(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_2562[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
struct UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params
{
public:
	bool                                         bCanBeOnBelt;                                      // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2563[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_2564[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x28(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
struct UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params
{
public:
	class AShooterCharacter*                     ShooterCharacter;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig)
	class APrimalBuff*                           BeltTorchBuff;                                     // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2566[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_2567[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x38(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2568[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x48(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x50(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
struct UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xB(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xF(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x41 (0x41 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
struct UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params
{
public:
	bool                                         bIsOnBelt;                                         // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_256B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0x8(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_256C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_256D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x39(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x3A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3B(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x3D(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3E(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3F(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_256E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          NewLocalVar;                                       // 0x4(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2571[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                Temp_struct_Variable;                              // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2572[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FColor                                K2Node_Select_Default;                             // 0x24(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x25C (0x25C - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
struct UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2573[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_2574[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x28(0x78)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xA0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2575[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakColor_R;                             // 0xA4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakColor_G;                             // 0xA8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakColor_B;                             // 0xAC(0x4)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakColor_A;                             // 0xB0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_Array_Get_Item;                           // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xB8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0xC8(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2578[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class UClass*>                        K2Node_MakeArray_Array_2;                          // 0xF0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	TArray<class UObject*>                       K2Node_MakeArray_Array_3;                          // 0x100(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	TArray<class FString>                        K2Node_MakeArray_Array_4;                          // 0x110(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_GetItemStatValues_ReturnValue;            // 0x120(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_257C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0x128(0x78)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x1A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetItemStatValues_ReturnValue_1;          // 0x1A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_257D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x1B0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Conv_ByteToDouble_ReturnValue;            // 0x1B8(0x8)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x1C0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_257E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                K2Node_MakeArray_Array_5;                          // 0x1C8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData_1;                // 0x1D8(0x78)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x250(0x4)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x254(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x258(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
struct UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2581[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2582[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2583[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0x9C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xA4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0xA8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0xB0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xB4(0x1)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2585[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0xB8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast_1;                  // 0xC0(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FFloor_A_ImplicitCast_2;                  // 0xC8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
};

// 0x164 (0x164 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
struct UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params
{
public:
	class UPrimalItem*                           OwnerItem;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_258F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2590[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2591[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0xA8(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_2594[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0xB8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2595[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPointLightComponent*                  K2Node_DynamicCast_AsPoint_Light_Component;        // 0xC8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xD0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xD1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2596[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0xD4(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xD8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xDC(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Array_Get_Item_3;                         // 0xE0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xE4(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0xF8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, EditConst, SubobjectReference)
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x110(0x4)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x114(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x119(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11A(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x11B(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x11D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2597[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x128(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x130(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2598[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x140(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x148(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x158(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x160(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
struct UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRetValue;                                         // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_259A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0xC(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x11(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x12(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_259B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SelectedCustomContextMenuItem
struct UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
struct UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x9F (0x9F - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
struct UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x6(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_25A2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_25A3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_25A4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x38(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x48(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x51(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x52(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x53(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  K2Node_Event_ContextItem;                          // 0x54(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_25A6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x60(0x8)(ConstParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItem*                           K2Node_Event_DestinationItem;                      // 0x68(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        K2Node_Event_AdditionalData;                       // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_25A7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_25A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x90(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsPreInventoryItem_ReturnValue;           // 0x99(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9A(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x9B(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x9C(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x9D(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9E(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


