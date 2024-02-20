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

// 0x31 (0x31 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation
struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params
{
public:
	struct FVector                               CurrentCameraPivotLocation;                        // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               DesiredCameraPivotLocation;                        // 0x18(0x18)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params
{
public:
	struct FRotator                              CurrentCameraPivotRotation;                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              DesiredCameraPivotRotation;                        // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2014[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakRotator_Roll;                        // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x3C(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x40(0x18)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0xF1 (0xF1 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DesiredCameraOffset;                               // 0xD8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x155 (0x155 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
struct ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xD8(0x34)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastInterpParamsX;                                 // 0x10C(0xC)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastInterpParamsY;                                 // 0x118(0xC)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastInterpParamsZ;                                 // 0x124(0xC)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParamsX;                                  // 0x130(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParamsY;                                  // 0x13C(0xC)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParamsZ;                                  // 0x148(0xC)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x154(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE5 (0xE5 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
struct ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xD8(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
struct ADino_Character_BP_C_BPOverrideCameraArmLength_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentCameraArmLength;                            // 0xD8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DesiredCameraArmLength;                            // 0xDC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2035[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast; // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast; // 0xF0(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
};

// 0x54 (0x54 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
struct ADino_Character_BP_C_GetFXBloodColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x41(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2057[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_GetFXBloodColor_ReturnValue;              // 0x44(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
struct ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
public:
	bool                                         bInputWantsToRun;                                  // 0x0(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         RetVal;                                            // 0x2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BlueprintOverrideWantsToRun_ReturnValue;  // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_K2_TimerExists_ReturnValue;               // 0x5(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_20EE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsWildSlow_ReturnValue;                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20F0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x20(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x21(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x22(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x23(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_20F1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x28(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast; // 0x30(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1; // 0x34(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
struct ADino_Character_BP_C_UpdateBabyAndRunValues_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_210E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AAIController*                         CallFunc_GetAIController_ReturnValue;              // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ADino_AIController_BP_C*               K2Node_DynamicCast_AsDino_AIController_BP;         // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsWildSlow_ReturnValue;                   // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2110[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AAIController*                         CallFunc_GetAIController_ReturnValue_1;            // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x39(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2112[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_VariableSet_FollowStoppingDistance_ImplicitCast; // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast; // 0x40(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast; // 0x44(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1; // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1; // 0x4C(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1; // 0x50(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2; // 0x54(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0x118 (0x118 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
struct ADino_Character_BP_C_BPControlRigNotify_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FName                                  NotifyCustomTag;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x10(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Velocity;                                          // 0x100(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
struct ADino_Character_BP_C_GetDinoContentData_Params
{
public:
	struct FDinoContentData                      DinoContentData;                                   // 0x0(0x20)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, DuplicateTransient)
};

// 0x40 (0x40 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
struct ADino_Character_BP_C_BPHandleRightShoulderButton_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2184[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2186[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class APrimalBuff*>                   CallFunc_GetBuffs_TheBuffs;                        // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalBuff*                           CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2195[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_DinoTekHelmet_Base_C*            K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base;    // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_219A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated
struct ADino_Character_BP_C_BlendSpaceGenerated_Params
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX
struct ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      VictimChar;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x274 (0x274 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP
struct ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_220D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x8(0x18)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x20(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_220E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x28(0x8)(Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_TimeSeconds_ReturnValue;                  // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2210[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x49(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2211[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x58(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x60(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2212[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          CallFunc_GetCurrentMontage_ReturnValue;            // 0x68(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x70(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x74(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2213[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlendSpace*                           K2Node_Event_blendSpace;                           // 0x78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x91(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x92(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x93(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Contains_ReturnValue_3;                   // 0x94(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Contains_ReturnValue_4;                   // 0x95(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_2215[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x9C(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9D(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_221E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class USceneComponent*>               CallFunc_GetComponentsByTag_ReturnValue;           // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2221[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       K2Node_DynamicCast_AsScene_Component;              // 0xC0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2222[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0xD0(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0xE8(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x100(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2225[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x110(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x170(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2228[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x178(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x180(0x8)(Edit, ConstParm, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x188(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_DoesUseHibernation_ReturnValue;           // 0x189(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2233[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  K2Node_Event_SocketName;                           // 0x18C(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_224C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_Event_VictimChar;                           // 0x198(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_GetFXBloodColor_ReturnValue;              // 0x1A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x1B0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_224D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x1B8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x1C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2250[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1CC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2251[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x1D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x1E0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_2252[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x1E8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	class FName                                  Temp_name_Variable;                                // 0x1F0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x1F8(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	class FName                                  Temp_name_Variable_1;                              // 0x200(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  Temp_name_Variable_2;                              // 0x208(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FName                                  Temp_name_Variable_3;                              // 0x210(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FName                                  Temp_name_Variable_4;                              // 0x218(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x228(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x230(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x238(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2270[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x240(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x248(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;    // 0x250(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_B_ImplicitCast_1;             // 0x258(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x260(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;    // 0x268(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
};

}
}


