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
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               CurrentPivotLocation;                              // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               DesiredPivotLocation;                              // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         bShouldApplyAnyModifier;                           // 0x10(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A58[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsTargeting_ReturnValue;                  // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

// 0x320 (0x320 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             ArmLengthInterpParams;                             // 0xE0(0xC)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A8C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xF0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A8F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A90[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1BC(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1BD(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A92[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A93[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1CC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D1(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2A94[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1D8(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x268(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x269(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2A95[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x270(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x278(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x279(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2A96[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x280(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x288(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x290(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x298(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2A0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2A8(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x2B0(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x2B8(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x2C0(0xC)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A97[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x2D0(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x2D8(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x2E0(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2F0(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F8(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x300(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x308(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x310(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x314(0x4)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x318(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x31C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xB1 (0xB1 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
struct UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        EntryIndex;                                        // 0x98(0x4)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AB2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ModifierAlpha;                                     // 0xA0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
struct UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
};

// 0x358 (0x358 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x110(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x118(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x11C(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AF2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x124(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AF3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetTPVCameraOffset_ReturnValue;           // 0x128(0x18)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AF4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x144(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x148(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x1D8(0x18)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1F0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1F4(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1F5(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AF6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1F8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AF7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x204(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x208(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x209(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2AF9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x210(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x2A0(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x2A1(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2AFB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x2A8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2C8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x2E0(0x18)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2F8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2F9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2AFC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x300(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x308(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x310(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x318(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x320(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x328(0x18)(ConstParm, ExportObject, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x348(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x350(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x354(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x2FC (0x2FC - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CurrentArmLength;                                  // 0xF0(0x8)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       DesiredArmLength;                                  // 0xF8(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B0F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B12[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B18[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1B8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B1A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1BC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1C0(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1C1(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B1E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B1F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D9(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2B23[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E0(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x270(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x271(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2B25[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x278(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       K2Node_VariableGet_DesiredArmLength_ImplicitCast;  // 0x280(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x288(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x290(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x291(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2B28[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x298(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2A0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2B8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2C0(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSetRef_Target_ImplicitCast;         // 0x2D0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B2C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2E0(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x2E8(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x2F8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         bShouldApplyModifier;                              // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bShouldLerp;                                       // 0xA1(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B3D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0xA8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B3E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xD0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0xD8(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0xE0(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0xE8(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0xF0(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
	struct FRotator                              CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue; // 0xF8(0x18)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x110(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x114(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x118(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x11C(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B40[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x120(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x128(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x129(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2B41[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x130(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;  // 0x138(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x140(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x3D8 (0x3D8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsX;                                     // 0xE0(0xC)(ConstParm, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsY;                                     // 0xEC(0xC)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsZ;                                     // 0xF8(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B54[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0x108(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x118(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       PitchModifierAlpha;                                // 0x120(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bOverrideInterpParams;                             // 0x128(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B55[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             FinalInterpParams;                                 // 0x12C(0xC)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParamsToModify;                              // 0x138(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        FoundEntryIndex;                                   // 0x144(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x150(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1E0(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E1(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1E2(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1E3(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1E5(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E6(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B57[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E8(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x278(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2B59[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x27C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x280(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x281(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B5A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x288(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x290(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B5B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x294(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x298(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x299(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
	uint8                                        Pad_2B5E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_2;                         // 0x2A0(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x330(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x331(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x332(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x333(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x334(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2B60[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x358(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x360(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x368(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x370(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x378(0xC)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B69[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x388(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x390(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x398(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3A8(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x3B0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x3B8(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x3C0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x3C8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x3CC(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x3D0(0x4)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x3D4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xE0(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B76[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params
{
public:
	class APrimalCharacter*                      CharacterToKeepOnScreen;                           // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0xE0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CurrentCameraArmLength;                            // 0xE8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       DesiredCameraArmLength;                            // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0xF8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       ScreenAreaToUse;                                   // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bStopLoop;                                         // 0x108(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         VelocityIsNearlyZero;                              // 0x109(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B7A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WorldLocationToProject;                            // 0x110(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharacterScreenAreaY;                              // 0x128(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharacterScreenAreaX;                              // 0x130(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x24C (0x24C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
struct UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xE0(0x34)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsX;                            // 0x114(0xC)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsY;                            // 0x120(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsZ;                            // 0x12C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsX;                                // 0x138(0xC)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsY;                                // 0x144(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             PivotInterpParamsZ;                                // 0x150(0xC)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B94[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x160(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       TheScreenArea;                                     // 0x170(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B96[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0x190(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x199(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x19A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19B(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B97[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1A9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1AA(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1AB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1AC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_2;                // 0x1AD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1AE(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue; // 0x1AF(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B99[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x1B8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x1C0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x1C8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x1D0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x1D8(0xC)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B9B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0x1E8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x1F0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_1;         // 0x1F8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_2;         // 0x200(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast;       // 0x208(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1;     // 0x210(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2;     // 0x218(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast;            // 0x220(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_1;          // 0x230(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_2;          // 0x238(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x240(0x4)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x244(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x248(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x370 (0x370 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
struct UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             InterpParams;                                      // 0xE0(0xC)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BBC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsModifiers;                             // 0xF0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FName                                  DebugScreenModifierId;                             // 0x100(0x8)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         bIsCrouchedOrProne;                                // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BBD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpScreenAreaModifier ScreenModifierForDebug;                            // 0x118(0x50)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       TheScreenArea;                                     // 0x170(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BBE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LerpAlpha;                                         // 0x190(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BBF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1A0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BC0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1CA(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1CB(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1CC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1CD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1CE(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
	uint8                                        Pad_2BC2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1D0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BC3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpScreenAreaModifier CallFunc_Array_Get_Item;                           // 0x1D8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x230(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x238(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x240(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x248(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x250(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x258(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x260(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x268(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BC4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x270(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x278(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x279(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x27A(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_2BC5[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaX;    // 0x280(0x8)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaY;    // 0x288(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeX;  // 0x290(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeY;  // 0x298(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosX;  // 0x2A0(0x8)(ExportObject, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosY;  // 0x2A8(0x8)(Edit, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2B0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2B4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BC6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2B8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2BC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x2BD(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x2BE(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2BC8[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             K2Node_Select_Default;                             // 0x2C0(0xC)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2CC(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2BC9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x2D0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2E0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2F0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2F8(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x300(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x308(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x310(0xC)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BCD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x320(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x328(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x330(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x338(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x340(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x348(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x350(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x358(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x360(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x364(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x368(0x4)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x36C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11C (0x11C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
struct UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               WorldLocationToProject;                            // 0x8(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       ScreenAreaX;                                       // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ScreenAreaY;                                       // 0x30(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ViewportSizeX;                                     // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ViewportSizeY;                                     // 0x40(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ScreenRawPosX;                                     // 0x48(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       ScreenRawPosY;                                     // 0x50(0x8)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BDF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x60(0x8)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x70(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x80(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BE0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue; // 0x84(0x38)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BE2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_GetAbsoluteSize_ReturnValue;              // 0xD0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2BE3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xF0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x100(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2BEB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x110(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x111(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BEC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x114(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x118(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
};

}
}


