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

// 0xE15 (0xE15 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnEventBroadcasted
struct UUI_ModPage_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11C6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_11CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   NewInformation;                                    // 0x30(0x498)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   TempMod;                                           // 0x4C8(0x498)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x960(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x964(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x968(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x96C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_11D1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x970(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE08(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE0C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0xE14(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.GetClose_B
struct UUI_ModPage_C_GetClose_B_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_2
struct UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_2_Params
{
public:
	class UImage*                                IMG_Screenshot;                                    // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_1
struct UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_1_Params
{
public:
	class UImage*                                IMG_Screenshot;                                    // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_0
struct UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_0_Params
{
public:
	class UImage*                                IMG_Mod;                                           // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage
struct UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_Params
{
public:
	class UImage*                                IMG_Mod;                                           // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Update Purchase Button Enabled
struct UUI_ModPage_C_Update_Purchase_Button_Enabled_Params
{
public:
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x0(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1216[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function UI_ModPage.UI_ModPage_C.GetModInCurrentPagePurchased
struct UUI_ModPage_C_GetModInCurrentPagePurchased_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x1(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1221[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.DestroyPurchaseResponseHandle
struct UUI_ModPage_C_DestroyPurchaseResponseHandle_Params
{
public:
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UI_ModPage.UI_ModPage_C.GetIdOfModInCurrentPage
struct UUI_ModPage_C_GetIdOfModInCurrentPage_Params
{
public:
	int64                                        As_ID;                                             // 0x0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                As_Array;                                          // 0x8(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                K2Node_MakeArray_Array;                            // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1D (0x1D - 0x0)
// Function UI_ModPage.UI_ModPage_C.BPGamepadReleased
struct UUI_ModPage_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1B(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x1C(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.BPCycleHighlighted
struct UUI_ModPage_C_BPCycleHighlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.BPHighlightWidgetOnStart
struct UUI_ModPage_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.BPEscapeClosed
struct UUI_ModPage_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ShowCarouselButtons
struct UUI_ModPage_C_ShowCarouselButtons_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function UI_ModPage.UI_ModPage_C.GetScrrenshotPaginationText
struct UUI_ModPage_C_GetScrrenshotPaginationText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1307[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x20(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_130A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        K2Node_Select_Default;                             // 0x50(0x4)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_130C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x58(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x68(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetScreenshotImageTo
struct UUI_ModPage_C_SetScreenshotImageTo_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UI_ModPage.UI_ModPage_C.IfNoModCardsThenCollapse
struct UUI_ModPage_C_IfNoModCardsThenCollapse_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_132E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x8(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x18(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_132F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	uint8                                        Pad_1331[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x30(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1333[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1335[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateModCards
struct UUI_ModPage_C_UpdateModCards_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class EInstallStatus                    Temp_byte_Variable_2;                              // 0x2(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x5(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x6(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x7(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x9(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0xA(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, EditorOnly)
	enum class EInstallStatus                    Temp_byte_Variable_10;                             // 0xB(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0xD(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_12;                             // 0xE(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_13;                             // 0xF(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_14;                             // 0x10(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_15;                             // 0x11(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_16;                             // 0x12(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_17;                             // 0x13(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x14(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GetIsModValid_IsValid;                    // 0x15(0x1)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x16(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_GetIsModValid_IsValid_1;                  // 0x17(0x1)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x18(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x19(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x1A(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
};

// 0x3D (0x3D - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateModPaidState
struct UUI_ModPage_C_UpdateModPaidState_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_136E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xD(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xE(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_2;                              // 0xF(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x10(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x11(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         Temp_bool_Variable_3;                              // 0x12(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x13(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1374[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x18(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModValid_IsValid;                    // 0x30(0x1)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x31(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x33(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x34(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_1377[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Select_Default_2;                           // 0x38(0x4)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x3C(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.DebugScreenshotImageIndexing
struct UUI_ModPage_C_DebugScreenshotImageIndexing_Params
{
public:
	bool                                         Increase;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x64 (0x64 - 0x0)
// Function UI_ModPage.UI_ModPage_C.AddScreenshotToList
struct UUI_ModPage_C_AddScreenshotToList_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_1384[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FModAsset                             CallFunc_Array_Get_Item;                           // 0x8(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x60(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetFirstImageLoaded
struct UUI_ModPage_C_SetFirstImageLoaded_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_138C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetModVersion
struct UUI_ModPage_C_SetModVersion_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1394[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetModVersion_FinalAmount;                // 0x8(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C8 (0x1C8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InitAllVars
struct UUI_ModPage_C_InitAllVars_Params
{
public:
	int64                                        CallFunc_GetIdOfModInCurrentPage_As_ID;            // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                CallFunc_GetIdOfModInCurrentPage_As_Array;         // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x18(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13A7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x20(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_GetDownloadCount_FinalAmount;             // 0x38(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_GetModVersion_FinalAmount;                // 0x108(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_GetAuthorName_CombinedAuthorsNames;       // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x140(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x158(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_GetModName_Name;                          // 0x170(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreFileSize                       CallFunc_Get_Mod_Size_SizeStruct;                  // 0x180(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Get_Mod_Size_SizeInText;                  // 0x190(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Get_Mod_Size_bytes;                       // 0x1A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1B0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0x1A (0x1A - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotButtonsEnabled
struct UUI_ModPage_C_UpdateScreenshotButtonsEnabled_Params
{
public:
	class FText                                  CallFunc_GetScrrenshotPaginationText_ReturnValue;  // 0x0(0x18)(BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CanGoToNextImage_ReturnValue;             // 0x18(0x1)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CanGoToPreviousImage_ReturnValue;         // 0x19(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x13 (0x13 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CanGoToPreviousImage
struct UUI_ModPage_C_CanGoToPreviousImage_Params
{
public:
	int32                                        CurrentPage;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13B7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x8(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x11(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x13 (0x13 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CanGoToNextImage
struct UUI_ModPage_C_CanGoToNextImage_Params
{
public:
	int32                                        CurrentPage;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13C0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x11(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xE4 (0xE4 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateModUnavailableState
struct UUI_ModPage_C_UpdateModUnavailableState_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_13CB[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GetIsModAvailable_Is_Available;           // 0xE2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE3(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x12 (0x12 - 0x0)
// Function UI_ModPage.UI_ModPage_C.LaunchCommentsURL
struct UUI_ModPage_C_LaunchCommentsURL_Params
{
public:
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CanLaunchURL_ReturnValue_1;               // 0x11(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x27 (0x27 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ActionSwitch
struct UUI_ModPage_C_ActionSwitch_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1B(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x1E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x1F(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x21(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x22(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x23(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x24(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x25(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x26(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x18 (0x18 - 0x0)
// Function UI_ModPage.UI_ModPage_C.PlayAnimationThumbnail
struct UUI_ModPage_C_PlayAnimationThumbnail_Params
{
public:
	bool                                         AlreadyLoaded;                                     // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_13EF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x8(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.FindThumbnail
struct UUI_ModPage_C_FindThumbnail_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x9 (0x9 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetThumbnailImage
struct UUI_ModPage_C_SetThumbnailImage_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_ModPage.UI_ModPage_C.PlayStartinAnimation
struct UUI_ModPage_C_PlayStartinAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateCancelButtonState
struct UUI_ModPage_C_UpdateCancelButtonState_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x5(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x7(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateUninstallButtonState
struct UUI_ModPage_C_UpdateUninstallButtonState_Params
{
public:
	bool                                         CallFunc_GetIsModValid_IsValid;                    // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModAvailable_Is_Available;           // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.AssignLastUpdatedInformation
struct UUI_ModPage_C_AssignLastUpdatedInformation_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1404[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetDay_ReturnValue;                       // 0x4(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetYear_ReturnValue;                      // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1405[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1406[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x38(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_GetMonth_ReturnValue;                     // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1407[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x50(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x80(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Init All Widget Refs
struct UUI_ModPage_C_Init_All_Widget_Refs_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CloseBNavigation
struct UUI_ModPage_C_CloseBNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1418[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InstallBCustomNavigation
struct UUI_ModPage_C_InstallBCustomNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_141E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class UUI_StoreMenu_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetSubCategories
struct UUI_ModPage_C_SetSubCategories_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1427[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Option_ModPageCategory_C*          CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FCategory                             CallFunc_Array_Get_Item;                           // 0x28(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1428[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_142B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x2D (0x2D - 0x0)
// Function UI_ModPage.UI_ModPage_C.CheckIfHideReadMoreButton
struct UUI_ModPage_C_CheckIfHideReadMoreButton_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1432[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x160 (0x160 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ShortenModeDownloads
struct UUI_ModPage_C_ShortenModeDownloads_Params
{
public:
	int64                                        Downloads;                                         // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ShortenDownloads;                                  // 0x8(0x18)(ConstParm, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  _currentSuffix;                                    // 0x20(0x18)(ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	double                                       _currentDownloads;                                 // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_1442[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x50(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x60(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x61(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_1447[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	uint8                                        Pad_1448[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0xC8(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0xD0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE8(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x138(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x148(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotImage
struct UUI_ModPage_C_UpdateScreenshotImage_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1453[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetDateAdded
struct UUI_ModPage_C_SetDateAdded_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1463[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetDay_ReturnValue;                       // 0x4(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetYear_ReturnValue;                      // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1464[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1465[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x38(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_GetMonth_ReturnValue;                     // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1468[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x50(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x80(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x12 (0x12 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InitModPageDefault
struct UUI_ModPage_C_InitModPageDefault_Params
{
public:
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_InitializeModView_ReturnValue;            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x11(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x16A (0x16A - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnMouseButtonDown
struct UUI_ModPage_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x169(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnFail_13897D64427114E2F64F66A69E6EA523
struct UUI_ModPage_C_OnFail_13897D64427114E2F64F66A69E6EA523_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccess_13897D64427114E2F64F66A69E6EA523
struct UUI_ModPage_C_OnSuccess_13897D64427114E2F64F66A69E6EA523_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA
struct UUI_ModPage_C_OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA
struct UUI_ModPage_C_OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4
struct UUI_ModPage_C_OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4
struct UUI_ModPage_C_OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSearch
struct UUI_ModPage_C_OnSearch_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateSearch
struct UUI_ModPage_C_UpdateSearch_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Animation_UpdateThumbnail
struct UUI_ModPage_C_Animation_UpdateThumbnail_Params
{
public:
	class UImage*                                IMG_Mod;                                           // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Animation_ScreenshotLoaded
struct UUI_ModPage_C_Animation_ScreenshotLoaded_Params
{
public:
	class UImage*                                IMG_Screenshot;                                    // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Animation_SwapImage
struct UUI_ModPage_C_Animation_SwapImage_Params
{
public:
	class UImage*                                IMG_Screenshot;                                    // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent
struct UUI_ModPage_C_CustomEvent_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_1
struct UUI_ModPage_C_CustomEvent_1_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x3C (0x3C - 0x0)
// Function UI_ModPage.UI_ModPage_C.Tick
struct UUI_ModPage_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ButtonCall
struct UUI_ModPage_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnCategoryResults
struct UUI_ModPage_C_OnCategoryResults_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnCategoryError
struct UUI_ModPage_C_OnCategoryError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnDescriptionError
struct UUI_ModPage_C_OnDescriptionError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_0
struct UUI_ModPage_C_CustomEvent_0_Params
{
public:
	class FString                                Description;                                       // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_3
struct UUI_ModPage_C_CustomEvent_3_Params
{
public:
	class FString                                Temp_user_token;                                   // 0x0(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_4
struct UUI_ModPage_C_CustomEvent_4_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InitModByID
struct UUI_ModPage_C_InitModByID_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SuccessIGuess
struct UUI_ModPage_C_SuccessIGuess_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x1A0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.How could we possibly ever fail
struct UUI_ModPage_C_How_could_we_possibly_ever_fail_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Event On CFCore Init Error
struct UUI_ModPage_C_Event_On_CFCore_Init_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Event On Sync Installed Mods Error
struct UUI_ModPage_C_Event_On_Sync_Installed_Mods_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccessGeneratePremium
struct UUI_ModPage_C_OnSuccessGeneratePremium_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnErrorGeneratePremium
struct UUI_ModPage_C_OnErrorGeneratePremium_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccessPremiumModsCheck
struct UUI_ModPage_C_OnSuccessPremiumModsCheck_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.FailedPremiumModsChecks
struct UUI_ModPage_C_FailedPremiumModsChecks_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Success
struct UUI_ModPage_C_Success_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnError
struct UUI_ModPage_C_OnError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10EC (0x10EC - 0x0)
// Function UI_ModPage.UI_ModPage_C.ExecuteUbergraph_UI_ModPage
struct UUI_ModPage_C_ExecuteUbergraph_UI_ModPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_15F4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x40(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_15FD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x58(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x60(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x61(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_1600[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x68(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x78(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x88(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x98(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xA8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xC0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_2;         // 0xD0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xD8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xD9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_1610[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_3;         // 0xE0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xE8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xF8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_4;         // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Variable;                                 // 0x110(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x114(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_1616[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Prompt_Uninstall_C*                CallFunc_Create_ReturnValue;                       // 0x128(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FString                                Temp_string_Variable;                              // 0x130(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x140(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1619[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x144(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x154(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_161C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Event_Search_Input;                         // 0x168(0x18)(BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  K2Node_Event_SearchInput;                          // 0x180(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                K2Node_CustomEvent_IMG_Mod;                        // 0x198(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x1A0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1B0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_1624[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UImage*                                K2Node_CustomEvent_IMG_Screenshot_1;               // 0x1B8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                K2Node_CustomEvent_IMG_Screenshot;                 // 0x1C0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item;                           // 0x1C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_5;         // 0x1D0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item_1;                         // 0x1D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1E0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1F0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x200(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x210(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x220(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x224(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x228(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	uint8                                        Pad_162F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x22C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x230(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x240(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x258(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x268(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x278(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_StringLimit_NewString_1;                  // 0x288(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x298(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x2B0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo;                    // 0x2C8(0x20)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_9;                        // 0x2E8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_6;         // 0x320(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x328(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x338(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_GetIsModAvailable_Is_Available;           // 0x339(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_163D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x33C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	struct FModAsset                             CallFunc_Array_Get_Item_2;                         // 0x340(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x398(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x39C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39D(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x39E(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x39F(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	int32                                        Temp_int_Variable_1;                               // 0x3A0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x3A4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_1642[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x3B8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x3C0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x3C1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x3C2(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3C3(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanGoToPreviousImage_ReturnValue;         // 0x3C4(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CanGoToNextImage_ReturnValue;             // 0x3C5(0x1)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1646[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x3C8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	class UUI_Prompt_GoToComments_C*             CallFunc_Create_ReturnValue_1;                     // 0x3D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x3E0(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x418(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x41C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x420(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_164C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ZoomImage_C*                       CallFunc_Create_ReturnValue_2;                     // 0x428(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_7;         // 0x430(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x438(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x450(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x451(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_1651[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x458(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	TArray<struct FCategory>                     K2Node_CustomEvent_categories;                     // 0x470(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue_1;              // 0x480(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FCategory                             CallFunc_Array_Get_Item_3;                         // 0x488(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x500(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_1657[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue_2;              // 0x508(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x510(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_1658[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x518(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x530(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x534(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x538(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x539(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x53A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_165E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x53C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x540(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x541(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_1661[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error_8;                        // 0x548(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue_8;         // 0x580(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x588(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x590(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x5A0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_9;         // 0x5B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x5B8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue_10;        // 0x5C0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x5C8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x5D8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x5E0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
	uint8                                        Pad_166A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x5E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_7;                        // 0x5F0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x628(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	class FString                                K2Node_CustomEvent_description;                    // 0x638(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x648(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                K2Node_Select_Default;                             // 0x650(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x660(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x678(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	class FString                                K2Node_CustomEvent_temp_user_token;                // 0x688(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x698(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x6A8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x6C0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x6D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error_6;                        // 0x6E0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x718(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x728(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x729(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1672[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        K2Node_CustomEvent_modId;                          // 0x730(0x8)(Edit, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0x738(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	struct FCFCoreMod                            K2Node_CustomEvent_mod;                            // 0x748(0x1A0)(BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_MakeFInstallProgressMod_ReturnValue;      // 0x8E8(0x498)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_5;                        // 0xD80(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	struct FCFCoreError                          K2Node_CustomEvent_error_4;                        // 0xDB8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	struct FCFCoreSettings                       CallFunc_MakeSettingsFromProjectConfig_ReturnValue; // 0xDF0(0x88)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xE78(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTexture2DDynamic*                     Temp_object_Variable_1;                            // 0xE80(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_2;                      // 0xE88(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error_3;                        // 0xE90(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0xEC8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class UTexture2DDynamic*                     Temp_object_Variable_2;                            // 0xED8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable_2;                               // 0xEE0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_167E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_4;                      // 0xEE8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_3;                      // 0xEF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FString                                K2Node_CustomEvent_url;                            // 0xEF8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_2;                        // 0xF08(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_CanLaunchURL_ReturnValue_1;               // 0xF40(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_1695[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_GetIdOfModInCurrentPage_As_ID;            // 0xF48(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                CallFunc_GetIdOfModInCurrentPage_As_Array;         // 0xF50(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0xF60(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	struct FGenPremiumCheckoutUrlRequest         K2Node_MakeStruct_GenPremiumCheckoutUrlRequest;    // 0xF70(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                K2Node_CustomEvent_ModIds_1;                       // 0xF80(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error_1;                        // 0xF90(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xFC8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace; // 0xFD0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_169A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0xFD4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_169B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_GetIdOfModInCurrentPage_As_ID_1;          // 0xFE8(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	TArray<int64>                                CallFunc_GetIdOfModInCurrentPage_As_Array_1;       // 0xFF0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	int64                                        CallFunc_GetIdOfModInCurrentPage_As_ID_2;          // 0x1000(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	TArray<int64>                                CallFunc_GetIdOfModInCurrentPage_As_Array_2;       // 0x1008(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0x1018(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_30;           // 0x1028(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	TArray<int64>                                K2Node_CustomEvent_ModIds;                         // 0x1038(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x1048(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_11;        // 0x1080(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x1088(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	int64                                        CallFunc_GetIdOfModInCurrentPage_As_ID_3;          // 0x1090(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	TArray<int64>                                CallFunc_GetIdOfModInCurrentPage_As_Array_3;       // 0x1098(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x10A8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
	bool                                         CallFunc_DidAllTheModsGetBought_ReturnValue;       // 0x10A9(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetModInCurrentPagePurchased_ReturnValue; // 0x10AA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x10AB(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x10AC(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x10AD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16AC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x10B0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x10B8(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_5;                      // 0x10C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output;                   // 0x10D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x10D8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_16AF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_31;           // 0x10DC(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


