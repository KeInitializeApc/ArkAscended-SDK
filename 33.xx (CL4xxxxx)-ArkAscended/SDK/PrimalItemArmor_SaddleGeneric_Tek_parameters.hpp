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
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IGet Max Ammo
struct UPrimalItemArmor_SaddleGeneric_Tek_C_IGet_Max_Ammo_Params
{
public:
	int32                                        RetVal;                                            // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.CanElementDecrease
struct UPrimalItemArmor_SaddleGeneric_Tek_C_CanElementDecrease_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CanDecrease;                                       // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         ReturnVal;                                         // 0x5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_260[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x8(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_263[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_270[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x30(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_27E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x40(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x1 (0x1 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_SaddleGeneric_Tek_C_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
struct UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params
{
public:
	double                                       Percent;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0xC0 (0xC0 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek
struct UPrimalItemArmor_SaddleGeneric_Tek_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_Event_bIsFromSaveGame;                      // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2D0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x8(0x8)(Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_2D3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0x24(0x4)(OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanElementDecrease_CanDecrease;           // 0x28(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2D4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2D8[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x58(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x68(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2DE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x78(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0x7C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_UseItemOntoItem_ReturnValue;              // 0x81(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2E1[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_2;          // 0x84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       K2Node_CustomEvent_Percent;                        // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x98(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_3;          // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_2E5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0xA8(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xBC(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

}
}


