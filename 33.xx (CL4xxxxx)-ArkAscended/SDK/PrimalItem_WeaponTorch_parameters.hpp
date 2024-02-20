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
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
struct UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_323D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
struct UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3246[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3249[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_324B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
struct UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xA(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_325F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3261[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
struct UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3276[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3278[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3279[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
struct UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x10(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
struct UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_CanStartWeaponSwitch_ReturnValue;         // 0x9(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3286[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3287[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x30(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3289[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_328D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x58(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3291[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x60(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
struct UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params
{
public:
	bool                                         bCanBeOnBelt;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_329D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x8(0x8)(Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_329E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
struct UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params
{
public:
	class AShooterCharacter*                     ShooterCharacter;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	class APrimalBuff*                           BeltTorchBuff;                                     // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x18(0x8)(Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x20(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_32AD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x38(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32B0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x48(0x8)(ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x50(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
struct UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xB(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xF(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x41 (0x41 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
struct UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params
{
public:
	bool                                         bIsOnBelt;                                         // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_32BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0x8(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x3A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x3D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3E(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3F(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x40(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_32C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x18(0x10)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FLinearColor                          NewLocalVar;                                       // 0x4(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_32C8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                Temp_struct_Variable;                              // 0x18(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_32C9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FColor                                K2Node_Select_Default;                             // 0x24(0x4)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x25C (0x25C - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
struct UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_32D3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0xC(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_32D5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x28(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakColor_R;                             // 0xA4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakColor_G;                             // 0xA8(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakColor_B;                             // 0xAC(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakColor_A;                             // 0xB0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_Array_Get_Item;                           // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0xC8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32D8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xD8(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	TArray<class UClass*>                        K2Node_MakeArray_Array_2;                          // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	TArray<class UObject*>                       K2Node_MakeArray_Array_3;                          // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	TArray<class FString>                        K2Node_MakeArray_Array_4;                          // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_GetItemStatValues_ReturnValue;            // 0x120(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_32DA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0x128(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x1A0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	int32                                        CallFunc_GetItemStatValues_ReturnValue_1;          // 0x1A8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_32DB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x1B0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Conv_ByteToDouble_ReturnValue;            // 0x1B8(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x1C0(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_32DD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                K2Node_MakeArray_Array_5;                          // 0x1C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData_1;                // 0x1D8(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x250(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x254(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x258(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
struct UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_32E3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32E4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32E5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0x9C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xB4(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_32E8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0xB8(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast_1;                  // 0xC0(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FFloor_A_ImplicitCast_2;                  // 0xC8(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
};

// 0x164 (0x164 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
struct UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params
{
public:
	class UPrimalItem*                           OwnerItem;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_32F2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32F3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32F4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0xA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_32F6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0xB8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_32F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPointLightComponent*                  K2Node_DynamicCast_AsPoint_Light_Component;        // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xD0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xD1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_32FA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0xD4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xD8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xDC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Array_Get_Item_3;                         // 0xE0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xE4(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0xF8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x110(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x114(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x118(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x119(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11A(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x11B(0x1)(OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11C(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x11D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_32FC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x120(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x128(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x130(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32FD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x140(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x148(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x150(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x158(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x160(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
struct UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bRetValue;                                         // 0x9(0x1)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3301[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x11(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x12(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3302[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SelectedCustomContextMenuItem
struct UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
struct UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x9F (0x9F - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
struct UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x5(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x6(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_330F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3310[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3311[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x48(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x52(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x53(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  K2Node_Event_ContextItem;                          // 0x54(0x8)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3313[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x60(0x8)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalItem*                           K2Node_Event_DestinationItem;                      // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        K2Node_Event_AdditionalData;                       // 0x70(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3314[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3315[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x90(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsPreInventoryItem_ReturnValue;           // 0x99(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9A(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x9B(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x9C(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x9D(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


