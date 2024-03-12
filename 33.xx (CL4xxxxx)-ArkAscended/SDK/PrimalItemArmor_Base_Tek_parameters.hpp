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

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
struct UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
struct UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params
{
public:
	bool                                         IsInfinite;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsBuffInfinite;                                    // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_14EA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_14EF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14FA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
struct UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1506[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params
{
public:
	class AShooterCharacter*                     OwningPlayer;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	class UClass*                                TekArmorBuff;                                      // 0x8(0x8)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                OutInternalBuff;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_152D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_152E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_152F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x30(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FMapSpecificTekArmorBuffs             CallFunc_Array_Get_Item;                           // 0x40(0x40)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x85(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x86(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_1534[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x88(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue_1;          // 0x90(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x38 (0x38 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params
{
public:
	class UClass*                                ResolvedTekArmorBuff;                              // 0x0(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                OutBuff;                                           // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff; // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x20(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_1547[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1; // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x1B (0x1B - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
struct UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params
{
public:
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_154F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1552[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_UseItemOntoItem_ReturnValue;              // 0x1A(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
struct UPrimalItemArmor_Base_Tek_C_InitBuff_Params
{
public:
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_155C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
struct UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params
{
public:
	class AController*                           PossessedByController;                             // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params
{
public:
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                Return;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_15B4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x30(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x40(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x48(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_15B6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x23 (0x23 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
struct UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         PreventCheckingInventory;                          // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CanDecrease;                                       // 0x5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Return_Val;                                        // 0x6(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x7(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_15E1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_15E2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x1C(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x21(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Return_Val;                                        // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
struct UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params
{
public:
	double                                       Percent;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0xF9 (0xF9 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
struct UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1659[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0xC(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       K2Node_CustomEvent_Percent;                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_2;          // 0x18(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_165B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x28(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_165C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x34(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0x3C(0x4)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x40(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_165F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1661[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_1664[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x68(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x78(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_1667[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1668[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0xA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1; // 0xA8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0xB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_166C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue_1;             // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff; // 0xD8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1; // 0xE0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue_1;              // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite_1;              // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

}
}


