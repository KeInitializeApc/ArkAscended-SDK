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
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         SupportsDragOn;                                    // 0x8(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue_Loc;                                   // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3527[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x10(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3528[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item;                           // 0x8C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x90(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3529[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x98(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
struct UPrimalItemResource_Gasoline_C_RefillGasoline_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<double>                               CustomFloats_Loc;                                  // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_352E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x38(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_352F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0xD8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3530[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0xE0(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<double>                               K2Node_VariableSet_CustomFloats_Loc_ImplicitCast;  // 0x158(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                K2Node_MakeStruct_CustomDataFloats_ImplicitCast;   // 0x168(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
struct UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
struct UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CheckForGasolineData_SupportsDragOn;      // 0x9(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


