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

// 0x28 (0x28 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPGetAdditionalGrowthMultiplier
struct ACropPlotBaseBP_C_BPGetAdditionalGrowthMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_HasSoilTillingEnabled_CanEverBeTilled;    // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53EA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetCropGrowthTillMultiplier_ReturnValue;  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x18(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x20(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.HasSoilTillingEnabled
struct ACropPlotBaseBP_C_HasSoilTillingEnabled_Params
{
public:
	bool                                         CanEverBeTilled;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPAdjustCropYield_SingleRefresh
struct ACropPlotBaseBP_C_BPAdjustCropYield_SingleRefresh_Params
{
public:
	int32                                        ItemsToGenerateBeforeAdjustment;                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x8(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasSoilTillingEnabled_CanEverBeTilled;    // 0x10(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_53EB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetCropYieldTillMultipler_ReturnValue;    // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53EC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x30(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x34(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x3C(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPAdjustCropYield_Max
struct ACropPlotBaseBP_C_BPAdjustCropYield_Max_Params
{
public:
	int32                                        ItemsToGenerateBeforeAdjustment;                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x8(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasSoilTillingEnabled_CanEverBeTilled;    // 0x10(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_53ED[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetCropYieldTillMultipler_ReturnValue;    // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53EE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x30(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x34(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x3C(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.GetCropGrowthTillMultiplier
struct ACropPlotBaseBP_C_GetCropGrowthTillMultiplier_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_53EF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x18(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x20(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.GetCropYieldTillMultipler
struct ACropPlotBaseBP_C_GetCropYieldTillMultipler_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_53F0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x18(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x20(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
};

// 0x34A (0x34A - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.GetTooltipStructureInfoBP
struct ACropPlotBaseBP_C_GetTooltipStructureInfoBP_Params
{
public:
	class AShooterPlayerController*              PlayerOwner;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FTooltipTextInfo>              ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasSoilTillingEnabled_CanEverBeTilled;    // 0x19(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53F1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                K2Node_MakeStruct_Color;                           // 0x1C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTooltipTextInfo                      K2Node_MakeStruct_TooltipTextInfo;                 // 0x20(0x18)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Can_Currently_be_Tilled_Can_Currently_Be_Tilled; // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53F2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTooltipTextInfo>              K2Node_MakeArray_Array;                            // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x50(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1;  // 0x51(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_53F3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetCropGrowthTillMultiplier_ReturnValue;  // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_GetCropYieldTillMultipler_ReturnValue;    // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x68(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x70(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xC8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x128(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x138(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x150(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x168(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FText                                  K2Node_Select_Default;                             // 0x178(0x18)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x190(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53F4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x1C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x1C8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_53F5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1D0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FColor                                K2Node_MakeStruct_Color_1;                         // 0x220(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x224(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_53F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x230(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FColor                                K2Node_MakeStruct_Color_2;                         // 0x280(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_53F7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x288(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FTooltipTextInfo                      K2Node_MakeStruct_TooltipTextInfo_1;               // 0x298(0x18)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x2B0(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FColor                                K2Node_MakeStruct_Color_3;                         // 0x2C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_53F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Select_Default_1;                           // 0x2D0(0x18)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FTooltipTextInfo                      K2Node_MakeStruct_TooltipTextInfo_2;               // 0x2E8(0x18)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x300(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<struct FTooltipTextInfo>              K2Node_MakeArray_Array_5;                          // 0x310(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FTooltipTextInfo                      K2Node_MakeStruct_TooltipTextInfo_3;               // 0x320(0x18)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	TArray<struct FTooltipTextInfo>              K2Node_MakeArray_Array_6;                          // 0x338(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x348(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x349(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.TillSoil
struct ACropPlotBaseBP_C_TillSoil_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Min_ReturnValue;                          // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.Can Currently Be Tilled
struct ACropPlotBaseBP_C_Can_Currently_Be_Tilled_Params
{
public:
	bool                                         Can_Currently_Be_Tilled;                           // 0x0(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasSoilTillingEnabled_CanEverBeTilled;    // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x49 (0x49 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.GetCurrentStackCount
struct ACropPlotBaseBP_C_GetCurrentStackCount_Params
{
public:
	int32                                        MaxCount;                                          // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_53F9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      PlacingOn;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        StackCount;                                        // 0x10(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_53FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      CurCropPlot_GSC;                                   // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        StackCount_GSC;                                    // 0x20(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x24(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_53FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53FC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53FD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructureItemContainer_CropPlot* K2Node_DynamicCast_AsPrimal_Structure_Item_Container_Crop_Plot; // 0x40(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x59 (0x59 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPOverrideCantBuildReasonString
struct ACropPlotBaseBP_C_BPOverrideCantBuildReasonString_Params
{
public:
	int32                                        CantBuildReason;                                   // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_53FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                OverrideString_BRS;                                // 0x18(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_53FF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5400[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BuildString_Int_ReturnValue;              // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x58(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x95 (0x95 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPIsAllowedToBuild
struct ACropPlotBaseBP_C_BPIsAllowedToBuild_Params
{
public:
	struct FPlacementData                        OutPlacementData;                                  // 0x0(0x88)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CurrentAllowedReason;                              // 0x88(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8C(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        BuildReason_IAB;                                   // 0x90(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsOverStackLimit_IsOverLimit;             // 0x94(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xDC (0xDC - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.IsOverStackLimit
struct ACropPlotBaseBP_C_IsOverStackLimit_Params
{
public:
	struct FPlacementData                        PlacementData;                                     // 0x0(0x88)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         IsOverLimit;                                       // 0x88(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5401[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      PlacingOnCropPlot_IOS;                             // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsOverLimit_IOS;                                   // 0x98(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x99(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5402[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructureItemContainer_CropPlot* K2Node_DynamicCast_AsPrimal_Structure_Item_Container_Crop_Plot; // 0xA0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5403[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructureItemContainer_CropPlot* K2Node_DynamicCast_AsPrimal_Structure_Item_Container_Crop_Plot_1; // 0xB0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5404[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0xC8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5405[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetCurrentStackCount_StackCount;          // 0xD4(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xD8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xD9(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xDA(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0xDB(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x8E (0x8E - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand
struct ACropPlotBaseBP_C_BPServerHandleNetExecCommand_Params
{
public:
	class APlayerController*                     FromPC;                                            // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FName                                  CommandName;                                       // 0x8(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x10(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         RetVal;                                            // 0x89(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x8A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8B(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8C(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit
struct ACropPlotBaseBP_C_CanAttachToExosuit_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xA (0xA - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit
struct ACropPlotBaseBP_C_CanBeStoredByExosuit_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.BPOnCropPhaseDecrease
struct ACropPlotBaseBP_C_BPOnCropPhaseDecrease_Params
{
public:
	int32                                        CropPhase;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP
struct ACropPlotBaseBP_C_ExecuteUbergraph_CropPlotBaseBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        K2Node_Event_CropPhase;                            // 0x4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


