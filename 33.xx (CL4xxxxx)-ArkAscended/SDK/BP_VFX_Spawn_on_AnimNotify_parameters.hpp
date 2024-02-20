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
	double                                       Speed;                                             // 0x20(0x8)(ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Size;                                              // 0x28(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x30(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x48(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2790[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x61(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2793[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_2;         // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x89(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2796[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_3;         // 0x90(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_4;         // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_5;         // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xB8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_279A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xC8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_279B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xD0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0xF8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x100(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1; // 0x104(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2; // 0x108(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3; // 0x10C(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4; // 0x110(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5; // 0x114(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
};

// 0x9C8 (0x9C8 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyBegin
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        TotalDuration;                                     // 0x10(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_27FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2800[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                AnimName;                                          // 0x48(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         ShowFootprints;                                    // 0x58(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x59(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2802[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraSystem*                        Niagara_System_To_Play;                            // 0x60(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System_Player;                             // 0x68(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Baby_Scale;                                        // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Dino_Size_Mult;                                    // 0x78(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Dino_Amount_Mult;                                  // 0x80(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Dino_Vel_Mult;                                     // 0x88(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x90(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Total_Amount_Mult;                                 // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Foot_Velocity_Mult;                                // 0xB0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           Curve_foot_vel;                                    // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size;                                   // 0xC0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Foot_Size_Mult;                                    // 0xC8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Thatch;                                            // 0xD0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
	double                                       Sand;                                              // 0xD8(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Pebbles;                                           // 0xE0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       Leaves;                                            // 0xE8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Grass;                                             // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Friction;                                          // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	double                                       Dust;                                              // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference)
	double                                       Bounce;                                            // 0x108(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x110(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FColor                                Color;                                             // 0x118(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_280A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     Niagara_Component;                                 // 0x120(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                NewLocalVar;                                       // 0x128(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x138(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x148(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue; // 0x170(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_280C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x178(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_280D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x18C(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x190(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x191(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x192(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_280E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x194(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference, Interp)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x198(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x1A1(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A2(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2810[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1A8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1B0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2811[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x1B8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1C0(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x1D8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2814[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x1E8(0x18)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Cross_VectorVector_ReturnValue;           // 0x200(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x218(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x228(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x230(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x238(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2817[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x240(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x248(0x66)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2818[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2B0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_281A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x2B8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x2C0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x2C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x2D0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D8(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_281B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_4;       // 0x2E0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x2E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x2F0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	struct FBoxSphereBounds                      CallFunc_GetImportedBounds_ReturnValue;            // 0x2F8(0x38)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test_1;           // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x338(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_281E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakBoxSphereBounds_Origin;              // 0x340(0x18)(Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x358(0x18)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x370(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2820[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x380(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_2821[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x384(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FDinoContentData                      CallFunc_GetDinoContentData_DinoContentData;       // 0x388(0x20)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_5;       // 0x3A8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_6;       // 0x3B0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0x3B8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_2823[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_7;       // 0x3C0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, EditorOnly)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_8;       // 0x3C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_9;       // 0x3D0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp, EditorOnly)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x3D8(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x3E8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x400(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x408(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x420(0x18)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_2;           // 0x438(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x450(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x468(0x1)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x469(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2829[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x470(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x488(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x490(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x491(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_282A[0xE];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x4A0(0x60)(BlueprintVisible, Net, Parm, ReturnParm, Transient, SubobjectReference)
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x500(0x80)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x580(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
	uint8                                        Pad_282D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CallFunc_Matrix_TransformVector_ReturnValue;       // 0x590(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_GetSocketBoneName_ReturnValue;            // 0x5B0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Conv_Vector4ToVector_ReturnValue;         // 0x5B8(0x18)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x5D0(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x630(0x18)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x648(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x660(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x678(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x690(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x6A8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, RepNotify, Interp)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x6C0(0xF0)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x7B0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x7B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x7B2(0x1)(ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2838[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x7B4(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x7B8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2839[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x7C0(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x7D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x7F0(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x808(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x820(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x828(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x830(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x838(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x848(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x84C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x850(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2841[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x858(0x18)(BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x870(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x888(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	struct FRotator                              CallFunc_MakeRotFromYX_ReturnValue;                // 0x898(0x18)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x8B0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference, Interp)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x8B8(0x18)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x8D0(0x66)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_2846[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x938(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_2847[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x940(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x948(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x950(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x958(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x960(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x968(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x970(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x974(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;    // 0x978(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;    // 0x97C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, NonTransactional)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4;    // 0x980(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x984(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x988(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x98C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x990(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_4;  // 0x994(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_5;  // 0x998(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_6;  // 0x99C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_7;  // 0x9A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, EditorOnly)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_8;  // 0x9A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_9;  // 0x9A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, EditorOnly)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_10; // 0x9AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, EditorOnly)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x9B0(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x9B8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x9C0(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyEnd
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x38(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.GetNotifyName
struct UBP_VFX_Spawn_on_AnimNotify_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyTick
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyTick_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        FrameDeltaTime;                                    // 0x10(0x4)(Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_286B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_286E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Line_End_Distance;                                 // 0x48(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


