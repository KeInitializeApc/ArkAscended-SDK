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
// Function MapSelect_Session.MapSelect_Session_C.SearchAndCreateModMaps
struct UMapSelect_Session_C_SearchAndCreateModMaps_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3407[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UDataListEntryButton_HostSession*> CallFunc_GetModMaps_ReturnValue;                   // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    CallFunc_Create_ReturnValue;                       // 0x20(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3409[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x43 (0x43 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.Select Map Button Clicked
struct UMapSelect_Session_C_Select_Map_Button_Clicked_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_340C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_340D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_340E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x35(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x36(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_340F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GenericConfirmationDialog*         CallFunc_ShowDLCConfirmationDialog_ReturnValue;    // 0x38(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_DoesOwnSelectedDLC_ReturnValue;           // 0x40(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x41(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsSelected_Selected;                      // 0x42(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x32 (0x32 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.GetSelectedMapIndex
struct UMapSelect_Session_C_GetSelectedMapIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3411[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsSelected_Selected;                      // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.SetSelectedMapIndex
struct UMapSelect_Session_C_SetSelectedMapIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_3415[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3416[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3418[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x30(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.ScrollToHoveredItem
struct UMapSelect_Session_C_ScrollToHoveredItem_Params
{
public:
	class UMapSelect_Entry_C*                    EntryHovered;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x34C (0x34C - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.OnMouseMove
struct UMapSelect_Session_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector2D                             CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x168(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x178(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_341E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0x180(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x188(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x190(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x194(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x195(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3421[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x198(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_PointerEvent_IsTouchEvent_ReturnValue;    // 0x1A0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3423[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x1A8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x1B0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1B8(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x270(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x278(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x280(0xB8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_FMin_B_ImplicitCast;                      // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x348(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2E0 (0x2E0 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.OnMouseButtonDown
struct UMapSelect_Session_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x168(0xB8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x220(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3427[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x36 (0x36 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.Set Selected Map Entry
struct UMapSelect_Session_C_Set_Selected_Map_Entry_Params
{
public:
	class UMapSelect_Entry_C*                    Entry;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_342B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x34(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x35(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.GetMapSelectEntries
struct UMapSelect_Session_C_GetMapSelectEntries_Params
{
public:
	TArray<class UMapSelect_Entry_C*>            MapSelectEntries;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMapSelect_Entry_C*>            TempMapSelectEntries;                              // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_342E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_342F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x48(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3430[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMapSelect_Entry_C*                    K2Node_DynamicCast_AsMap_Select_Entry;             // 0x58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3432[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x64(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.Tick
struct UMapSelect_Session_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.ExecuteUbergraph_MapSelect_Session
struct UMapSelect_Session_C_ExecuteUbergraph_MapSelect_Session_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x48(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

}
}


