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

// 0x29 (0x29 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnOptionSelected
struct UUI_CustomComboBoxOption_C_OnOptionSelected_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	int64                                        ID;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	TScriptInterface<class IBPI_CustomComboBoxInterface_C> K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface; // 0x18(0x10)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.UpdateHoveredOption
struct UUI_CustomComboBoxOption_C_UpdateHoveredOption_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item;                           // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_384A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnNavRight
struct UUI_CustomComboBoxOption_C_OnNavRight_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_384E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_384F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUI_SubMinusCategory_C*                K2Node_DynamicCast_AsUI_Sub__Category;             // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveArrow
struct UUI_CustomComboBoxOption_C_RemoveSpacingIfNotHaveArrow_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x52 (0x52 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.CheckIfSubCategorySelected
struct UUI_CustomComboBoxOption_C_CheckIfSubCategorySelected_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
	bool                                         IsSelected;                                        // 0x10(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_3856[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3857[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_SubOptions                    CallFunc_Array_Get_Item;                           // 0x28(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x51(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnUpdate
struct UUI_CustomComboBoxOption_C_OnUpdate_Params
{
public:
	double                                       CallFunc_BreakVector2D_X;                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x10(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_385B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x18(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ContinueUpdating
struct UUI_CustomComboBoxOption_C_ContinueUpdating_Params
{
public:
	bool                                         CallFunc_K2_TimerExists_ReturnValue;               // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3860[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnFail_2F79E7094E3FA19CAF12DEBE91370E8A
struct UUI_CustomComboBoxOption_C_OnFail_2F79E7094E3FA19CAF12DEBE91370E8A_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A
struct UUI_CustomComboBoxOption_C_OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.PreConstruct
struct UUI_CustomComboBoxOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event On Sub Option Clicked
struct UUI_CustomComboBoxOption_C_Event_On_Sub_Option_Clicked_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnAddedToFocusPath
struct UUI_CustomComboBoxOption_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnRemovedFromFocusPath
struct UUI_CustomComboBoxOption_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Update Navigation
struct UUI_CustomComboBoxOption_C_Event_Update_Navigation_Params
{
public:
	bool                                         IsLast;                                            // 0x0(0x1)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Tick
struct UUI_CustomComboBoxOption_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x728 (0x728 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ExecuteUbergraph_UI_CustomComboBoxOption
struct UUI_CustomComboBoxOption_C_ExecuteUbergraph_UI_CustomComboBoxOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class EUINavigationRule                 Temp_byte_Variable;                                // 0x5(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class EUINavigationRule                 Temp_byte_Variable_1;                              // 0x6(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x7(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable_2;                              // 0xA(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_387E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x40(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x48(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x49(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3880[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3881[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x78(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3883[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x98(0x58)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xF0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3884[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_CustomEvent_SubCategory;                    // 0xF8(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_CustomEvent_SubCategoryID;                  // 0x108(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x110(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3885[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x118(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x130(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x148(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x158(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CheckIfSubCategorySelected_IsSelected;    // 0x159(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3886[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0x15C(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_GetViewportScale_ReturnValue;             // 0x194(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_LocalToViewport_PixelPosition;            // 0x198(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_LocalToViewport_ViewportPosition;         // 0x1A8(0x10)(BlueprintVisible, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x1B8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x1C0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1D8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3887[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x1E0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1E8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1E9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3889[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1EC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1F0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_388A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x1F4(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x1FC(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_388B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x208(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_CustomEvent_IsLast;                         // 0x210(0x1)(ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_388D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_SubMinusCategories_Scroll_C*       CallFunc_Create_ReturnValue;                       // 0x218(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	enum class EUINavigationRule                 K2Node_Select_Default;                             // 0x220(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_388F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x224(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x234(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x235(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x236(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x237(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x238(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3890[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x23C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         Temp_bool_Variable_3;                              // 0x24C(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x24D(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3893[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x250(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x258(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x260(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x268(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x270(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x280(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x298(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x2B0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3895[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2B4(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2B8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x2B9(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3897[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x2BC(0x14)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	struct FSlateColor                           K2Node_Select_Default_3;                           // 0x2D0(0x14)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x2E4(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x31C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x320(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3899[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x330(0x3F0)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x720(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


