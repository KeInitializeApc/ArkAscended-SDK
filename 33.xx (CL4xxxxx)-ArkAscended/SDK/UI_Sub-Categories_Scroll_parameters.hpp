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

// 0x149 (0x149 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnKeyDown
struct UUI_SubMinusCategories_Scroll_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event On Subcategory Select Event
struct UUI_SubMinusCategories_Scroll_C_Event_On_Subcategory_Select_Event_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Check If Selected
struct UUI_SubMinusCategories_Scroll_C_Event_Check_If_Selected_Params
{
public:
	class UUI_SubMinusCategory_C*                SubCategoryWidget_Ref;                             // 0x0(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Text;                                              // 0x8(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnRemovedFromFocusPath
struct UUI_SubMinusCategories_Scroll_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnAddedToFocusPath
struct UUI_SubMinusCategories_Scroll_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x119 (0x119 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.ExecuteUbergraph_UI_Sub-Categories_Scroll
struct UUI_SubMinusCategories_Scroll_C_ExecuteUbergraph_UI_SubMinusCategories_Scroll_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_38B5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_SubMinusCategory_C*                CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FString                                K2Node_CustomEvent_SubCategory;                    // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_CustomEvent_SubCategoryID;                  // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_SubMinusCategory_C*                K2Node_CustomEvent_SubCategoryWidget_Ref;          // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_CustomEvent_Text;                           // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38B8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38B9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x94(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_38BA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0xC0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FSTRUCT_SubOptions                    CallFunc_Array_Get_Item;                           // 0xC8(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38BB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xF8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x110(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x118(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnSubcategorySelect__DelegateSignature
struct UUI_SubMinusCategories_Scroll_C_OnSubcategorySelect__DelegateSignature_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


