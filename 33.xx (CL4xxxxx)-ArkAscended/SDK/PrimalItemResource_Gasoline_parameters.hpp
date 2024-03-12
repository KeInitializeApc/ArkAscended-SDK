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

// 0xA0 (0xA0 - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
struct UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         SupportsDragOn;                                    // 0x8(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         ReturnValue_Loc;                                   // 0x9(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AEE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x10(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x88(0x1)(ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AEF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0x8C(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x90(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AF0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x98(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
struct UPrimalItemResource_Gasoline_C_RefillGasoline_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<double>                               CustomFloats_Loc;                                  // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, SubobjectReference)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x18(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, SubobjectReference)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AF3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xB0(0x1)(ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AF4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB8(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC8(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0xD8(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AF5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0xE0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	TArray<double>                               K2Node_VariableSet_CustomFloats_Loc_ImplicitCast;  // 0x158(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	TArray<float>                                K2Node_MakeStruct_CustomDataFloats_ImplicitCast;   // 0x168(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
struct UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
struct UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CheckForGasolineData_SupportsDragOn;      // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
};

}
}


