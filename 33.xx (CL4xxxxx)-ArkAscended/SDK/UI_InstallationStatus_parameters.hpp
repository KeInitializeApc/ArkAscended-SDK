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

// 0xF0 (0xF0 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.SetTextBasedOnState
struct UUI_InstallationStatus_C_SetTextBasedOnState_Params
{
public:
	enum class EInstallStatus                    Index;                                             // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B03[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  Temp_text_Variable_5;                              // 0x80(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)
	class FText                                  Temp_text_Variable_6;                              // 0x98(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.GetTrueProgress
struct UUI_InstallationStatus_C_GetTrueProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ELibraryProgressState             InstalationState;                                  // 0x4(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B10[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         MaintainPreviousValue;                             // 0x10(0x1)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B12[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Temp_real_Variable;                                // 0x18(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_4B13[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Temp_real_Variable_1;                              // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	double                                       Temp_real_Variable_2;                              // 0x48(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
	double                                       Temp_real_Variable_3;                              // 0x50(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
	double                                       Temp_real_Variable_4;                              // 0x58(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
	double                                       Temp_real_Variable_5;                              // 0x60(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp, NonTransactional)
	double                                       Temp_real_Variable_6;                              // 0x68(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       Temp_real_Variable_7;                              // 0x70(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, EditorOnly)
	double                                       Temp_real_Variable_8;                              // 0x78(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, EditorOnly)
	double                                       Temp_real_Variable_9;                              // 0x80(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp, EditorOnly)
	double                                       Temp_real_Variable_10;                             // 0x88(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x90(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B17[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_Select_Default;                             // 0x98(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x85 (0x85 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateColor
struct UUI_InstallationStatus_C_UpdateColor_Params
{
public:
	enum class EInstallStatus                    Install_Status;                                    // 0x0(0x1)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B1E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x24(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x34(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x44(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x54(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x64(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x74(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x84(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateModProgress
struct UUI_InstallationStatus_C_UpdateModProgress_Params
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	enum class EInstallStatus                    NewInstallationStatus;                             // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class ELibraryProgressState             InstallationPhase;                                 // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x7(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4B26[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetTrueProgress_ReturnValue;              // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetTrueProgress_MaintainPreviousValue;    // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_4B27[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x28(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B28[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.Event Set Bindings To Game Slot
struct UUI_InstallationStatus_C_Event_Set_Bindings_To_Game_Slot_Params
{
public:
	class UUI_GameSlot_C*                        GameSlot;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.PlayNotificationUpdate
struct UUI_InstallationStatus_C_PlayNotificationUpdate_Params
{
public:
	double                                       Duration;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	class FText                                  Message;                                           // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.ExecuteUbergraph_UI_InstallationStatus
struct UUI_InstallationStatus_C_ExecuteUbergraph_UI_InstallationStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4B2D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_CustomEvent_GameSlot;                       // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B2E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       K2Node_CustomEvent_Duration;                       // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FText                                  K2Node_CustomEvent_Message;                        // 0x28(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B30[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

}
}


