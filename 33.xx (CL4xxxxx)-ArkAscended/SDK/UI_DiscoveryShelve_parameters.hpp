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

// 0x20 (0x20 - 0x0)
// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.AddViewAllModSlot
struct UUI_DiscoveryShelve_C_AddViewAllModSlot_Params
{
public:
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_ViewAllSlot_C*                     CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.Tick
struct UUI_DiscoveryShelve_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.LeftIn
struct UUI_DiscoveryShelve_C_LeftIn_Params
{
public:
	bool                                         Index;                                             // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance)
};

// 0x1 (0x1 - 0x0)
// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.RightIn
struct UUI_DiscoveryShelve_C_RightIn_Params
{
public:
	bool                                         Index;                                             // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.Create
struct UUI_DiscoveryShelve_C_Create_Params
{
public:
	TArray<int64>                                ListOfMods;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
};

// 0x680 (0x680 - 0x0)
// Function UI_DiscoveryShelve.UI_DiscoveryShelve_C.ExecuteUbergraph_UI_DiscoveryShelve
struct UUI_DiscoveryShelve_C_ExecuteUbergraph_UI_DiscoveryShelve_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_473F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_4740[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x10(0x8)(BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x18(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4742[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x20(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x28(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x29(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_4743[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x2C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x30(0x4)(EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_4744[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_GameSlot_C*                        CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x68(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Variable;                                 // 0x78(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x7C(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x80(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x84(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	struct FMargin                               K2Node_MakeStruct_Margin_2;                        // 0x88(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FMargin                               K2Node_MakeStruct_Margin_3;                        // 0x98(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable;                                // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xA9(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xAA(0x1)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_4746[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xAC(0x4)(Edit, ConstParm, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4748[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB8(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0xBC(0x1)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	uint8                                        Pad_4749[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_MakeFInstallProgressModFromID_ReturnValue; // 0xC8(0x4C0)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x588(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x589(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x58A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_474A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x58C(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x5C4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetScrollOffset_ReturnValue_1;            // 0x5C8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	float                                        CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x5CC(0x4)(ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x5D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_474C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x5D8(0x8)(BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x5E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5E1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_Index_1;                        // 0x5E2(0x1)(OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_Index;                          // 0x5E3(0x1)(OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x5E4(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x5E5(0x1)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5E6(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_474D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0x5E8(0x4)(EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	uint8                                        Pad_474E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x5F0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x5F8(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x600(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x601(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_474F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_CustomEvent_ListOfMods;                     // 0x608(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x618(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4750[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x620(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x628(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_4751[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        CallFunc_Array_Get_Item_1;                         // 0x630(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x638(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x63C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_4754[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        CallFunc_Array_Get_Item_2;                         // 0x640(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x648(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x64C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x64D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x64E(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_4758[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x650(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x658(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x660(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1; // 0x664(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x668(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x670(0x8)(BlueprintVisible, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x678(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
};

}
}


