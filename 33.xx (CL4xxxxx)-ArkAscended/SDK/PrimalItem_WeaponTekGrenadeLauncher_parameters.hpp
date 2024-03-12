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

// 0x2D0 (0x2D0 - 0x0)
// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetItemDescription
struct UPrimalItem_WeaponTekGrenadeLauncher_C_BPGetItemDescription_Params
{
public:
	class FString                                InDescription;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetLongDescription;                               // 0x10(0x1)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_57F8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        Slots;                                             // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FString                                Desc;                                              // 0x40(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_57F9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x60(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x78(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_57FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x80(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_JoinStringArrayWithNewlines_ReturnValue;  // 0xD0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0xE0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x158(0x1)(ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_57FB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x160(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x168(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_57FC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x170(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x178(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x179(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_57FD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_StaticGetItemNameAndIcon_OutItemName;     // 0x180(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            CallFunc_StaticGetItemNameAndIcon_OutItemIcon;     // 0x190(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_StaticGetItemNameAndIcon_ReturnValue;     // 0x198(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_57FE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1A0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_1;                         // 0x1B8(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_57FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1C0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x210(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x211(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5800[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x218(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x228(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x240(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x290(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2A0(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2B8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x2C8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_WeaponTekGrenadeLauncher_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5801[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x18(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


