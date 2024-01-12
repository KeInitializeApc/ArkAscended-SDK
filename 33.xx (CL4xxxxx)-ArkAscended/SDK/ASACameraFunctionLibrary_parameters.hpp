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

// 0x40 (0x40 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation
struct UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               CurrentPivotLocation;                              // 0x8(0x18)(Edit, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               DesiredPivotLocation;                              // 0x20(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bShouldApplyAnyModifier;                           // 0x10(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTargeting_ReturnValue;                  // 0x21(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
};

// 0x320 (0x320 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             ArmLengthInterpParams;                             // 0xE0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35D0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xF0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_35D1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_35D2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_35D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1BC(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1BD(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35D4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_35D5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1CC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D0(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D1(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_35D6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1D8(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x268(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x269(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_35D7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x270(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x279(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_35D8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x288(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x290(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x298(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2A0(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2A8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x2B0(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x2B8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x2C0(0xC)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35DB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2E8(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2F0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F8(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x300(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x308(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x310(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x314(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x318(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x31C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0xB1 (0xB1 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
struct UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        EntryIndex;                                        // 0x98(0x4)(Edit, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_35DE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ModifierAlpha;                                     // 0xA0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
struct UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x358 (0x358 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x110(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x118(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x11C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_35FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x124(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_35FD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetTPVCameraOffset_ReturnValue;           // 0x128(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_35FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x144(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x148(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x1D8(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1F0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1F4(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1F5(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3600[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3601[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x204(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x208(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x209(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3602[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x210(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x2A0(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x2A1(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3605[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x2A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2B0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2C8(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x2E0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2F9(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_360A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x308(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x310(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x318(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x320(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x328(0x18)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x340(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x348(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x350(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x354(0x4)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x2FC (0x2FC - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	double                                       CurrentArmLength;                                  // 0xF0(0x8)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       DesiredArmLength;                                  // 0xF8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3619[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_361A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_361B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_361C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1BC(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1C0(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1C1(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_361D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_361E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D9(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_361F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E0(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x270(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x271(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3620[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x278(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       K2Node_VariableGet_DesiredArmLength_ImplicitCast;  // 0x280(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x290(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x291(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3621[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2A0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2A8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2B0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2B8(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2C0(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSetRef_Target_ImplicitCast;         // 0x2D0(0x4)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3622[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2D8(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2E0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x2E8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F0(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x2F8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bShouldApplyModifier;                              // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bShouldLerp;                                       // 0xA1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3627[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0xA8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3628[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xD0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0xD8(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0xE0(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0xE8(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0xF0(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue; // 0xF8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x110(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x114(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x118(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x11C(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_362A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x120(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x128(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x129(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_362B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x130(0x8)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;  // 0x138(0x8)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x140(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

// 0x3D8 (0x3D8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsX;                                     // 0xE0(0xC)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsY;                                     // 0xEC(0xC)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsZ;                                     // 0xF8(0xC)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0x108(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x118(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x120(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bOverrideInterpParams;                             // 0x128(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_363D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             FinalInterpParams;                                 // 0x12C(0xC)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsToModify;                              // 0x138(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x144(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x150(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1E0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E1(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1E2(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1E3(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E4(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1E5(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E6(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_363E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E8(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x278(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_363F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x27C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x280(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x281(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3641[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x288(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x290(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3642[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x294(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x298(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x299(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3643[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_2;                         // 0x2A0(0x90)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x330(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x331(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x332(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x333(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x334(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3644[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x348(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x350(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x358(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x360(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x368(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x370(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x378(0xC)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3647[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x390(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x398(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x3A0(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3A8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x3B0(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x3B8(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x3C0(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x3C8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x3CC(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x3D0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x3D4(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xE0(0xC)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_364F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params
{
public:
	class APrimalCharacter*                      CharacterToKeepOnScreen;                           // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0xE0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CurrentCameraArmLength;                            // 0xE8(0x8)(BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       DesiredCameraArmLength;                            // 0xF0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0xF8(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       ScreenAreaToUse;                                   // 0x100(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bStopLoop;                                         // 0x108(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         VelocityIsNearlyZero;                              // 0x109(0x1)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3659[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WorldLocationToProject;                            // 0x110(0x18)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CharacterScreenAreaY;                              // 0x128(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CharacterScreenAreaX;                              // 0x130(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x24C (0x24C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
struct UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xE0(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsX;                            // 0x114(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsY;                            // 0x120(0xC)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsZ;                            // 0x12C(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsX;                                // 0x138(0xC)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsY;                                // 0x144(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsZ;                                // 0x150(0xC)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3662[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x160(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       TheScreenArea;                                     // 0x170(0x8)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3664[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0x190(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x199(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x19A(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19B(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3665[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1A9(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1AA(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1AB(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1AC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_2;                // 0x1AD(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1AE(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue; // 0x1AF(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B1(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3667[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x1B8(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x1C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x1C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x1D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x1D8(0xC)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3669[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0x1E8(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x1F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_1;         // 0x1F8(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_2;         // 0x200(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast;       // 0x208(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1;     // 0x210(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2;     // 0x218(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast;            // 0x220(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x228(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_1;          // 0x230(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_2;          // 0x238(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x240(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x244(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x248(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x370 (0x370 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
struct UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParams;                                      // 0xE0(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_366F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsModifiers;                             // 0xF0(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  DebugScreenModifierId;                             // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsCrouchedOrProne;                                // 0x110(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3672[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpScreenAreaModifier ScreenModifierForDebug;                            // 0x118(0x50)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       TheScreenArea;                                     // 0x170(0x8)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3673[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0x190(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3674[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1A0(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3675[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1CA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1CB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1CC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1CD(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1CE(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3676[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1D0(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D4(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3677[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpScreenAreaModifier CallFunc_Array_Get_Item;                           // 0x1D8(0x50)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x230(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x238(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x240(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x248(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x250(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x258(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x260(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x268(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_367A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x278(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x279(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x27A(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_367B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaX;    // 0x280(0x8)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaY;    // 0x288(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeX;  // 0x290(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeY;  // 0x298(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosX;  // 0x2A0(0x8)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosY;  // 0x2A8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2B0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2B4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_367C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2B8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2BC(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x2BD(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x2BE(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_367E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             K2Node_Select_Default;                             // 0x2C0(0xC)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_367F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2D8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2E0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2E8(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2F0(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2F8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x300(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x308(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x310(0xC)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3681[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x320(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x328(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x330(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x338(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x340(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x360(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x364(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x368(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x36C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x11C (0x11C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
struct UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               WorldLocationToProject;                            // 0x8(0x18)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	double                                       ScreenAreaX;                                       // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       ScreenAreaY;                                       // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       ViewportSizeX;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       ViewportSizeY;                                     // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       ScreenRawPosX;                                     // 0x48(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       ScreenRawPosY;                                     // 0x50(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3699[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector2D                             CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x70(0x10)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x80(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_369B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue; // 0x84(0x38)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_369C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             CallFunc_GetAbsoluteSize_ReturnValue;              // 0xD0(0x10)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_369D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xF0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xF8(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_369E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x108(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x111(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36A6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x114(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x118(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference, Interp)
};

}
}


