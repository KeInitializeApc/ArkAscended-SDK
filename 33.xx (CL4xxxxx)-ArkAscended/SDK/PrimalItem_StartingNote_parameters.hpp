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

// 0x30 (0x30 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPCanUse
struct UPrimalItem_StartingNote_C_BPCanUse_Params
{
public:
	bool                                         bIgnoreCooldown;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BPCanUse_ReturnValue;                     // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x4(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3306[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPCanImplantSuicide_ReturnValue;          // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x22(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3307[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
struct UPrimalItem_StartingNote_C_BPDrawItemIcon_Params
{
public:
	class UCanvas*                               ItemCanvas;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             ItemCanvasSize;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             ItemCanvasScale;                                   // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bItemEnabled;                                      // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_331D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TheTintColor;                                      // 0x2C(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x3C(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_331F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x40(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x58(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x68(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x70(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x80(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_2;                        // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector2D_Y_2;                        // 0x90(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector2D_X_3;                        // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector2D_Y_3;                        // 0xA0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0xA8(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_2;     // 0xB0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xC0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_4;                        // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_BreakVector2D_Y_4;                        // 0xD8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_3;     // 0xE0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0xF0(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0xF8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x109(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x10A(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10B(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3328[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_Select_Default;                             // 0x110(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
struct UPrimalItem_StartingNote_C_BPGetItemIcon_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3338[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_Select_Default;                             // 0x18(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0xB9 (0xB9 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
struct UPrimalItem_StartingNote_C_IsLocalImplant_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsLocal;                                           // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bRetVal;                                           // 0x9(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3348[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x10(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x21(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_334A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x28(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_334B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item;                           // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xB8(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
struct UPrimalItem_StartingNote_C_BPGetItemName_Params
{
public:
	class FString                                ItemNameIn;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsLocalImplant_IsLocal;                   // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_334D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                K2Node_Select_Default;                             // 0x40(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x11D (0x11D - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
struct UPrimalItem_StartingNote_C_Get_Survival_Quotient_String_Params
{
public:
	TArray<double>                               SurvData;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                OutString;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                RetVal;                                            // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x48(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x49(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3358[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FArrayOfStrings                       CallFunc_Array_Get_Item_1;                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x70(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3359[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x88(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_335A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_335B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xB8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_335C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_335D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xF8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x108(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x118(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x11C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x498 (0x498 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
struct UPrimalItem_StartingNote_C_BPGetItemDescription_Params
{
public:
	class FString                                InDescription;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetLongDescription;                               // 0x10(0x1)(ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_337E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       FloatCastVar;                                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                SecondaryString;                                   // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x48(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3381[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetPersistentTimeInSeconds_ReturnValue;   // 0x58(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3382[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x68(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3383[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x80(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BPCanImplantSuicide_ReturnValue;          // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3385[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x99(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3387[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3388[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xB0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xB8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_338A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xD4(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_338C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Max_ReturnValue;                          // 0xD8(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0xDC(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_BPFormatAsTime_ReturnValue;               // 0xE0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0xF0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_338F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x110(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3391[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x118(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x168(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x178(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x180(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x198(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x1B0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_3395[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1B8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x1C8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x1D0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x1D8(0x10)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1E8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x200(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x250(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x260(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x270(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x288(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x298(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x2A8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2B8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3399[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x2C0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2D0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D1(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_339B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x308(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x358(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x3A8(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x3F8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x408(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x418(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x430(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x448(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x458(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x468(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x478(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x480(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x488(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x48C(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x490(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x740 (0x740 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
struct UPrimalItem_StartingNote_C_BPPreInitializeItem_Params
{
public:
	class UWorld*                                OptionalInitWorld;                                 // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_33BA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_1;                            // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_33BC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_2;                            // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                Temp_string_Variable_3;                            // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                Temp_string_Variable_4;                            // 0x58(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FString                                Temp_string_Variable_5;                            // 0x68(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_33BD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0x7C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	class FText                                  Temp_text_Variable;                                // 0x80(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  Temp_text_Variable_1;                              // 0x98(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  Temp_text_Variable_2;                              // 0xB0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  Temp_text_Variable_3;                              // 0xC8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FText                                  Temp_text_Variable_4;                              // 0xE0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         Temp_bool_Variable_1;                              // 0xF8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_33BF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_6;                            // 0x100(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                Temp_string_Variable_7;                            // 0x110(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
	int32                                        Temp_int_Variable_2;                               // 0x120(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_33C0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_8;                            // 0x128(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	class FString                                Temp_string_Variable_9;                            // 0x138(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
	class FString                                Temp_string_Variable_10;                           // 0x148(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                Temp_string_Variable_11;                           // 0x158(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x168(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33C1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x16C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x170(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_12;                           // 0x178(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x188(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_33C4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_13;                           // 0x190(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	int32                                        Temp_int_Variable_3;                               // 0x1A0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_33C5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Select_Default;                             // 0x1A8(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsOfficialServer_ReturnValue;             // 0x1B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_33C6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1BC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33C8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x1C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	TArray<class UClass*>                        K2Node_MakeArray_Array_1;                          // 0x1D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_HasCustomItemData_ReturnValue;            // 0x1E8(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_33C9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       K2Node_MakeArray_Array_2;                          // 0x1F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x200(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x278(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalInventoryComponent*             CallFunc_GetInitializeItemOwnerInventory_ReturnValue; // 0x280(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_Array_Get_Item;                           // 0x288(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x28C(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_33CC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_33CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_Array_Get_Item_1;                         // 0x298(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UPrimalItem*                           CallFunc_Array_Get_Item_2;                         // 0x2A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2A8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2AC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2AD(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2AE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0x2AF(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x2B0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_33D1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x2B8(0x8)(Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2C0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x2C1(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2C2(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x2C3(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2C4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C5(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33D2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               K2Node_Select_Default_1;                           // 0x2C8(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x2D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2D1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33D4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x2D8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_3;                         // 0x2E0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_33D6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2F0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33D7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0x2F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class AShooterPlayerController*              CallFunc_GetSpawnedForController_ReturnValue;      // 0x2F8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_Array_Get_Item_4;                         // 0x300(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x310(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_33D8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x318(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x328(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x330(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_33DB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Array_Get_Item_5;                         // 0x334(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FString                                K2Node_Select_Default_2;                           // 0x338(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x348(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        K2Node_MakeArray_Array_3;                          // 0x350(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x360(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_33DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0x368(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x3E0(0x10)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_Array_Get_Item_6;                         // 0x3F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_Array_Get_Item_7;                         // 0x3F4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0x3F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue_3;                     // 0x3FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	class UTexture2D*                            CallFunc_Array_Get_Item_8;                         // 0x400(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	class FString                                K2Node_Select_Default_3;                           // 0x408(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x418(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_33DE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_Array_Get_Item_9;                         // 0x420(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	class FString                                K2Node_Select_Default_4;                           // 0x428(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x438(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2D*                            CallFunc_Array_Get_Item_10;                        // 0x448(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x450(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x460(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FText                                  K2Node_Select_Default_5;                           // 0x470(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Get_Survival_Quotient_String_OutString;   // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x498(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x4E8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item_11;                        // 0x500(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x510(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x560(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Array_Get_Item_12;                        // 0x578(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x588(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x5D8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Array_Get_Item_13;                        // 0x5F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x600(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x650(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x668(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x6B8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x6C8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x6E0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<double>                               CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast; // 0x6F0(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0x700(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FFloor_A_ImplicitCast_1;                  // 0x708(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	TArray<float>                                K2Node_MakeStruct_CustomDataFloats_ImplicitCast;   // 0x710(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x720(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x728(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_FFloor_A_ImplicitCast_2;                  // 0x730(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FFloor_A_ImplicitCast_3;                  // 0x738(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
struct UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanUse_ReturnValue;                       // 0x5(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33F2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33F3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x20(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
};

}
}


