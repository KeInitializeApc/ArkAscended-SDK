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

// 0x1C4 (0x1C4 - 0x0)
// Function MainBuildingUI.MainBuildingUI_C.SetupBuildingHotbar
struct UMainBuildingUI_C_SetupBuildingHotbar_Params
{
public:
	class APrimalStructurePlacer*                Placer;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalStructure>> LocalStructuresHotBar;                             // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                DescriptiveNameVariant;                            // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBuildVariantData_Widget_C*            LocalWidgetVariant;                                // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36A7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPOverrideDescriptiveNameForPreview_ReturnValue; // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x48(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x50(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalStructure>        CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x58(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x88(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_36A9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalStructure>> K2Node_MakeArray_Array;                            // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalStructure>> CallFunc_GetAllStructuresToBuild_ReturnValue;      // 0xA0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_36AA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xBC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36AB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xD0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36AC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBuildVariantData_Widget_C*            CallFunc_Create_ReturnValue;                       // 0xE0(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalStructure>        CallFunc_Array_Get_Item;                           // 0xE8(0x30)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x118(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_36AD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x120(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x128(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36AE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue;       // 0x130(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x138(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36AF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x140(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x148(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_36B0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue_1;     // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x158(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_36B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x160(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x168(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36B2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_Select_Default;                             // 0x170(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x178(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x188(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x190(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36B3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBuildVariantData_Widget_C*            CallFunc_Array_Get_Item_1;                         // 0x198(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1A0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1A4(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_36B4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1A8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36B5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBuildVariantData_Widget_C*            CallFunc_Array_Get_Item_2;                         // 0x1B0(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x1B8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x1C0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1C2(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1C3(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x61 (0x61 - 0x0)
// Function MainBuildingUI.MainBuildingUI_C.UpdateVisibilityByString
struct UMainBuildingUI_C_UpdateVisibilityByString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UWidget*>                       Widget;                                            // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	bool                                         Condition;                                         // 0x20(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_36BC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x44(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4C(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_36BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x50(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x54(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x101 (0x101 - 0x0)
// Function MainBuildingUI.MainBuildingUI_C.SetupStructurePlacer
struct UMainBuildingUI_C_SetupStructurePlacer_Params
{
public:
	class APrimalStructurePlacer*                Placer;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         GamepadActiveLocal;                                // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36CD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue;                          // 0xC(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x10(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36CE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x14(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x18(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36D0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue_2;                        // 0x1C(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x20(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36D2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue_3;                        // 0x24(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x28(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_36D4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Len_ReturnValue_4;                        // 0x40(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x44(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_UpdateVisibilityByString_Condition;       // 0x45(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_36D5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x48(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_1;             // 0x4C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x58(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_36D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue_5;                        // 0x64(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Len_ReturnValue_6;                        // 0x68(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x6C(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x6D(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x6E(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36DA[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue_7;                        // 0x70(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x74(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x75(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_36DB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class UWidget*>                       K2Node_MakeArray_Array_1;                          // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_UpdateVisibilityByString_Condition_1;     // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_36DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       K2Node_MakeArray_Array_2;                          // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_UpdateVisibilityByString_Condition_2;     // 0xD0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       K2Node_MakeArray_Array_3;                          // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_UpdateVisibilityByString_Condition_3;     // 0xE8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_36DE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       K2Node_MakeArray_Array_4;                          // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_UpdateVisibilityByString_Condition_4;     // 0x100(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
};

// 0x3C (0x3C - 0x0)
// Function MainBuildingUI.MainBuildingUI_C.Tick
struct UMainBuildingUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function MainBuildingUI.MainBuildingUI_C.ExecuteUbergraph_MainBuildingUI
struct UMainBuildingUI_C_ExecuteUbergraph_MainBuildingUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_36E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_36E5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructurePlacer*                CallFunc_GetStructurePlacer_ReturnValue;           // 0x18(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


