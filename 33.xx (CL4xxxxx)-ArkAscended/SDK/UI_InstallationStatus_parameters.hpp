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
	enum class EInstallStatus                    Index;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3930[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  Temp_text_Variable_5;                              // 0x80(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FText                                  Temp_text_Variable_6;                              // 0x98(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.GetTrueProgress
struct UUI_InstallationStatus_C_GetTrueProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             InstalationState;                                  // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_393D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         MaintainPreviousValue;                             // 0x10(0x1)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_393E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Temp_real_Variable;                                // 0x18(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_393F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       Temp_real_Variable_1;                              // 0x30(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x38(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x40(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       Temp_real_Variable_2;                              // 0x48(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       Temp_real_Variable_3;                              // 0x50(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       Temp_real_Variable_4;                              // 0x58(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       Temp_real_Variable_5;                              // 0x60(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	double                                       Temp_real_Variable_6;                              // 0x68(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       Temp_real_Variable_7;                              // 0x70(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
	double                                       Temp_real_Variable_8;                              // 0x78(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	double                                       Temp_real_Variable_9;                              // 0x80(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	double                                       Temp_real_Variable_10;                             // 0x88(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x90(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3945[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_Select_Default;                             // 0x98(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x85 (0x85 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateColor
struct UUI_InstallationStatus_C_UpdateColor_Params
{
public:
	enum class EInstallStatus                    Install_Status;                                    // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_394B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x24(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x34(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x44(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x54(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x64(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x74(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x84(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateModProgress
struct UUI_InstallationStatus_C_UpdateModProgress_Params
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	enum class EInstallStatus                    NewInstallationStatus;                             // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             InstallationPhase;                                 // 0x5(0x1)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x7(0x1)(ConstParm, ExportObject, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3957[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetTrueProgress_ReturnValue;              // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetTrueProgress_MaintainPreviousValue;    // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_395A[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x28(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_395C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.Event Set Bindings To Game Slot
struct UUI_InstallationStatus_C_Event_Set_Bindings_To_Game_Slot_Params
{
public:
	class UUI_GameSlot_C*                        GameSlot;                                          // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.PlayNotificationUpdate
struct UUI_InstallationStatus_C_PlayNotificationUpdate_Params
{
public:
	double                                       Duration;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	class FText                                  Message;                                           // 0x8(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.ExecuteUbergraph_UI_InstallationStatus
struct UUI_InstallationStatus_C_ExecuteUbergraph_UI_InstallationStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_395F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_CustomEvent_GameSlot;                       // 0x8(0x8)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3962[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       K2Node_CustomEvent_Duration;                       // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  K2Node_CustomEvent_Message;                        // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3966[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

}
}


