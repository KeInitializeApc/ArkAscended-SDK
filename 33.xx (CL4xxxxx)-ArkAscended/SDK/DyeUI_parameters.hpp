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
// Function DyeUI.DyeUI_C.GetVisibility_0
struct UDyeUI_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function DyeUI.DyeUI_C.FixConsoleIcons
struct UDyeUI_C_FixConsoleIcons_Params
{
public:
	TArray<class UWidget*>                       Local_UWidgetIcons;                                // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UImage*>                        K2Node_MakeArray_Array;                            // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UImage*                                CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_303B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_303C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x50(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_303D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x60(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x4 (0x4 - 0x0)
// Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI
struct UDyeUI_C_ExecuteUbergraph_DyeUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

}
}


