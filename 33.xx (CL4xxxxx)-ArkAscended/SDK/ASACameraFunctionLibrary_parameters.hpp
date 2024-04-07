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
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               CurrentPivotLocation;                              // 0x8(0x18)(ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               DesiredPivotLocation;                              // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldApplyAnyModifier;                           // 0x10(0x1)(ExportObject, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B79[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsTargeting_ReturnValue;                  // 0x21(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x320 (0x320 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             ArmLengthInterpParams;                             // 0xE0(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B80[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2B82[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2B84[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2B85[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1BC(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1BD(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B86[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C0(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2B87[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1CC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2B88[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1D8(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x268(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x269(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2B89[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x270(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x278(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x279(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2B8A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x280(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x288(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x298(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2A0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2A8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x2B0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x2B8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x2C0(0xC)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B8C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2E8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2F0(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F8(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x300(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x308(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x310(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x314(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x318(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x31C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0xB1 (0xB1 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
struct UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        EntryIndex;                                        // 0x98(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B9A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ModifierAlpha;                                     // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
struct UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x358 (0x358 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x110(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x118(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x11C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2BA4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x124(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2BA5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetTPVCameraOffset_ReturnValue;           // 0x128(0x18)(ConstParm, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2BA6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x144(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x148(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x1D8(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1F0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1F4(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1F5(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BA7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1F8(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2BA8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x204(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x208(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x209(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2BAA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x210(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x2A0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x2A1(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2BAC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x2A8(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2B0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2C8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x2E0(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2F8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2F9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2BB0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x300(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x308(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x318(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x320(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x328(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x340(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x348(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x350(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x354(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x2FC (0x2FC - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CurrentArmLength;                                  // 0xF0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       DesiredArmLength;                                  // 0xF8(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2BC3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2BC4[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2BC5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1B8(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_2BC6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1BC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1C0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1C1(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BC8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C8(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2BC9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2BCD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E0(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x270(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x271(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2BCF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x278(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       K2Node_VariableGet_DesiredArmLength_ImplicitCast;  // 0x280(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x288(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x290(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x291(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2BD3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x298(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2B0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2B8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2C0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x2C8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        K2Node_VariableSetRef_Target_ImplicitCast;         // 0x2D0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BD5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2D8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2E0(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x2E8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F0(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x2F8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldApplyModifier;                              // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bShouldLerp;                                       // 0xA1(0x1)(Net, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BDB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0xA8(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2BDC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xD0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0xD8(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0xE0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0xE8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0xF0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FRotator                              CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue; // 0xF8(0x18)(Edit, BlueprintVisible, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x110(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x114(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x118(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x11C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BDF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x120(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x128(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x129(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2BE0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x130(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;  // 0x138(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x140(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x3D8 (0x3D8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsX;                                     // 0xE0(0xC)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsY;                                     // 0xEC(0xC)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsZ;                                     // 0xF8(0xC)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BF8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0x108(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x118(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x120(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bOverrideInterpParams;                             // 0x128(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BFC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             FinalInterpParams;                                 // 0x12C(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsToModify;                              // 0x138(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x144(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x150(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1E0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1E2(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1E3(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E4(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1E5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E6(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C01[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E8(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x278(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C02[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x27C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x280(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x281(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C04[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x288(0x8)(Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x290(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C05[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x294(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x298(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x299(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_2C07[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_2;                         // 0x2A0(0x90)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x330(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x331(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x332(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x333(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x334(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C0A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x358(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x360(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x370(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x378(0xC)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C0C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x388(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x390(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x398(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x3A0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3A8(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x3B0(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x3B8(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x3C0(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x3C8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x3CC(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x3D0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x3D4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xE0(0xC)(ConstParm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C19[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params
{
public:
	class APrimalCharacter*                      CharacterToKeepOnScreen;                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0xE0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CurrentCameraArmLength;                            // 0xE8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       DesiredCameraArmLength;                            // 0xF0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0xF8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ScreenAreaToUse;                                   // 0x100(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bStopLoop;                                         // 0x108(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         VelocityIsNearlyZero;                              // 0x109(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C25[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WorldLocationToProject;                            // 0x110(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharacterScreenAreaY;                              // 0x128(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CharacterScreenAreaX;                              // 0x130(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x24C (0x24C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
struct UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xE0(0x34)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsX;                            // 0x114(0xC)(Edit, BlueprintVisible, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsY;                            // 0x120(0xC)(Edit, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsZ;                            // 0x12C(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsX;                                // 0x138(0xC)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsY;                                // 0x144(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsZ;                                // 0x150(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C44[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x160(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       TheScreenArea;                                     // 0x170(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C47[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0x190(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x198(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x199(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x19A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19B(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C48[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1A9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1AA(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1AB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1AC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_2;                // 0x1AD(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1AE(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue; // 0x1AF(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_2C4C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x1C0(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x1C8(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x1D0(0x8)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x1D8(0xC)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C4D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0x1E8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x1F0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_1;         // 0x1F8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_2;         // 0x200(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast;       // 0x208(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1;     // 0x210(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2;     // 0x218(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast;            // 0x220(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x228(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_1;          // 0x230(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_2;          // 0x238(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x240(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x244(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x248(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x370 (0x370 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
struct UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParams;                                      // 0xE0(0xC)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C83[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsModifiers;                             // 0xF0(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FName                                  DebugScreenModifierId;                             // 0x100(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsCrouchedOrProne;                                // 0x110(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C85[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpScreenAreaModifier ScreenModifierForDebug;                            // 0x118(0x50)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       TheScreenArea;                                     // 0x170(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C87[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0x190(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C89[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1A0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C8C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1CA(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1CB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1CC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1CD(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1CE(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_2C8F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1D0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C90[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpScreenAreaModifier CallFunc_Array_Get_Item;                           // 0x1D8(0x50)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x228(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x230(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x238(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x240(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x248(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x250(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x258(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x260(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x268(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2C93[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x270(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x278(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x279(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x27A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2C94[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaX;    // 0x280(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaY;    // 0x288(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeX;  // 0x290(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeY;  // 0x298(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosX;  // 0x2A0(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosY;  // 0x2A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2B0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2B4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C97[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2B8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2BC(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x2BD(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x2BE(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C99[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             K2Node_Select_Default;                             // 0x2C0(0xC)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2CC(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C9A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x2D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2E0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2E8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2F0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2F8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x300(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x308(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x310(0xC)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CA0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x320(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x328(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x330(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x338(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x340(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x360(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x364(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x368(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x36C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x11C (0x11C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
struct UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               WorldLocationToProject;                            // 0x8(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ScreenAreaX;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ScreenAreaY;                                       // 0x30(0x8)(Edit, ConstParm, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ViewportSizeX;                                     // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ViewportSizeY;                                     // 0x40(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ScreenRawPosX;                                     // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ScreenRawPosY;                                     // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2CB8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x60(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x80(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CBB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue; // 0x84(0x38)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CBC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_GetAbsoluteSize_ReturnValue;              // 0xD0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2CBD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xF0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xF8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x100(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2CC1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x108(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x110(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x111(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2CC4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x114(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x118(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

}
}

