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
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x62 (0x62 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
struct UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params
{
public:
	class FName                                  BubbleSystemTag;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x8(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F61[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F62[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  CallFunc_Get_Bubble_System_Tag_ReturnValue;        // 0x1C(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class UActorComponent*>               CallFunc_GetComponentsByCustomTag_ReturnValue;     // 0x30(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F64[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x50(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x59(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_2F65[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x61(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x20C (0x20C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
struct UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params
{
public:
	struct FVector                               Current_location;                                  // 0x0(0x18)(ConstParm, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Delta;                                             // 0x18(0x18)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  BubbleSystemTag;                                   // 0x30(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     Local_bubble_system_ref;                           // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Has_Existing_Bubble_System;                        // 0x40(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F73[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x50(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x58(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x60(0x1)(BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F74[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x68(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x74(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x75(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F76[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x78(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x80(0x18)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x98(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA0(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F78[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_Get_Bubble_System_Tag_ReturnValue;        // 0xA4(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F79[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue;                        // 0xB0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xB8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xD0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xE8(0x18)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x100(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x118(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x130(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x148(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x158(0x18)(Edit, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue; // 0x170(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x188(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A0(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F7B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UActorComponent*>               CallFunc_GetComponentsByCustomTag_ReturnValue;     // 0x1B0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F7C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x1D0(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1DA(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x1DB(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1DC(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1DD(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F7E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x1E0(0x8)(EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1E8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_2F7F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHitResult>                    CallFunc_SphereTraceMulti_OutHits;                 // 0x1F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_SphereTraceMulti_ReturnValue;             // 0x200(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F80[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x204(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x208(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0xF0 (0xF0 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
struct UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params
{
public:
	float                                        PenetrationScalar;                                 // 0x0(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F86[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Exited;                                            // 0x20(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F87[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OwnerVelocity;                                     // 0x28(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Temp_object_Variable;                              // 0x40(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x48(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x50(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x58(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x60(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x68(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x6C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x70(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x80(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Variable;                                 // 0x90(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F88[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            Temp_object_Variable_5;                            // 0x98(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class USoundBase*                            Temp_object_Variable_6;                            // 0xA0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class USoundBase*                            Temp_object_Variable_7;                            // 0xA8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class USoundBase*                            Temp_object_Variable_8;                            // 0xB0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class USoundBase*                            Temp_object_Variable_9;                            // 0xB8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	class USoundBase*                            K2Node_Select_Default;                             // 0xC0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Temp_object_Variable_10;                           // 0xC8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	int32                                        Temp_int_Variable_1;                               // 0xD0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_2F89[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default_1;                           // 0xD8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x1D8 (0x1D8 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
struct UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params
{
public:
	float                                        PenetrationScalar;                                 // 0x0(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F90[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Exited;                                            // 0x20(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F91[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OwnerVelocity;                                     // 0x28(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x40(0x8)(ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x48(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x60(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F92[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x70(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x78(0x18)(Edit, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x91(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F93[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x98(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FHitResult                            CallFunc_VTraceSingleBP_OutHit;                    // 0xB0(0xF0)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_VTraceSingleBP_ReturnValue;               // 0x1A0(0x1)(Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F95[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_SetVariableVec3_InValue_ImplicitCast;     // 0x1A8(0x18)(ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_A_ImplicitCast;     // 0x1C0(0x18)(ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
struct UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params
{
public:
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x0(0x18)(Edit, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x20(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x28(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x30(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F97[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x50(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x68(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector3f                             K2Node_VariableSet_CurrentVelocity_ImplicitCast;   // 0x80(0xC)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F98[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_VariableSet_actor_velocity_prev_ImplicitCast; // 0x90(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_A_ImplicitCast;     // 0xA8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactedFluidSurface
struct UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
struct UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
struct UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA4 (0xA4 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.ExecuteUbergraph_BP_PrimalWindSourceComponent_Base
struct UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F9C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_impactLocation_2;                     // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_Event_penetrationScalar_2;                  // 0x20(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F9D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_impactLocation_1;                     // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        K2Node_Event_penetrationScalar_1;                  // 0x40(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x44(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F9E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Fraction_ReturnValue;                     // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x50(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F9F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x60(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_2FA1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0x68(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x70(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x74(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x78(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2FA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               K2Node_Event_impactLocation;                       // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_penetrationScalar;                    // 0xA0(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


