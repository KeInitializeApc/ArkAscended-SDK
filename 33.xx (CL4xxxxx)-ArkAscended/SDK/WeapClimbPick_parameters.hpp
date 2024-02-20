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

// 0x2C (0x2C - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
struct AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params
{
public:
	struct FWeaponAnim                           Animation;                                         // 0x0(0x10)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        InPlayRate;                                        // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPlayBothFirstAndThirdPerson;                      // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReplicate;                                        // 0x15(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bReplicateToInstigator;                            // 0x16(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPauseOnFinish1P;                                  // 0x17(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bForceTickPoseAndServerUpdateMesh;                 // 0x18(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bForceTickPoseOnServer;                            // 0x19(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3362[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x6A (0x6A - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
struct AWeapClimbPick_C_StartUnequipEvent_Params
{
public:
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x48(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3367[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetGroundLocation_theGroundLoc;           // 0x50(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GetGroundLocation_ReturnValue;            // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
struct AWeapClimbPick_C_BPModifyFOV_Params
{
public:
	float                                        InFOV;                                             // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_336A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
struct AWeapClimbPick_C_SetSourceLocation_Params
{
public:
	class UParticleSystemComponent*              Particle_System;                                   // 0x0(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               NewSourcePoint;                                    // 0x8(0x18)(ConstParm, BlueprintVisible, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x24(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3370[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
struct AWeapClimbPick_C_SetTemplateTo_Params
{
public:
	class UParticleSystemComponent*              Particle_System;                                   // 0x0(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class UParticleSystem*                       New_Template;                                      // 0x8(0x8)(Edit, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x784 (0x784 - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
struct AWeapClimbPick_C_BPUpdateClimbTarget_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bClimbing;                                         // 0x4(0x1)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_339C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AnchorPosition;                                    // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               AnchorNormal;                                      // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanClimb;                                         // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanLand;                                          // 0x39(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_339D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ClimbLocation;                                     // 0x40(0x18)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ClimbNormal;                                       // 0x58(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHudVisible;                                       // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_339E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SourceTangent;                                     // 0x78(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x90(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_339F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x98(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33A0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0xB8(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetViewDirection_ReturnValue;             // 0xD0(0x18)(ExportObject, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xE8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x100(0x18)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x118(0x18)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x148(0xF0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x238(0xF0)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_GetViewLocation_ReturnValue;              // 0x328(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x340(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x358(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33A1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue;                        // 0x360(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x368(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_33A2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x378(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x380(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x388(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x390(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x398(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x3A0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x3B8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x3D8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x3F0(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x408(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x410(0x18)(Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x428(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue_1;           // 0x440(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x458(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x470(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x488(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x4A0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_NegateVector_ReturnValue;                 // 0x4B8(0x18)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_VInterpTo_ReturnValue_1;                  // 0x4D0(0x18)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x4E8(0x18)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x500(0x18)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Temp_byte_Variable;                                // 0x518(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_33A3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_RInterpTo_ReturnValue_1;                  // 0x520(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               K2Node_Select_Default;                             // 0x538(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x550(0xF0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x640(0xF0)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x730(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x748(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x760(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x768(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_33A4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_VInterpTo_InterpSpeed_ImplicitCast;       // 0x76C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_RInterpTo_InterpSpeed_ImplicitCast;       // 0x770(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast; // 0x774(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast; // 0x778(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1;     // 0x77C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;     // 0x780(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

}
}


