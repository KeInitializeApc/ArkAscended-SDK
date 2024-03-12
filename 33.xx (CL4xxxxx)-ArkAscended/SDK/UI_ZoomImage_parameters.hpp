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

// 0x8 (0x8 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.SequenceEvent__ENTRYPOINTUI_ZoomImage
struct UUI_ZoomImage_C_SequenceEvent__ENTRYPOINTUI_ZoomImage_Params
{
public:
	class UImage*                                IMG_ScreenshotImg;                                 // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.BPGamepadReleased
struct UUI_ZoomImage_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x1 (0x1 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.BPEscapeClosed
struct UUI_ZoomImage_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.BPHighlightWidgetOnStart
struct UUI_ZoomImage_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.BPCycleHighlighted
struct UUI_ZoomImage_C_BPCycleHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.PlayFadeInOnBeginPlayAnim
struct UUI_ZoomImage_C_PlayFadeInOnBeginPlayAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateToCurrentImage
struct UUI_ZoomImage_C_UpdateToCurrentImage_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_19A1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UTexture2DDynamic*>             CallFunc_GetScreenshotsInfo_Screenshots;           // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CallFunc_GetScreenshotsInfo_Descriptions;          // 0x18(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item;                           // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x21 (0x21 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.GetScreenshotsInfo
struct UUI_ZoomImage_C_GetScreenshotsInfo_Params
{
public:
	TArray<class UTexture2DDynamic*>             Screenshots;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FString>                        Descriptions;                                      // 0x10(0x10)(BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotDescription
struct UUI_ZoomImage_C_UpdateScreenshotDescription_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_19AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UTexture2DDynamic*>             CallFunc_GetScreenshotsInfo_Screenshots;           // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CallFunc_GetScreenshotsInfo_Descriptions;          // 0x18(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item;                           // 0x28(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdatePageCounter
struct UUI_ZoomImage_C_UpdatePageCounter_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_19B0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetScrrenshotPaginationText_ReturnValue;  // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotImage
struct UUI_ZoomImage_C_UpdateScreenshotImage_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_19B3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTexture2DDynamic*>             CallFunc_GetScreenshotsInfo_Screenshots;           // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CallFunc_GetScreenshotsInfo_Descriptions;          // 0x20(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x2B (0x2B - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateButtonsStyle
struct UUI_ZoomImage_C_UpdateButtonsStyle_Params
{
public:
	TArray<class UTexture2DDynamic*>             CallFunc_GetScreenshotsInfo_Screenshots;           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CallFunc_GetScreenshotsInfo_Descriptions;          // 0x10(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x24(0x4)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x29(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2A(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0x158 (0x158 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.OnKeyDown
struct UUI_ZoomImage_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x149(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19BF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x150(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.Animation_SwapBetweenImages
struct UUI_ZoomImage_C_Animation_SwapBetweenImages_Params
{
public:
	class UImage*                                IMG_ScreenshotImg;                                 // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.ButtonCall
struct UUI_ZoomImage_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
};

// 0x3C (0x3C - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.Tick
struct UUI_ZoomImage_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.ExecuteUbergraph_UI_ZoomImage
struct UUI_ZoomImage_C_ExecuteUbergraph_UI_ZoomImage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                K2Node_CustomEvent_IMG_ScreenshotImg;              // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_19E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x30(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x49(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x4A(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x4B(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x4C(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4D(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_CanGoToNextImage_ReturnValue;             // 0x4E(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CanGoToPreviousImage_ReturnValue;         // 0x4F(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x60(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_19EA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x6C(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0xA4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


