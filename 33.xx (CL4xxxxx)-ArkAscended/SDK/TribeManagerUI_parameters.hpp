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

// 0x2 (0x2 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.Get_TribeWarPanel_Visibility
struct UTribeManagerUI_C_Get_TribeWarPanel_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.CheckToBool
struct UTribeManagerUI_C_CheckToBool_Params
{
public:
	class UDataListButtonVariable_Widget_ASA_C*  Slider;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         Byte;                                              // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58DA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x10(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x20(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x25 (0x25 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.SliderToByte
struct UTribeManagerUI_C_SliderToByte_Params
{
public:
	class UDataListButtonVariable_Widget_ASA_C*  Slider;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Byte;                                              // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58DB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x10(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x20(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x24(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.SetupSwitchButtons
struct UTribeManagerUI_C_SetupSwitchButtons_Params
{
public:
	class UWidget*                               TextureEffectToHide;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UWidget*                               TextureEffectToShow;                               // 0x8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPanelWidget*                          ButtonToShow;                                      // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPanelWidget*                          ButtonToHide;                                      // 0x18(0x8)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x20(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x34(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
};

// 0x4 (0x4 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexSelected
struct UTribeManagerUI_C_BPRankGroupIndexSelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x4 (0x4 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexApplied
struct UTribeManagerUI_C_BPRankGroupIndexApplied_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x2D8 (0x2D8 - 0x0)
// Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI
struct UTribeManagerUI_C_ExecuteUbergraph_TribeManagerUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CheckToBool_Byte;                         // 0x4(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58E0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_index_1;                              // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_58E1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   CallFunc_GetPlayerState_ReturnValue;               // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        K2Node_Event_index;                                // 0x18(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_58E2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   CallFunc_GetPlayerState_ReturnValue_1;             // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CallFunc_SliderToByte_Byte;                        // 0x38(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58E3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_2;          // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x60(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x64(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x68(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x78(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_3;          // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_4;          // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_5;          // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_6;          // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_7;          // 0xC8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_8;          // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_9;          // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_10;         // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_11;         // 0x108(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x118(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x11C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x120(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0x130(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x140(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x144(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_4;           // 0x148(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_5;           // 0x158(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_6;             // 0x168(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_7;             // 0x16C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_6;           // 0x170(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_7;           // 0x180(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_8;             // 0x190(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_9;             // 0x194(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_8;           // 0x198(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_9;           // 0x1A8(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_10;            // 0x1B8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_11;            // 0x1BC(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_10;          // 0x1C0(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_11;          // 0x1D0(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_12;            // 0x1E0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_13;            // 0x1E4(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_12;          // 0x1E8(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_13;          // 0x1F8(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x208(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_SliderToByte_Byte_1;                      // 0x220(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        CallFunc_SliderToByte_Byte_2;                      // 0x221(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        CallFunc_SliderToByte_Byte_3;                      // 0x222(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        CallFunc_SliderToByte_Byte_4;                      // 0x223(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        CallFunc_SliderToByte_Byte_5;                      // 0x224(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        CallFunc_SliderToByte_Byte_6;                      // 0x225(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        CallFunc_SliderToByte_Byte_7;                      // 0x226(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	uint8                                        CallFunc_SliderToByte_Byte_8;                      // 0x227(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        CallFunc_SliderToByte_Byte_9;                      // 0x228(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	uint8                                        CallFunc_SliderToByte_Byte_10;                     // 0x229(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        CallFunc_SliderToByte_Byte_11;                     // 0x22A(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        CallFunc_SliderToByte_Byte_12;                     // 0x22B(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        CallFunc_SliderToByte_Byte_13;                     // 0x22C(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_CheckToBool_Byte_1;                       // 0x22D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_CheckToBool_Byte_2;                       // 0x22E(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_CheckToBool_Byte_3;                       // 0x22F(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_CheckToBool_Byte_4;                       // 0x230(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_CheckToBool_Byte_5;                       // 0x231(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_CheckToBool_Byte_6;                       // 0x232(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_CheckToBool_Byte_7;                       // 0x233(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	bool                                         CallFunc_CheckToBool_Byte_8;                       // 0x234(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_CheckToBool_Byte_9;                       // 0x235(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_58E4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x238(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x23C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerState*                   CallFunc_GetPlayerState_ReturnValue_2;             // 0x240(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsTribeAdmin_ReturnValue;                 // 0x248(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58E5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x24C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_CheckToBool_Byte_10;                      // 0x258(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x259(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_58E6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x25C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class AShooterPlayerState*                   CallFunc_GetPlayerState_ReturnValue_3;             // 0x260(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsTribeAdmin_ReturnValue_1;               // 0x268(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_58E7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x270(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x288(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Left_ReturnValue;                         // 0x298(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_CheckToBool_Byte_11;                      // 0x2A8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_58E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTribeRankGroup                       K2Node_MakeStruct_TribeRankGroup;                  // 0x2B0(0x28)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
};

}
}


