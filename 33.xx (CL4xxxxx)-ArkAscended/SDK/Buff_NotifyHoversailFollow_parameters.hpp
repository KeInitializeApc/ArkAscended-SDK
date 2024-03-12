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

// 0x490 (0x490 - 0x0)
// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements
struct ABuff_NotifyHoversailFollow_C_BPGetHUDElements_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FHUDElement>                   OutElements;                                       // 0x8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ScreenPos;                                         // 0x18(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FHUDElement                           LocalLocationHUDElem;                              // 0x28(0x1B0)(ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class APlayerController*                     PC;                                                // 0x1D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FHUDElement>                   Elements;                                          // 0x1E0(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Atan2_ReturnValue;                        // 0x1F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue;              // 0x1F8(0x10)(BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x208(0x10)(Edit, ExportObject, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_BreakColor_R;                             // 0x218(0x4)(Edit, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_G;                             // 0x21C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_B;                             // 0x220(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_A;                             // 0x224(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakColor_R_1;                           // 0x228(0x4)(Edit, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakColor_G_1;                           // 0x22C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakColor_B_1;                           // 0x230(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakColor_A_1;                           // 0x234(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x238(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x248(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52D1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x258(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        CallFunc_GetViewportScale_ReturnValue;             // 0x270(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52D2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x278(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x288(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52D3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x290(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x2A8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_52D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x2B0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x2C8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x2E0(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x2E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x2F0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x2F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MapRangeUnclamped_ReturnValue;            // 0x308(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x310(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x320(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x330(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52D5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x334(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52D6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x348(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x358(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor_1;                   // 0x368(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeUnclamped_ReturnValue_2;          // 0x380(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x388(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x390(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x3A8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3B8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_ScreenPosition; // 0x3D0(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_OnScreen; // 0x3E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_ReturnValue; // 0x3E1(0x1)(Edit, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52D7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x3E8(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x3F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x400(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x410(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x420(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_Normal2D_ReturnValue;                     // 0x430(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x440(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x448(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Atan2_ReturnValue_1;                      // 0x450(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x458(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_RadiansToDegrees_ReturnValue;             // 0x460(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x468(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x470(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast; // 0x478(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_A_ImplicitCast;                  // 0x480(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_A_ImplicitCast_1;                // 0x484(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x488(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetHUDElementIconRotation_NewAngle_ImplicitCast; // 0x48C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc
struct ABuff_NotifyHoversailFollow_C_Set_and_Pass_Loc_Params
{
public:
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_52D8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x30(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer
struct ABuff_NotifyHoversailFollow_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient
struct ABuff_NotifyHoversailFollow_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_52D9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_52DA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x18(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x20(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x29(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2B(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

}
}


