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

// 0x38 (0x38 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.UpdateProgressBar
struct UUpdatingModsToast_C_UpdateProgressBar_Params
{
public:
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x10(0x8)(ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x18(0x8)(ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x30(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
struct UUpdatingModsToast_C_UpdateMainText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3005[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3006[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0x80(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x98(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA0(0x50)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
struct UUpdatingModsToast_C_InitCounter_Params
{
public:
	int32                                        NewCounterMax;                                     // 0x0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bInWillSetCounter;                                 // 0x4(0x1)(ConstParm, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValueWithString
struct UUpdatingModsToast_C_OverrideTextValueWithString_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         HideProgressBar;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValue
struct UUpdatingModsToast_C_OverrideTextValue_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         HideProgressBar;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.SetCounter
struct UUpdatingModsToast_C_SetCounter_Params
{
public:
	int32                                        NewCounter;                                        // 0x0(0x4)(ConstParm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x71 (0x71 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.ExecuteUbergraph_UpdatingModsToast
struct UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3014[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_NewCounterMax;                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_bInWillSetCounter;                    // 0xC(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_3015[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_NewText_1;                            // 0x10(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_Event_HideProgressBar_1;                    // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3017[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Event_NewText;                              // 0x28(0x18)(Edit, ConstParm, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_HideProgressBar;                      // 0x40(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x41(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3018[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x68(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x69(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_1;                              // 0x6A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_301B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_NewCounter;                           // 0x6C(0x4)(ExportObject, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x70(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

}
}


