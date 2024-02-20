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
// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.UpdateThemeSettings
struct UUI_Option_ModPageCategory_C_UpdateThemeSettings_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.OnFail_20B338B847EF646EF76186BFC4DF1AD5
struct UUI_Option_ModPageCategory_C_OnFail_20B338B847EF646EF76186BFC4DF1AD5_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.OnSuccess_20B338B847EF646EF76186BFC4DF1AD5
struct UUI_Option_ModPageCategory_C_OnSuccess_20B338B847EF646EF76186BFC4DF1AD5_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x62 (0x62 - 0x0)
// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.ExecuteUbergraph_UI_Option_ModPageCategory
struct UUI_Option_ModPageCategory_C_ExecuteUbergraph_UI_Option_ModPageCategory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x48(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38FF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x58(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x61(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


