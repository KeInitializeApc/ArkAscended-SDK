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

// 0x2 (0x2 - 0x0)
// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetMaterials
struct ABP_IslandWaterPlane_C_SetMaterials_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetFoamIntensity
struct ABP_IslandWaterPlane_C_SetFoamIntensity_Params
{
public:
	double                                       FoamIntensity;                                     // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5C05[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x18(0x8)(Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5C06[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x24(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0xFC (0xFC - 0x0)
// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UpdateSun
struct ABP_IslandWaterPlane_C_UpdateSun_Params
{
public:
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x1C(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x20(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5C07[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x28(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_MapRangeUnclamped_ReturnValue;            // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x68(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x78(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x80(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x98(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_X_1;                          // 0xB0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xC0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor_1;                   // 0xC8(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0xD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_MakeStruct_R_ImplicitCast;                  // 0xE0(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_G_ImplicitCast;                  // 0xE4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_B_ImplicitCast;                  // 0xE8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0xEC(0x4)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_R_ImplicitCast_1;                // 0xF0(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        K2Node_MakeStruct_G_ImplicitCast_1;                // 0xF4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        K2Node_MakeStruct_B_ImplicitCast_1;                // 0xF8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
};

// 0x154 (0x154 - 0x0)
// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UserConstructionScript
struct ABP_IslandWaterPlane_C_UserConstructionScript_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x28(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x33(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5C08[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x38(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x128(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x140(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x150(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x64 (0x64 - 0x0)
// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ExecuteUbergraph_BP_IslandWaterPlane
struct ABP_IslandWaterPlane_C_ExecuteUbergraph_BP_IslandWaterPlane_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x6(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_5C0A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x10(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x20(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x29(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5C0B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x38(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class ADirectionalLight*                     CallFunc_GetFirstDirectionalLight_ReturnValue;     // 0x40(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class ADayCycleManager*                      CallFunc_GetDayCycleManager_ReturnValue;           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x50(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x58(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x60(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


