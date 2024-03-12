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

// 0xC7 (0xC7 - 0x0)
// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting
struct UPrimalItem_Spawner_HoverSkiff_C_BPAllowCrafting_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                RetString;                                         // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_34E7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x40(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34E8[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetValidSpawnTransform_SpawnTransform;    // 0x50(0x60)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetValidSpawnTransform_SpawnValid;        // 0xB0(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_34E9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_Array_Get_Item;                           // 0xB8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xC4(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC6(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x598 (0x598 - 0x0)
// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform
struct UPrimalItem_Spawner_HoverSkiff_C_GetValidSpawnTransform_Params
{
public:
	struct FTransform                            SpawnTransform;                                    // 0x0(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SpawnValid;                                        // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RetValid;                                          // 0x61(0x1)(ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_34F2[0xE];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RetTransform;                                      // 0x70(0x60)(Edit, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0xD0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD1(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_34F4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xD4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xDC(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xE0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_34F7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0xF0(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x108(0x18)(Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x120(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x138(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x13C(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x140(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x148(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x160(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x168(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x170(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x178(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x180(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x198(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1B0(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1C8(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x1E0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x1F8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x210(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x228(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x318(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34FE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x320(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FHitResult                            CallFunc_VTraceSphereBP_HitOut;                    // 0x338(0xF0)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_VTraceSphereBP_ReturnValue;               // 0x428(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x429(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x42A(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3501[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x42C(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x430(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3503[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x438(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x450(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x468(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x480(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x498(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x4A0(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x4A8(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x4B0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x4B8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x4C0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x4C4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x4C8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3509[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x4D0(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x4E8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x500(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        CallFunc_ServerOctreeOverlapActors_ReturnValue;    // 0x560(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x570(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_350C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APhysicsVolume*                        CallFunc_GetPhysicsVolumeAtLocation_ReturnValue;   // 0x578(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x580(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x581(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x582(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_350E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x588(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x590(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x594(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x9 (0x9 - 0x0)
// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted
struct UPrimalItem_Spawner_HoverSkiff_C_BPCrafted_Params
{
public:
	class AActor*                                RetActor;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff
struct UPrimalItem_Spawner_HoverSkiff_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_351D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x8(0x8)(BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_351F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x18(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x31(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3520[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0x34(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x3C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x40(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3521[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetDinoStat_NumDinoLevels;                // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetDinoStat_StatMapIndexUsed;             // 0x48(0x4)(Edit, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetDinoStat_Success;                      // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x4D(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x4E(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3522[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x50(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GetDinoColorizationData_HasAnyColorData;  // 0x59(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3523[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                CallFunc_GetDinoColorizationData_ColorData;        // 0x60(0x10)(Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3524[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x78(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x90(0x18)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xA8(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0xC0(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3525[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetCharacterController_ReturnValue;       // 0xC8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xD0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3526[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xE0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class APrimalDinoCharacter*                  CallFunc_SpawnCustomDino_ReturnValue;              // 0xE8(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AGameState*                            CallFunc_GameStateBaseToGameState_ReturnValue;     // 0xF8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterGameState*                     CallFunc_GameStateToShooterGameState_ReturnValue;  // 0x100(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x108(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x120(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3528[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x124(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

}
}


