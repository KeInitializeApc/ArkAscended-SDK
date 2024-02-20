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

// 0x9 (0x9 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_Visibility
struct UOptionsMenu_C_Get_ChangesText_1_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AE8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_bIsEnabled
struct UOptionsMenu_C_Get_ChangesText_1_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1F (0x1F - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetOptions_Visibility
struct UOptionsMenu_C_Get_ResetOptions_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AEB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x16(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x18(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x2D (0x2D - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetGraphics_Visibility
struct UOptionsMenu_C_Get_ResetGraphics_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AEE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AF2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x18(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x29(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2C(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x17 (0x17 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetAudio_Visibility
struct UOptionsMenu_C_Get_ResetAudio_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AF5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetKeybinding_Visibility
struct UOptionsMenu_C_Get_ResetKeybinding_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AF7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_RtxTooltipRoot_Visibility
struct UOptionsMenu_C_Get_RtxTooltipRoot_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AFC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x206 (0x206 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateDLSSFeatures_Status
struct UOptionsMenu_C_UpdateDLSSFeatures_Status_Params
{
public:
	bool                                         bNoErrors;                                         // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B11[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  ReflexText;                                        // 0x8(0x18)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  SuperResolutionText;                               // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  FrameGenerationText;                               // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryReflexSupport_ReturnValue;           // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EUDLSSSupport                     CallFunc_QueryDLSSSupport_ReturnValue;             // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x53(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryDLSSGSupport_ReturnValue;            // 0x54(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B14[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetNewlineCharacter_ReturnValue;          // 0x58(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x68(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3B15[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B16[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x90(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xE0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3B18[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE8(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x138(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x188(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1E8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryReflexSupport_ReturnValue_1;         // 0x200(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class EUDLSSSupport                     CallFunc_QueryDLSSSupport_ReturnValue_1;           // 0x201(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x202(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x203(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryDLSSGSupport_ReturnValue_1;          // 0x204(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x205(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, RepNotify, Interp)
};

// 0xD (0xD - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_AntiAlias_bIsEnabled
struct UOptionsMenu_C_Get_AntiAlias_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B1C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResolutionScaleSlider_bIsEnabled
struct UOptionsMenu_C_Get_ResolutionScaleSlider_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B23[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_SuperResolution_bIsEnabled
struct UOptionsMenu_C_Get_SuperResolution_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDLSSSupported_ReturnValue;              // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x3(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x7 (0x7 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaReflexLowLatency_bIsEnabled
struct UOptionsMenu_C_Get_UseNvidiaReflexLowLatency_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsStreamlineFeatureSupported_ReturnValue; // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x3(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseFrameGeneration_bIsEnabled
struct UOptionsMenu_C_Get_UseFrameGeneration_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue_1;               // 0x2(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsStreamlineFeatureSupported_ReturnValue; // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaDlss_bIsEnabled
struct UOptionsMenu_C_Get_UseNvidiaDlss_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B2A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_GetDLSSSupported_ReturnValue;             // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.CanShowNvidiaPanel
struct UOptionsMenu_C_CanShowNvidiaPanel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsPC_ReturnValue;                         // 0x1(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsNvidiaGraphicCard_ReturnValue;          // 0x2(0x1)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF (0xF - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled
struct UOptionsMenu_C_Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B2F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xD(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateChangedValueButton
struct UOptionsMenu_C_UpdateChangedValueButton_Params
{
public:
	bool                                         bHasChangedAnyValue;                               // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x258 (0x258 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.OnKeyDownEvent
struct UOptionsMenu_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu;                                      // 0x130(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x138(0x18)(ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x168(0xB8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x220(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B3D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x238(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x239(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3B3E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x23C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x240(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x241(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x242(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3B3F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget_2;                    // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UWidget*                               CallFunc_SwitchButton_Widget_3;                    // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.NotIsNewCameraEnabled
struct UOptionsMenu_C_NotIsNewCameraEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsNewCameraEnabled_ReturnValue;           // 0x1(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x59 (0x59 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateGamepadControlsTab
struct UOptionsMenu_C_UpdateGamepadControlsTab_Params
{
public:
	class UPrimalGlobalUIData*                   UIDataLocal;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            LocalBGImage;                                      // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x10(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x20(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B45[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue;       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalGlobalUIData*                   K2Node_DynamicCast_AsPrimal_Global_UIData;         // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B46[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x48(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x58(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ForceTPVCameraOffsetCheckbox_bIsEnabled
struct UOptionsMenu_C_Get_ForceTPVCameraOffsetCheckbox_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsNewCameraEnabled_ReturnValue;           // 0x1(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.IsNewCameraEnabled
struct UOptionsMenu_C_IsNewCameraEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B49[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
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
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
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
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Tick
struct UOptionsMenu_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x6D0 (0x6D0 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x18(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_21;        // 0x30(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_21;       // 0x40(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_3B8B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_20;        // 0x48(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_20;       // 0x58(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	uint8                                        Pad_3B8C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_19;        // 0x60(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_19;       // 0x70(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
	uint8                                        Pad_3B8D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_18;        // 0x78(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_18;       // 0x88(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_3B8E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_17;        // 0x90(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_17;       // 0xA0(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NoDestructor)
	uint8                                        Pad_3B8F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_16;        // 0xA8(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_16;       // 0xB8(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
	uint8                                        Pad_3B90[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_7;          // 0xC0(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0xD8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	uint8                                        Pad_3B92[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_6;          // 0xE0(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0xF8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_3B94[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_5;          // 0x100(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x118(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_3B95[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_4;          // 0x120(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x138(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3B96[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_3;          // 0x140(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x158(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_3B98[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_2;          // 0x160(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0x178(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_UseConsoleVideoOptions_ReturnValue;       // 0x17C(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B99[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_15;        // 0x180(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NoDestructor)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_15;       // 0x190(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NoDestructor)
	uint8                                        Pad_3B9A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color_2;                // 0x194(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3B9B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_1;          // 0x1A8(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x1C0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3B9C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1C8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x1D8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue;            // 0x1E0(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x1F8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B9D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x200(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x208(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x218(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x220(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x228(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x238(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x248(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x249(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x24A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B9E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Create_ReturnValue;                       // 0x250(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UVisualSettings_MainMenuUI_ASA_C*      K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA; // 0x258(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x260(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B9F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x268(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x278(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x288(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BA0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Array_Get_Item;                           // 0x290(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x298(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3BA1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x2A0(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x2B0(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3BA2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x2B4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class UPrimalUI*                             CallFunc_Array_Get_Item_1;                         // 0x2B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x2C0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x2C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2D0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2D4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BA4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2D8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BA5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_1;                      // 0x2E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color_1;                // 0x2E8(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2F8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3BA6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color;                  // 0x2FC(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3BA7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_14;        // 0x310(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_14;       // 0x320(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_3BA9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x328(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x340(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BAB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x348(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x360(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3BAC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_13;        // 0x368(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_13;       // 0x378(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_3BAD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_12;        // 0x380(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_12;       // 0x390(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x391(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3BAE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x398(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x3B0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3BB0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_11;        // 0x3B8(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_11;       // 0x3C8(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_3BB1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_10;        // 0x3D0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_10;       // 0x3E0(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_3BB2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_9;         // 0x3E8(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_9;        // 0x3F8(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_3BB3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_8;         // 0x400(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_8;        // 0x410(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_3BB4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_7;         // 0x418(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_7;        // 0x428(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x429(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3BB5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x42C(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x464(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x468(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BB6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x46C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x470(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x471(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x472(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3BB8[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x478(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	TArray<class UDataListButtonVariable_Widget_ASA_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x4F0(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x500(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BBA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_2;            // 0x508(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_2;        // 0x518(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BBB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_6;         // 0x520(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_6;        // 0x530(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_3BBC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x534(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class UDataListButtonVariable_Widget_ASA_C*  CallFunc_Array_Get_Item_2;                         // 0x538(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_CanShowNvidiaPanel_ReturnValue;           // 0x540(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3BBD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_5;         // 0x548(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_5;        // 0x558(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_3BBE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_4;         // 0x560(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_4;        // 0x570(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3BC1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue_3;            // 0x578(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x588(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x590(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_3BC3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x598(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x5A0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3BC4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_3;         // 0x5A8(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_3;        // 0x5B8(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_3BC5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x5C0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_2;        // 0x5D0(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BC7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x5D8(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_1;        // 0x5E8(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3BC8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x5F0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x600(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3BC9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetUserSettings_ReturnValue;              // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_GetDLSSModeIndex_ReturnValue;             // 0x610(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3BCA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x618(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UPrimalUI*                             CallFunc_Create_ReturnValue_1;                     // 0x628(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UVisualSettings_MainMenuUI_ASA_C*      K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA_1; // 0x630(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x638(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BCD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;      // 0x640(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x650(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_3BCE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Array_Get_Item_3;                         // 0x658(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x660(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x661(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3BD0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x664(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x668(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_3BD1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;      // 0x670(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x680(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BD3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Array_Get_Item_4;                         // 0x688(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x690(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3BD4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_2;                      // 0x698(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x6A0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6A1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BD5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_3;                      // 0x6A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x6B0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x6B4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x6B5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3BD6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x6B8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6BC(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x6CC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
};

}
}


