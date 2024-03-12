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

// 0x70 (0x70 - 0x0)
// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_QuantityText_Text
struct UHUDNotificationEntrySmall_C_Get_QuantityText_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F35[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x38(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F37[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x40(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0x58(0x18)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x9C (0x9C - 0x0)
// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.CheckDestroy
struct UHUDNotificationEntrySmall_C_CheckDestroy_Params
{
public:
	bool                                         RequireUpdate;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F3A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsSOTF_ReturnValue;                       // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F3B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_2F3C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHUDNotificationEntry_Struct          CallFunc_Array_Get_Item;                           // 0x38(0x4C)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_2F3D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8C(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x8E(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F3E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x90(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x94(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F3F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;  // 0x98(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xA9 (0xA9 - 0x0)
// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.UpdateProgressData
struct UHUDNotificationEntrySmall_C_UpdateProgressData_Params
{
public:
	double                                       CurrentMaxTime;                                    // 0x0(0x8)(ConstParm, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        IndexCurrentMaxTime;                               // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F46[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x38(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F47[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F48[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHUDNotificationEntry_Struct          CallFunc_Array_Get_Item;                           // 0x48(0x4C)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_2F4B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2F4C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x9C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_Image_NotifIcon_Brush
struct UHUDNotificationEntrySmall_C_Get_Image_NotifIcon_Brush_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2F50[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_Select_Default;                             // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.InitWidget
struct UHUDNotificationEntrySmall_C_InitWidget_Params
{
public:
	struct FHUDNotificationEntry_Struct          Entry;                                             // 0x0(0x4C)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F55[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         IsSmallNotification;                               // 0x50(0x1)(Edit, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHUDNotificationEntry_Struct>  Entries;                                           // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        IndexCurrentMaxTime;                               // 0x68(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F57[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CurrentMaxTime;                                    // 0x70(0x8)(ConstParm, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x78(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	TArray<struct FHUDNotificationEntry_Struct>  K2Node_MakeArray_Array;                            // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x94(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.GetNotifStringColor
struct UHUDNotificationEntrySmall_C_GetNotifStringColor_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x14(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x24(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


