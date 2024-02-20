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

// 0x18 (0x18 - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetWidgetText
struct UUI_Button_Ark_Global_Base_C_SetWidgetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x44 (0x44 - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetButtonColorPreset
struct UUI_Button_Ark_Global_Base_C_SetButtonColorPreset_Params
{
public:
	enum class ENUM_ButtonStates                 State;                                             // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	enum class ENUM_ButtonStates                 Temp_byte_Variable;                                // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENUM_ButtonStates                 Temp_byte_Variable_1;                              // 0x3(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ENUM_ButtonStates                 Temp_byte_Variable_2;                              // 0x4(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2D53[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_Select_Default;                             // 0x8(0x14)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x1C(0x14)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x30(0x14)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
};

// 0xF0 (0xF0 - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetFillToColor
struct UUI_Button_Ark_Global_Base_C_SetFillToColor_Params
{
public:
	struct FSlateColor                           TintColor;                                         // 0x0(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2D58[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetBorderToColor
struct UUI_Button_Ark_Global_Base_C_SetBorderToColor_Params
{
public:
	struct FSlateColor                           TintColor;                                         // 0x0(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.PreConstruct
struct UUI_Button_Ark_Global_Base_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.Tick
struct UUI_Button_Ark_Global_Base_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xDC (0xDC - 0x0)
// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.ExecuteUbergraph_UI_Button_Ark_Global_Base
struct UUI_Button_Ark_Global_Base_C_ExecuteUbergraph_UI_Button_Ark_Global_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2D5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	enum class ENUM_ButtonType                   Temp_byte_Variable;                                // 0x10(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2D5F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x18(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
	class UTexture2D*                            Temp_object_Variable_2;                            // 0x20(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x28(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x2B(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x2C(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x2D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D61[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_Select_Default;                             // 0x30(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ENUM_ButtonType                   Temp_byte_Variable_1;                              // 0x38(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2D62[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Temp_object_Variable_3;                            // 0x40(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x48(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x80(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2D63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_Select_Default_1;                           // 0x88(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x90(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2D64[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x98(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0xA8(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2D65[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0xB0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0xC8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2D66[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xD4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast; // 0xD8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


