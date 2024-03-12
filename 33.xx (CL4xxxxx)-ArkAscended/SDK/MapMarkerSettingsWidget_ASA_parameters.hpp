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

// 0x8A (0x8A - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Clicked Stop Tracking Death Waypoint
struct UMapMarkerSettingsWidget_ASA_C_Clicked_Stop_Tracking_Death_Waypoint_Params
{
public:
	int32                                        Lowest_index;                                      // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_576C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Lowest_Dist;                                       // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_576D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x20(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x21(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_576E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue;                      // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_576F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVectorBoolPair                       CallFunc_Array_Get_Item;                           // 0x40(0x20)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5770[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x68(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x80(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x88(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x89(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x79 (0x79 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditDeathWaypoint
struct UMapMarkerSettingsWidget_ASA_C_UpdateEditDeathWaypoint_Params
{
public:
	struct FMinimapMark                          Mark;                                              // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Init;                                              // 0x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm)
};

// 0x98 (0x98 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark_TrackedActorEntry
struct UMapMarkerSettingsWidget_ASA_C_UpdateEditMark_TrackedActorEntry_Params
{
public:
	struct FMinimapMark                          Mark;                                              // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Init;                                              // 0x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm)
	uint8                                        Pad_5771[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x80(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x79 (0x79 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CanEditWaypoint
struct UMapMarkerSettingsWidget_ASA_C_CanEditWaypoint_Params
{
public:
	struct FMinimapMark                          Mark;                                              // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Can;                                               // 0x78(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CreateNewWaypointOnLocation
struct UMapMarkerSettingsWidget_ASA_C_CreateNewWaypointOnLocation_Params
{
public:
	struct FVector                               InputPin;                                          // 0x0(0x18)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	int32                                        CallFunc_HasLimitedWaypoints_Num;                  // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasLimitedWaypoints_Max;                  // 0x1C(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5772[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_HasLimitedWaypoints_First_Unclaimed_Default_Number; // 0x20(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_TraceGrounWaypointHeight_ReturnValue;     // 0x24(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5773[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_TraceGrounWaypointHeight_ReturnValue2;    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x30(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x50(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x68(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x80(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x88(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x98(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0xA8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0xB0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0xC0(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FMinimapMark                          K2Node_MakeStruct_MinimapMark;                     // 0xC8(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.TraceGrounWaypointHeight
struct UMapMarkerSettingsWidget_ASA_C_TraceGrounWaypointHeight_Params
{
public:
	struct FVector                               InVec;                                             // 0x0(0x18)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5774[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue2;                                      // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_TraceGroundLocation_Found;                // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5775[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_TraceGroundLocation_Z;                    // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.On_ViewDistanceComboBox_GenerateWidget
struct UMapMarkerSettingsWidget_ASA_C_On_ViewDistanceComboBox_GenerateWidget_Params
{
public:
	class FString                                Item;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMapMarkWidget_ASA_C*                  CallFunc_Create_ReturnValue;                       // 0x18(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x20(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5776[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	struct FMinimapMark                          K2Node_MakeStruct_MinimapMark;                     // 0x30(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1F0 (0x1F0 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark
struct UMapMarkerSettingsWidget_ASA_C_UpdateEditMark_Params
{
public:
	struct FMinimapMark                          Mark;                                              // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Init;                                              // 0x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm)
	uint8                                        Pad_5777[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x80(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x90(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5778[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xB8(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ECheckBoxState                    CallFunc_GetCheckedState_ReturnValue;              // 0xC8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5779[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xD8(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xE0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xF0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xF8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_2;                          // 0x110(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x120(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_X_3;                          // 0x128(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x138(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x140(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x148(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x150(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x158(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_577A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x15C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x161(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_577B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetMinimapLocation_ReturnValue;           // 0x168(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetMinimapLocation_Coords;                // 0x178(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x188(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x190(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x198(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x1A0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x1B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x1C0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x1D8(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetMinValue_InValue_ImplicitCast;         // 0x1DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast_1;          // 0x1E0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_SetMaxValue_InValue_ImplicitCast;         // 0x1E4(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x1E8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x1EC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x220 (0x220 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.OnMouseButtonDown_0
struct UMapMarkerSettingsWidget_ASA_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD9 (0xD9 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.GetMapWaypoints
struct UMapMarkerSettingsWidget_ASA_C_GetMapWaypoints_Params
{
public:
	TArray<struct FMinimapMark>                  SavedMinimapMarks;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMinimapMark>                  Testlocal;                                         // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_577C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x30(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x48(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_577D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimapMark                          CallFunc_Array_Get_Item;                           // 0x58(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_577E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x164 (0x164 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.HasLimitedWaypoints
struct UMapMarkerSettingsWidget_ASA_C_HasLimitedWaypoints_Params
{
public:
	bool                                         Get_First_Unclaimed_Default_Number;                // 0x0(0x1)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_577F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Num;                                               // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate)
	bool                                         Max;                                               // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_5780[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        First_Unclaimed_Default_Number;                    // 0xC(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                All_default_named_waypoint_numbers;                // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        HighestUnclaimedDefaultNum;                        // 0x20(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Number;                                            // 0x24(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, EditConst)
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x3C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3D(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5781[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x40(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Variable_1;                               // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5782[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                CallFunc_GetArrayIndicesSorted_Int_ReturnValue;    // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Get_Item;                           // 0x60(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x69(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5783[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x6C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x70(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_5784[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x78(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x88(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_5785[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5786[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimapMark                          CallFunc_Array_Get_Item_1;                         // 0xA8(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x120(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x121(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x122(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5787[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x128(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x138(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x158(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0x159(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5788[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x15C(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x160(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.SetupListMapMarker
struct UMapMarkerSettingsWidget_ASA_C_SetupListMapMarker_Params
{
public:
	TArray<struct FMinimapMark>                  MapMarker;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FMinimapMark                          CallFunc_Array_Get_Item;                           // 0x18(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x90(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanEditWaypoint_Can;                      // 0x94(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5789[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Max_ReturnValue;                          // 0x98(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_578A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0xA0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xB4(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xBC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC1(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_578B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_HasLimitedWaypoints_Num;                  // 0xC4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasLimitedWaypoints_Max;                  // 0xC8(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_578C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_HasLimitedWaypoints_First_Unclaimed_Default_Number; // 0xCC(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UPrimalUserWidget*                     CallFunc_Create_ReturnValue;                       // 0xD0(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UDataListMapMarkerWidget_C*            K2Node_DynamicCast_AsData_List_Map_Marker_Widget;  // 0xD8(0x8)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_578D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xE8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.AssignUpdateRefresh
struct UMapMarkerSettingsWidget_ASA_C_AssignUpdateRefresh_Params
{
public:
	class UDataListMapMarkerWidget_C*            Data;                                              // 0x0(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.EditWaypoint_Event
struct UMapMarkerSettingsWidget_ASA_C_EditWaypoint_Event_Params
{
public:
	struct FMinimapMark                          EditMark;                                          // 0x0(0x78)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x18 (0x18 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x19 (0x19 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x1 (0x1 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.PreConstruct
struct UMapMarkerSettingsWidget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C0 (0x3C0 - 0x0)
// Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ExecuteUbergraph_MapMarkerSettingsWidget_ASA
struct UMapMarkerSettingsWidget_ASA_C_ExecuteUbergraph_MapMarkerSettingsWidget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_Value_2;                // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_578E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_Value_3;                // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_578F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_3;                 // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x58(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x68(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x80(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x88(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x98(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0xA8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0xB0(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_X;                            // 0xC0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0xD0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5790[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetLocationWIthCoords_Location;           // 0xE0(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xF8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x108(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x110(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x128(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5791[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetLocationWIthCoords_Location_1;         // 0x130(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_X_2;                          // 0x148(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x158(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x160(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x178(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x188(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x1A0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5795[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x1A8(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x1C0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5796[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetLocationWIthCoords_Location_2;         // 0x1C8(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FText                                  K2Node_ComponentBoundEvent_Text_4;                 // 0x1E0(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x1F8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x208(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5797[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x20C(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FMinimapMark                          K2Node_CustomEvent_EditMark;                       // 0x210(0x78)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x288(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x289(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x28A(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28B(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_CanEditWaypoint_Can;                      // 0x28C(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5798[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x290(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x298(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5799[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x2A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue;                      // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector_X_3;                          // 0x2B0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x2B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x2C0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x2C8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x2E0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_579A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMinimapMark>                  K2Node_MakeArray_Array;                            // 0x2E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x2F8(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ECheckBoxState                    CallFunc_GetCheckedState_ReturnValue;              // 0x2F9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2FA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_579B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X_4;                          // 0x300(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_BreakVector_Y_4;                          // 0x308(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_BreakVector_Z_4;                          // 0x310(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_TraceGrounWaypointHeight_ReturnValue;     // 0x318(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_579D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_TraceGrounWaypointHeight_ReturnValue2;    // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_3;                 // 0x328(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int32                                        CallFunc_HasLimitedWaypoints_Num;                  // 0x340(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasLimitedWaypoints_Max;                  // 0x344(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_57A0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_HasLimitedWaypoints_First_Unclaimed_Default_Number; // 0x348(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetNormalizedValue_ReturnValue;           // 0x34C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x350(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_57A2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x358(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue_1;                    // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x368(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue_2;                    // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UDataListMapMarkerWidget_C*            K2Node_CustomEvent_Data;                           // 0x378(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x380(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_57A3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMinimapMark>                  CallFunc_GetMapWaypoints_SavedMinimapMarks;        // 0x388(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_3;            // 0x398(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue_3;                    // 0x3A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3A8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x3B8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
};

}
}


