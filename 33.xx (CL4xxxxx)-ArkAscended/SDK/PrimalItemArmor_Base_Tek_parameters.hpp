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
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
struct UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params
{
public:
	bool                                         IsInfinite;                                        // 0x0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         IsBuffInfinite;                                    // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3AFB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3AFC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B00[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
struct UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B07[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params
{
public:
	class AShooterCharacter*                     OwningPlayer;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UClass*                                TekArmorBuff;                                      // 0x8(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                OutInternalBuff;                                   // 0x10(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x18(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B10[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B11[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B12[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
	struct FMapSpecificTekArmorBuffs             CallFunc_Array_Get_Item;                           // 0x40(0x40)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x85(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x86(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B13[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue_1;          // 0x90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
};

// 0x38 (0x38 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params
{
public:
	class UClass*                                ResolvedTekArmorBuff;                              // 0x0(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                OutBuff;                                           // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff; // 0x18(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B17[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1; // 0x30(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
};

// 0x1B (0x1B - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
struct UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params
{
public:
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x0(0x1)(Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3B20[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x4(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B21[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_UseItemOntoItem_ReturnValue;              // 0x1A(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
struct UPrimalItemArmor_Base_Tek_C_InitBuff_Params
{
public:
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B28[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
struct UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params
{
public:
	class AController*                           PossessedByController;                             // 0x0(0x8)(BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params
{
public:
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Return;                                            // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x20(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_3B2C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x48(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3B2D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x23 (0x23 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
struct UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         PreventCheckingInventory;                          // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CanDecrease;                                       // 0x5(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         Return_Val;                                        // 0x6(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x7(0x1)(Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B35[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3B36[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x1C(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x21(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Return_Val;                                        // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
struct UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params
{
public:
	double                                       Percent;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
};

// 0xF9 (0xF9 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
struct UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x4(0x1)(Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3B56[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x8(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0xC(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	double                                       K2Node_CustomEvent_Percent;                        // 0x10(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_2;          // 0x18(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3B57[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x20(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B59[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0x3C(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B5A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x48(0x1)(BlueprintReadOnly, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3B5B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x4C(0x4)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x58(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3B5D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x70(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3B5E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x88(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x90(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3B5F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0xA0(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1; // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0xB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3B62[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0xC8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue_1;             // 0xD0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff; // 0xD8(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1; // 0xE0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue_1;              // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite_1;              // 0xF8(0x1)(Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
};

}
}


