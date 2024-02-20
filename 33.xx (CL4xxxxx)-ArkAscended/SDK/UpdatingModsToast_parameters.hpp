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
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
struct UUpdatingModsToast_C_UpdateMainText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C8D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C8E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0x80(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x98(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA0(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
struct UUpdatingModsToast_C_InitCounter_Params
{
public:
	int32                                        NewCounterMax;                                     // 0x0(0x4)(Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInWillSetCounter;                                 // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValueWithString
struct UUpdatingModsToast_C_OverrideTextValueWithString_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         HideProgressBar;                                   // 0x10(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValue
struct UUpdatingModsToast_C_OverrideTextValue_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         HideProgressBar;                                   // 0x18(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.SetCounter
struct UUpdatingModsToast_C_SetCounter_Params
{
public:
	int32                                        NewCounter;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x71 (0x71 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.ExecuteUbergraph_UpdatingModsToast
struct UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2CA1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_NewCounterMax;                        // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bInWillSetCounter;                    // 0xC(0x1)(Edit, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CA2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_NewText_1;                            // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_Event_HideProgressBar_1;                    // 0x20(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2CA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Event_NewText;                              // 0x28(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_HideProgressBar;                      // 0x40(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x41(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2CA4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x60(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x68(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x69(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_1;                              // 0x6A(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2CA5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_NewCounter;                           // 0x6C(0x4)(Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x70(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
};

}
}


