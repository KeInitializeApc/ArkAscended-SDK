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

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.GetIsNVidiaDLSSEnabled
struct UOptionsMenu_C_GetIsNVidiaDLSSEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_34EC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetSelectedOption_ReturnValue;            // 0x8(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x18(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_NVIDIA_Feature_Visibility
struct UOptionsMenu_C_Get_NVIDIA_Feature_Visibility_Params
{
public:
	enum class ESlateVisibility                  Return_Value;                                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CanShowNvidiaPanel_ReturnValue;           // 0x1(0x1)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.PopulateSROptions
struct UOptionsMenu_C_PopulateSROptions_Params
{
public:
	bool                                         CallFunc_IsDLSSModeSupported_ReturnValue;          // 0x0(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_RemoveOption_ReturnValue;                 // 0x1(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Update Available Anti Alias Options
struct UOptionsMenu_C_Update_Available_Anti_Alias_Options_Params
{
public:
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_RemoveOption_ReturnValue;                 // 0x8(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetDLSSSupported_ReturnValue;             // 0x9(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_VideoTooltipRoot_Visibility
struct UOptionsMenu_C_Get_VideoTooltipRoot_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_34ED[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_Visibility
struct UOptionsMenu_C_Get_ChangesText_1_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_34EF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_bIsEnabled
struct UOptionsMenu_C_Get_ChangesText_1_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1F (0x1F - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetOptions_Visibility
struct UOptionsMenu_C_Get_ResetOptions_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_34F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x14(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x16(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x18(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1D(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x2D (0x2D - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetGraphics_Visibility
struct UOptionsMenu_C_Get_ResetGraphics_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3500[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x11(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3502[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x18(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x28(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x29(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x17 (0x17 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetAudio_Visibility
struct UOptionsMenu_C_Get_ResetAudio_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3507[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x14(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetKeybinding_Visibility
struct UOptionsMenu_C_Get_ResetKeybinding_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_350D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_RtxTooltipRoot_Visibility
struct UOptionsMenu_C_Get_RtxTooltipRoot_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_350F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x21E (0x21E - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateDLSSFeatures_Status
struct UOptionsMenu_C_UpdateDLSSFeatures_Status_Params
{
public:
	bool                                         bNoErrors;                                         // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3511[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  ReflexText;                                        // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  SuperResolutionText;                               // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  FrameGenerationText;                               // 0x38(0x18)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryReflexSupport_ReturnValue;           // 0x50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EUDLSSSupport                     CallFunc_QueryDLSSSupport_ReturnValue;             // 0x51(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x53(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryDLSSGSupport_ReturnValue;            // 0x54(0x1)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3512[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetNewlineCharacter_ReturnValue;          // 0x58(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x68(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3513[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3514[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x90(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3516[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x138(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x188(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x1E8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x200(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryReflexSupport_ReturnValue_1;         // 0x218(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class EUDLSSSupport                     CallFunc_QueryDLSSSupport_ReturnValue_1;           // 0x219(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x21B(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryDLSSGSupport_ReturnValue_1;          // 0x21C(0x1)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x21D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0xA (0xA - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_AntiAlias_bIsEnabled
struct UOptionsMenu_C_Get_AntiAlias_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3518[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x8(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0xB (0xB - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResolutionScaleSlider_bIsEnabled
struct UOptionsMenu_C_Get_ResolutionScaleSlider_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetIsNVidiaDLSSEnabled_ReturnValue;       // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3519[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x8(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_SuperResolution_bIsEnabled
struct UOptionsMenu_C_Get_SuperResolution_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetIsNVidiaDLSSEnabled_ReturnValue;       // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsDLSSSupported_ReturnValue;              // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x7 (0x7 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaReflexLowLatency_bIsEnabled
struct UOptionsMenu_C_Get_UseNvidiaReflexLowLatency_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsStreamlineFeatureSupported_ReturnValue; // 0x1(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x3(0x1)(ConstParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x6 (0x6 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseFrameGeneration_bIsEnabled
struct UOptionsMenu_C_Get_UseFrameGeneration_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetIsNVidiaDLSSEnabled_ReturnValue;       // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsStreamlineFeatureSupported_ReturnValue; // 0x2(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x3(0x1)(ConstParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaDlss_bIsEnabled
struct UOptionsMenu_C_Get_UseNvidiaDlss_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3527[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GetDLSSSupported_ReturnValue;             // 0x10(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.CanShowNvidiaPanel
struct UOptionsMenu_C_CanShowNvidiaPanel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsPC_ReturnValue;                         // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsNvidiaGraphicCard_ReturnValue;          // 0x2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF (0xF - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled
struct UOptionsMenu_C_Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3529[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xD(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateChangedValueButton
struct UOptionsMenu_C_UpdateChangedValueButton_Params
{
public:
	bool                                         bHasChangedAnyValue;                               // 0x0(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x258 (0x258 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.OnKeyDownEvent
struct UOptionsMenu_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu;                                      // 0x130(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x138(0x18)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x168(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x220(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3530[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x228(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x230(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x238(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x239(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3531[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x23C(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x240(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x241(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x242(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3532[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget_2;                    // 0x248(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UWidget*                               CallFunc_SwitchButton_Widget_3;                    // 0x250(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.NotIsNewCameraEnabled
struct UOptionsMenu_C_NotIsNewCameraEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsNewCameraEnabled_ReturnValue;           // 0x1(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x59 (0x59 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateGamepadControlsTab
struct UOptionsMenu_C_UpdateGamepadControlsTab_Params
{
public:
	class UPrimalGlobalUIData*                   UIDataLocal;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            LocalBGImage;                                      // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x10(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x20(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_353A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue;       // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalGlobalUIData*                   K2Node_DynamicCast_AsPrimal_Global_UIData;         // 0x38(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_353B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x48(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x58(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ForceTPVCameraOffsetCheckbox_bIsEnabled
struct UOptionsMenu_C_Get_ForceTPVCameraOffsetCheckbox_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsNewCameraEnabled_ReturnValue;           // 0x1(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.IsNewCameraEnabled
struct UOptionsMenu_C_IsNewCameraEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_353D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Tick
struct UOptionsMenu_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.SetNVidiaDLSSEnabled
struct UOptionsMenu_C_SetNVidiaDLSSEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
};

// 0x6EC (0x6EC - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_35A4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_21;        // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_21;       // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_35A5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_20;        // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_20;       // 0x50(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	uint8                                        Pad_35A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_19;        // 0x58(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_19;       // 0x68(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
	uint8                                        Pad_35A7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_18;        // 0x70(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_18;       // 0x80(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_35A9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_17;        // 0x88(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_17;       // 0x98(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NoDestructor)
	uint8                                        Pad_35AA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_16;        // 0xA0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_16;       // 0xB0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
	uint8                                        Pad_35AB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xB4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_7;          // 0xB8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0xD0(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	uint8                                        Pad_35AC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_6;          // 0xD8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0xF0(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_35AD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_5;          // 0xF8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x110(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_35AE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_4;          // 0x118(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x130(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_35B0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_3;          // 0x138(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x150(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_35B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_2;          // 0x158(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0x170(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_UseConsoleVideoOptions_ReturnValue;       // 0x174(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35B2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_15;        // 0x178(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_15;       // 0x188(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NoDestructor)
	uint8                                        Pad_35B4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color_2;                // 0x18C(0x10)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35B5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_1;          // 0x1A0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x1B8(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_35B6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1C0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x1D0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1D8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_35BA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x1E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x1E8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1F0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_35BB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x1F8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue;            // 0x208(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x220(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35BC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x228(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x238(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x240(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x250(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x251(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x252(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_35BD[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Create_ReturnValue;                       // 0x258(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UVisualSettings_MainMenuUI_ASA_C*      K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA; // 0x260(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x268(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_35BE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x270(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x280(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x290(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_35BF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Array_Get_Item;                           // 0x298(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2A0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_35C0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x2A8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x2B8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_35C2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x2BC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	class UPrimalUI*                             CallFunc_Array_Get_Item_1;                         // 0x2C0(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x2C8(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_35C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x2D0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2D8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2DC(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2DD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_35C5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2E0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35C7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_1;                      // 0x2E8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color_1;                // 0x2F0(0x10)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x300(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_35C8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color;                  // 0x304(0x10)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_14;        // 0x318(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_14;       // 0x328(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_35CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x330(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x348(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x350(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x368(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_35CC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_13;        // 0x370(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_13;       // 0x380(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_35CE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_12;        // 0x388(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_12;       // 0x398(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x399(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_35D0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x3A0(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x3B8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_35D2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_11;        // 0x3C0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_11;       // 0x3D0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_35D3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_10;        // 0x3D8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_10;       // 0x3E8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_35D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_9;         // 0x3F0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_9;        // 0x400(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_35D6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_8;         // 0x408(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_8;        // 0x418(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_35D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_7;         // 0x420(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_7;        // 0x430(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x431(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_35D8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x434(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x46C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x470(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_35DA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x474(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x478(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x479(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x47A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_35DB[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x480(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	TArray<class UDataListButtonVariable_Widget_ASA_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x4F8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x508(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35DC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_2;            // 0x510(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_2;        // 0x520(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_6;         // 0x528(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_6;        // 0x538(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_35DE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x53C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x540(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_35DF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x544(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x548(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_35E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UDataListButtonVariable_Widget_ASA_C*  CallFunc_Array_Get_Item_2;                         // 0x550(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_CanShowNvidiaPanel_ReturnValue;           // 0x558(0x1)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35E1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_5;         // 0x560(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_5;        // 0x570(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_35E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_4;         // 0x578(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_4;        // 0x588(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_35E5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_3;            // 0x590(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x5A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x5A8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_35E6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x5B0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x5B8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_35E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_3;         // 0x5C0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_3;        // 0x5D0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_35EA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x5D8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_2;        // 0x5E8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35EB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x5F0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_1;        // 0x600(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_35ED[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x608(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x618(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35EE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetUserSettings_ReturnValue;              // 0x620(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetDLSSModeIndex_ReturnValue;             // 0x628(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35EF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x630(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalUI*                             CallFunc_Create_ReturnValue_1;                     // 0x640(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UVisualSettings_MainMenuUI_ASA_C*      K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA_1; // 0x648(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x650(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_35F0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;      // 0x658(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;      // 0x668(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UPrimalUI*                             CallFunc_Array_Get_Item_3;                         // 0x678(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	class UPrimalUI*                             CallFunc_Array_Get_Item_4;                         // 0x680(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x688(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_35F4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x68C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x690(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x694(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x695(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_35F6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x698(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_35F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_2;                      // 0x6A0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6A8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x6A9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_35F9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x6AC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_3;                      // 0x6B0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x6B8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_35FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6BC(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_35FB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetButtonAtIndex_Button;                  // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bEnabled;                             // 0x6D8(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6D9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_UseConsoleVideoOptions_ReturnValue_1;     // 0x6DA(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_35FE[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetButtonAtIndex_Button_1;                // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x6E8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


