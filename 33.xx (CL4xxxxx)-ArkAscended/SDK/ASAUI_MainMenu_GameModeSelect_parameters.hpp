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

// 0x20 (0x20 - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.InitHasSave
struct UASAUI_MainMenu_GameModeSelect_C_InitHasSave_Params
{
public:
	bool                                         Save;                                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_39B5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Select_Default;                             // 0x8(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x8A (0x8A - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.SelectionChanged
struct UASAUI_MainMenu_GameModeSelect_C_SelectionChanged_Params
{
public:
	class UCustomButtonWidget*                   Widget;                                            // 0x0(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x18(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UOverlay*                              K2Node_DynamicCast_AsOverlay;                      // 0x48(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39C7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x58(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39CA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x78(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUI_MainMenuWidget_Card_C*          K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;  // 0x80(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x89(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x81 (0x81 - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.StopAllCardAnims
struct UASAUI_MainMenu_GameModeSelect_C_StopAllCardAnims_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39F1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39F4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UOverlay*                              K2Node_DynamicCast_AsOverlay;                      // 0x40(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39F6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x50(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x70(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUI_MainMenuWidget_Card_C*          K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;  // 0x78(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x22 (0x22 - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect
struct UASAUI_MainMenu_GameModeSelect_C_ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3A09[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVirtualCursorEnabled_ReturnValue;       // 0x10(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A0B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsJapanesePS5Build_ReturnValue;           // 0x21(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

}
}


