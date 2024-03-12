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

// 0x5 (0x5 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.FixupComboBox
struct UMapSelect_Entry_C_FixupComboBox_Params
{
public:
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.UpdateDeleteSaveButton
struct UMapSelect_Entry_C_UpdateDeleteSaveButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_HasSaveForMapIndex_ReturnValue;           // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.IsSelected
struct UMapSelect_Entry_C_IsSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(DisableEditOnInstance, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.Set To Map Select View
struct UMapSelect_Entry_C_Set_To_Map_Select_View_Params
{
public:
	bool                                         IsMapSelectView;                                   // 0x0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x6(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x7(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x5 (0x5 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.Show Hide Locked Images
struct UMapSelect_Entry_C_Show_Hide_Locked_Images_Params
{
public:
	bool                                         IsLocked;                                          // 0x0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.SetupUsingHostSession
struct UMapSelect_Entry_C_SetupUsingHostSession_Params
{
public:
	class UUI_HostSession*                       HostSession;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Session_C*                  MapSelectSession;                                  // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        WithIndex;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_10E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_110[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetMapInfo_OutMapName;                    // 0x20(0x18)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMapDescription                       CallFunc_GetMapInfo_OutDescription;                // 0x38(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.SetSelected
struct UMapSelect_Entry_C_SetSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x11 (0x11 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
struct UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
struct UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.Tick
struct UMapSelect_Entry_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD8 (0xD8 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.ExecuteUbergraph_MapSelect_Entry
struct UMapSelect_Entry_C_ExecuteUbergraph_MapSelect_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_132[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Sin_ReturnValue;                          // 0x10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x18(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_136[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x28(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_CustomEvent_IsSelected;                     // 0x30(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x32(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x33(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x34(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_139[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x38(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_1;        // 0x48(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_13C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x50(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x60(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Map_Find_Value;                           // 0x64(0x4)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_13E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x6C(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0xA4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xA8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_141[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0xB0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0xC0(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_142[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xD0(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

}
}


