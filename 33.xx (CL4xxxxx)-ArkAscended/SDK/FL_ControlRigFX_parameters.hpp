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

// 0x314 (0x314 - 0x0)
// Function FL_ControlRigFX.FL_ControlRigFX_C.Spawn Phys Mat VFX
struct UFL_ControlRigFX_C_Spawn_Phys_Mat_VFX_Params
{
public:
	class FString                                Bone_Name;                                         // 0x0(0x10)(ConstParm, ExportObject, Net, OutParm, Config, SubobjectReference)
	class APrimalCharacter*                      Creature;                                          // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	class UPhysicalMaterial*                     Phys_Material;                                     // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
	struct FVector                               Ground_Normal;                                     // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, SubobjectReference)
	struct FVector                               Location;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class UNiagaraSystem*                        NS;                                                // 0x50(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       Amount_Mult;                                       // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, SubobjectReference)
	double                                       Vel_Mult;                                          // 0x60(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
	double                                       Size_Mult;                                         // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
	bool                                         Attached;                                          // 0x70(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Bone_Velocity;                                     // 0x78(0x18)(BlueprintReadOnly, Net, OutParm, Config, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x90(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	struct FVector                               Velocity;                                          // 0x98(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UNiagaraComponent*                     NS_Spawned;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, SubobjectReference)
	struct FColor                                Color;                                             // 0xB8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_2C11[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Bounce;                                            // 0xC0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       Friction;                                          // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	double                                       Pebbles;                                           // 0xD0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       Thatch;                                            // 0xD8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
	double                                       Grass;                                             // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Leaves;                                            // 0xE8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Dust;                                              // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference)
	double                                       Sand;                                              // 0xF8(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Size_Multiply;                                     // 0x100(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x108(0x66)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C18[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x170(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C1A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x178(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x190(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x1A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x1B0(0x66)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_2C1B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x218(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_2C1C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetComponentVelocity_ReturnValue;         // 0x220(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference, Interp)
	class USoundBase*                            Temp_object_Variable;                              // 0x240(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x248(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x250(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x258(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x270(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x278(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x280(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
	int64                                        CallFunc_FFloor64_ReturnValue;                     // 0x288(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x290(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x294(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C1F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x2A8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x2C8(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C22[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default;                             // 0x2D0(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x2DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x2E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x2E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_4;  // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_5;  // 0x2EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_6;  // 0x2F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_7;  // 0x2F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, EditorOnly)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x2F8(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x300(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x308(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_8;  // 0x310(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
};

// 0x4CC (0x4CC - 0x0)
// Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify
struct UFL_ControlRigFX_C_ControlRigNotify_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FName                                  CustomTag;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FHitResult                            HitResult;                                         // 0x10(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class APrimalCharacter*                      PrimalCharacter;                                   // 0x100(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FVector                               BoneVelocity;                                      // 0x108(0x18)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x120(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         bContainsDeath;                                    // 0x128(0x1)(ConstParm, Net, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C4C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     Phys_Material;                                     // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
	struct FVector                               Normal;                                            // 0x138(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector                               Velocity;                                          // 0x150(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               Location;                                          // 0x168(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class APrimalCharacter*                      Character;                                         // 0x180(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class FString                                bone;                                              // 0x188(0x10)(Edit, Net, Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C4F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x1A0(0x18)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_GetLastRenderTimeNoShadow_ReturnValue;    // 0x1B8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1C0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x1D8(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2C51[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x1E0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1F8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C52[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x200(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x210(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x220(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C54[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x238(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x240(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2C56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x248(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x250(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x251(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C58[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x258(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x268(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x278(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x288(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C59[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x290(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2A0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x2B0(0xF0)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x3A0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C5A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x3A8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x3B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x3B9(0x1)(ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C5B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x3BC(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x3C0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C5C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x3C8(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x3E0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x3F8(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x410(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x428(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x430(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x438(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x440(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x448(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x450(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x454(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x458(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x460(0x18)(BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x478(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x490(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
	struct FStruct_VFX_Body_Drop                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x498(0x10)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x4A8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2C5F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x4B0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x4B8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x4C0(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x4C4(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x4C8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

}
}


