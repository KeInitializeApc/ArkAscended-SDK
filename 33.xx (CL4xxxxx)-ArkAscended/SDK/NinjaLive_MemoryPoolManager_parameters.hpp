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

// 0x48 (0x48 - 0x0)
// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.MemCount
struct ANinjaLive_MemoryPoolManager_C_MemCount_Params
{
public:
	int32                                        NumberOfChannels;                                  // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        ResolutionX;                                       // 0x4(0x4)(ConstParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        ResolutionY;                                       // 0x8(0x4)(Edit, ExportObject, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class ESimPrecision_Enum                Temp_byte_Variable;                                // 0xC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3C8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x10(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        K2Node_Select_Default;                             // 0x1C(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x20(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x24(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x40(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.SetRenderTargetAttribs
struct ANinjaLive_MemoryPoolManager_C_SetRenderTargetAttribs_Params
{
public:
	class UTextureRenderTarget2D*                InputPin;                                          // 0x0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	bool                                         Clamping;                                          // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3C97[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RT;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class ETextureAddress                   Temp_byte_Variable;                                // 0x18(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ETextureAddress                   Temp_byte_Variable_1;                              // 0x19(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ETextureAddress                   K2Node_Select_Default;                             // 0x1B(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveTick
struct ANinjaLive_MemoryPoolManager_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.PrintMemStatus
struct ANinjaLive_MemoryPoolManager_C_PrintMemStatus_Params
{
public:
	class UObject*                               Consumer;                                          // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	double                                       MemConsumption;                                    // 0x8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         TakenOrReturned;                                   // 0x10(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1D4 (0x1D4 - 0x0)
// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ExecuteUbergraph_NinjaLive_MemoryPoolManager
struct ANinjaLive_MemoryPoolManager_C_ExecuteUbergraph_NinjaLive_MemoryPoolManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	enum class ESimPrecision_Enum                Temp_byte_Variable;                                // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3CBE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaSeconds;                         // 0x8(0x4)(BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_1;                              // 0xC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3CBF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               K2Node_CustomEvent_Consumer;                       // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_CustomEvent_MemConsumption;                 // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_CustomEvent_TakenOrReturned;                // 0x20(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CC1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_2;                              // 0x38(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3CC5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x40(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x50(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x60(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_3;                              // 0x78(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3CC9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue;                          // 0x7C(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x80(0x4)(Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x84(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x88(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x8C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_LeftChop_ReturnValue;                     // 0x90(0x10)(BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_4;                              // 0xA0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3CCC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0xA4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default;                             // 0xA9(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default_1;                           // 0xAA(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3CCF[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0xB0(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_5;                              // 0xBC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_3CD1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Variable_2;                               // 0xC8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable_3;                               // 0xCC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Variable_4;                               // 0xD0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xD4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xD8(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3CD3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xDC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_6;                              // 0xE0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_3CD5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_5;                               // 0xE4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	int32                                        K2Node_Select_Default_2;                           // 0xE8(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable_6;                               // 0xEC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xF0(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3CD8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0xF4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<class AActor*>                        CallFunc_GetAllActorsWithInterface_OutActors;      // 0xF8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Variable_7;                               // 0x108(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_3CDA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x110(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class UNinjaLiveComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x118(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x120(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x124(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3CDF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x128(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_8;                               // 0x12C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x130(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default_3;                           // 0x131(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3CE2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x134(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue_1;       // 0x138(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x140(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3CE5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x144(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3CE6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_SetRenderTargetAttribs_RT;                // 0x158(0x8)(Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FRenderTargetListItem                 K2Node_MakeStruct_RenderTargetListItem;            // 0x160(0x9)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CEA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x170(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3CEB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_SetRenderTargetAttribs_RT_1;              // 0x178(0x8)(Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	struct FRenderTargetListItem                 K2Node_MakeStruct_RenderTargetListItem_1;          // 0x180(0x9)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3CEC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x190(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x194(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x198(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3CEE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x19C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x1A0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x1A4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x1A8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Divide_IntInt_ReturnValue_1;              // 0x1AC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue_2;       // 0x1B0(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTextureRenderTarget2D*                CallFunc_SetRenderTargetAttribs_RT_2;              // 0x1B8(0x8)(Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FRenderTargetListItem                 K2Node_MakeStruct_RenderTargetListItem_2;          // 0x1C0(0x9)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3CF4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x1D0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

}
}


