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
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Get Bubble System Tag
struct UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
};

// 0x62 (0x62 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
struct UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params
{
public:
	class FName                                  BubbleSystemTag;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_Get_Bubble_System_Tag_ReturnValue;        // 0x1C(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	uint8                                        Pad_2F8F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	TArray<class UActorComponent*>               CallFunc_GetComponentsByCustomTag_ReturnValue;     // 0x30(0x10)(BlueprintVisible, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F91[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x59(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2F94[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x61(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20C (0x20C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
struct UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params
{
public:
	struct FVector                               Current_location;                                  // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FVector                               Delta;                                             // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class FName                                  BubbleSystemTag;                                   // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, SubobjectReference)
	class UNiagaraComponent*                     Local_bubble_system_ref;                           // 0x38(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         Has_Existing_Bubble_System;                        // 0x40(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FB3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x60(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FB5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x68(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x74(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x75(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FB6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x78(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x80(0x18)(BlueprintVisible, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FB8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_Get_Bubble_System_Tag_ReturnValue;        // 0xA4(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FB9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue;                        // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xD0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xE8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x100(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x118(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x130(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x148(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x158(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue; // 0x170(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x188(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FBD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UActorComponent*>               CallFunc_GetComponentsByCustomTag_ReturnValue;     // 0x1B0(0x10)(BlueprintVisible, OutParm, ReturnParm, SubobjectReference)
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FBE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x1D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1DA(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x1DB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1DC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1DD(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2FC0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x1E0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1E8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_2FC2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHitResult>                    CallFunc_SphereTraceMulti_OutHits;                 // 0x1F0(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_SphereTraceMulti_ReturnValue;             // 0x200(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FC3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x204(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x208(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
};

// 0xF0 (0xF0 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
struct UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params
{
public:
	float                                        PenetrationScalar;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FCA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Exited;                                            // 0x20(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2FCB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OwnerVelocity;                                     // 0x28(0x18)(ConstParm, DisableEditOnTemplate, SubobjectReference)
	class USoundBase*                            Temp_object_Variable;                              // 0x40(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x58(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x60(0x8)(Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x68(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x6C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x70(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x78(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x80(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x88(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Variable;                                 // 0x90(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2FCD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            Temp_object_Variable_5;                            // 0x98(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp, NonTransactional)
	class USoundBase*                            Temp_object_Variable_6;                            // 0xA0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp, NonTransactional)
	class USoundBase*                            Temp_object_Variable_7;                            // 0xA8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, EditorOnly)
	class USoundBase*                            Temp_object_Variable_8;                            // 0xB0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, EditorOnly)
	class USoundBase*                            Temp_object_Variable_9;                            // 0xB8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp, EditorOnly)
	class USoundBase*                            K2Node_Select_Default;                             // 0xC0(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class USoundBase*                            Temp_object_Variable_10;                           // 0xC8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp, EditorOnly)
	int32                                        Temp_int_Variable_1;                               // 0xD0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2FCF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default_1;                           // 0xD8(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0xE0(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0xE8(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
};

// 0x1D8 (0x1D8 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
struct UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params
{
public:
	float                                        PenetrationScalar;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FD8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Exited;                                            // 0x20(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2FD9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OwnerVelocity;                                     // 0x28(0x18)(ConstParm, DisableEditOnTemplate, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x40(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FDA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x68(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x70(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x78(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x91(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FDD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x98(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FHitResult                            CallFunc_VTraceSingleBP_OutHit;                    // 0xB0(0xF0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_VTraceSingleBP_ReturnValue;               // 0x1A0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FDE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_SetVariableVec3_InValue_ImplicitCast;     // 0x1A8(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_A_ImplicitCast;     // 0x1C0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
struct UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params
{
public:
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x18(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x28(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FE6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x50(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x68(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	struct FVector3f                             K2Node_VariableSet_CurrentVelocity_ImplicitCast;   // 0x80(0xC)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_2FE9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_VariableSet_actor_velocity_prev_ImplicitCast; // 0x90(0x18)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_A_ImplicitCast;     // 0xA8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactedFluidSurface
struct UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
struct UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
struct UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xA4 (0xA4 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.ExecuteUbergraph_BP_PrimalWindSourceComponent_Base
struct UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_300A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_impactLocation_2;                     // 0x8(0x18)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_Event_penetrationScalar_2;                  // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_300B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_impactLocation_1;                     // 0x28(0x18)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
	float                                        K2Node_Event_penetrationScalar_1;                  // 0x40(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x44(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_300C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Fraction_ReturnValue;                     // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	uint8                                        Pad_300D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
	uint8                                        Pad_300E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0x68(0x8)(Edit, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x70(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_300F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x78(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3010[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x80(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	struct FVector                               K2Node_Event_impactLocation;                       // 0x88(0x18)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	float                                        K2Node_Event_penetrationScalar;                    // 0xA0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
};

}
}


