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

// 0x30 (0x30 - 0x0)
// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage
struct UPrimalItem_ChargeBattery_C_BPGetItemDurabilityPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5A18[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x18(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A19[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x20(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x28(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon
struct UPrimalItem_ChargeBattery_C_BPGetItemIcon_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UTexture2D*                            FinalIcon;                                         // 0x10(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPIsTemplate_ReturnValue;                 // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A1A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x20(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class UTexture2D*                            CallFunc_Array_Get_Item_1;                         // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class UTexture2D*                            CallFunc_Array_Get_Item_2;                         // 0x30(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	class UTexture2D*                            CallFunc_Array_Get_Item_3;                         // 0x38(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	class UTexture2D*                            CallFunc_Array_Get_Item_4;                         // 0x40(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x51(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x52(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x53(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5A1B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x58(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x60(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_ChargeBattery_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                ReturnString;                                      // 0x10(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x20(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A1C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x4C (0x4C - 0x0)
// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe
struct UPrimalItem_ChargeBattery_C_AddDurabilitySafe_Params
{
public:
	double                                       AmountToAdd;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       AmountAdded;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	double                                       FinalAmountAdded;                                  // 0x10(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_FClamp_Max_ImplicitCast;                  // 0x30(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x40(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0x48(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem
struct UPrimalItem_ChargeBattery_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        InitialClipAmmo;                                   // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       ChargeAdded;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPrimalItemWeapon_StoresCharge_C*      K2Node_DynamicCast_AsPrimal_Item_Weapon_Stores_Charge; // 0x18(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5A1D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem_ChargeBattery_C*           K2Node_DynamicCast_AsPrimal_Item_Charge_Battery;   // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5A1E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x34(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0x3C(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x40(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_AddDurabilitySafe_amountAdded;            // 0x48(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x50(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x58(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_AddDurabilitySafe_amountAdded_1;          // 0x60(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x68(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5A1F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x78(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_AddDurabilitySafe_amountAdded_2;          // 0x80(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x88(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x90(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A20[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_AddDurabilitySafe_amountToAdd_ImplicitCast; // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


