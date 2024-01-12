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

// 0x118 (0x118 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Spawn_Sound
struct UBP_VFX_Spawn_on_AnimNotify_C_Spawn_Sound_Params
{
public:
	class USceneComponent*                       Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	double                                       Speed;                                             // 0x20(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Size;                                              // 0x28(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x30(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x48(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A5E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x58(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x61(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A5F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x68(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x78(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_2;         // 0x80(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x89(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_4A60[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_3;         // 0x90(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_4;         // 0x98(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xA0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xA8(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_5;         // 0xB0(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xB8(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A61[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xC0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xC8(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_4A62[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xD0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0xE8(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0xF0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0xF8(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x100(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1; // 0x104(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2; // 0x108(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3; // 0x10C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4; // 0x110(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5; // 0x114(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)
};

// 0x9C8 (0x9C8 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyBegin
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	float                                        TotalDuration;                                     // 0x10(0x4)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A89[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4A8A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                AnimName;                                          // 0x48(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ShowFootprints;                                    // 0x58(0x1)(ConstParm, Transient, EditConst, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x59(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A8B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraSystem*                        Niagara_System_To_Play;                            // 0x60(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System_Player;                             // 0x68(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Baby_Scale;                                        // 0x70(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Dino_Size_Mult;                                    // 0x78(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Dino_Amount_Mult;                                  // 0x80(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Dino_Vel_Mult;                                     // 0x88(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x90(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Total_Amount_Mult;                                 // 0xA8(0x8)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Foot_Velocity_Mult;                                // 0xB0(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UCurveFloat*                           Curve_foot_vel;                                    // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size;                                   // 0xC0(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Foot_Size_Mult;                                    // 0xC8(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Thatch;                                            // 0xD0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Sand;                                              // 0xD8(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Pebbles;                                           // 0xE0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Leaves;                                            // 0xE8(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Grass;                                             // 0xF0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Friction;                                          // 0xF8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       Dust;                                              // 0x100(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference)
	double                                       Bounce;                                            // 0x108(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FColor                                Color;                                             // 0x118(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_4A8C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     Niagara_Component;                                 // 0x120(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                NewLocalVar;                                       // 0x128(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x138(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x148(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x158(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
	float                                        CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue; // 0x170(0x4)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A8D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x178(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x180(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x18C(0x4)(Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x190(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x191(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x192(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A8F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x194(0x4)(Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x198(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x1A1(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A2(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A90[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1B0(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A91[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x1B8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1C0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x1D8(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A92[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x1E8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Cross_VectorVector_ReturnValue;           // 0x200(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x218(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x220(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x228(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x230(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x238(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A93[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x240(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x248(0x66)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A94[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2B0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A95[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x2B8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x2C0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x2C8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x2D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A96[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_4;       // 0x2E0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x2E8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x2F0(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FBoxSphereBounds                      CallFunc_GetImportedBounds_ReturnValue;            // 0x2F8(0x38)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test_1;           // 0x330(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x338(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_4A97[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakBoxSphereBounds_Origin;              // 0x340(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x358(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x370(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A98[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x380(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_4A99[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x384(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	struct FDinoContentData                      CallFunc_GetDinoContentData_DinoContentData;       // 0x388(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_5;       // 0x3A8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_6;       // 0x3B0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0x3B8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_4A9A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_7;       // 0x3C0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_8;       // 0x3C8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_9;       // 0x3D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x3D8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x3E8(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x400(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x408(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x420(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_2;           // 0x438(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x450(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x468(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x469(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4A9B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x470(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x488(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x490(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x491(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4A9C[0xE];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x4A0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x500(0x80)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x580(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A9D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CallFunc_Matrix_TransformVector_ReturnValue;       // 0x590(0x20)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_GetSocketBoneName_ReturnValue;            // 0x5B0(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Conv_Vector4ToVector_ReturnValue;         // 0x5B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x5D0(0x60)(BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x630(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x648(0x18)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x660(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x678(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x690(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x6A8(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x6C0(0xF0)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x7B0(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x7B1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x7B2(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A9E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x7B4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x7B8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A9F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x7C0(0x18)(ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x7D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x7F0(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x808(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x820(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x828(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x830(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x838(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x848(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x84C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x850(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4AA0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x858(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x870(0x18)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x888(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	struct FRotator                              CallFunc_MakeRotFromYX_ReturnValue;                // 0x898(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x8B0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x8B8(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x8D0(0x66)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_4AA1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x938(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_4AA2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x940(0x8)(ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x948(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x950(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x958(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x960(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x968(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x970(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x974(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;    // 0x978(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;    // 0x97C(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4;    // 0x980(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x984(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x988(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x98C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x990(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_4;  // 0x994(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_5;  // 0x998(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_6;  // 0x99C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_7;  // 0x9A0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_8;  // 0x9A4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_9;  // 0x9A8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_10; // 0x9AC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x9B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x9B8(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x9C0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyEnd
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.GetNotifyName
struct UBP_VFX_Spawn_on_AnimNotify_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyTick
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyTick_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	float                                        FrameDeltaTime;                                    // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AA3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4AA4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Line_End_Distance;                                 // 0x48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


