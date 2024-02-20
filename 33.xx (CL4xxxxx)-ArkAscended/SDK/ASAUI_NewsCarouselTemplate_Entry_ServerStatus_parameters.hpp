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

// 0x10 (0x10 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.BlueprintInit
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_BlueprintInit_Params
{
public:
	class FString                                RawExtraData;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusTick
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x12C (0x12C - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_37BC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_RawExtraData;                         // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x18(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_37BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x30(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5C(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x5D(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x5E(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_37BF[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x88(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x90(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37C0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0xA8(0x10)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xC8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xE8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xF0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x108(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x110(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x118(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x11C(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x120(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x124(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x128(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

}
}


