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

// 0x130 (0x130 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.LR_FB Offset
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_LR_FB_Offset_Params
{
public:
	struct FVector                               Front_Offset;                                      // 0x0(0x18)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Back_Offset;                                       // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Offset;                                            // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x70(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x80(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A44[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x88(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Right_ReturnValue;                        // 0xA0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xB0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_4A46[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Left_ReturnValue;                         // 0xD0(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xE0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xE8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xF0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_4A49[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x100(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x118(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x2 (0x2 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewFunction_0
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_NewFunction_0_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         Condition2;                                        // 0x1(0x1)(Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x5D9 (0x5D9 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Do Trace
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Do_Trace_Params
{
public:
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AActor*                                InputPin;                                          // 0x8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	double                                       BabyScale;                                         // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x18(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A50[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FootPrintSize;                                     // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Hit_Bool;                                          // 0x28(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A51[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            OutHit;                                            // 0x30(0xF0)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMaterialInterface*                    FootPrintMaterialBack;                             // 0x120(0x8)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    FootPrintMaterialFront;                            // 0x128(0x8)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    MI_Back;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    MI_Front;                                          // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Back_Offset;                                       // 0x140(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Front_Offset;                                      // 0x158(0x18)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Size;                                              // 0x170(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x178(0x18)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x190(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x198(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A52[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A53[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x1B0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4A54[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDinoSettings_Base_C*                  K2Node_DynamicCast_AsDino_Settings_Base;           // 0x1C0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1C8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A55[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1D0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x1E8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x200(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_LR_FB_Offset_Offset;                      // 0x210(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x228(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x240(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x2A0(0x18)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_4A56[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x2C0(0x80)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x340(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_4A57[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CallFunc_Matrix_TransformVector_ReturnValue;       // 0x360(0x20)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x380(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Conv_Vector4ToVector_ReturnValue;         // 0x398(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3B0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x3C8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_GetSocketBoneName_ReturnValue;            // 0x3D0(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A58[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x3E0(0x60)(BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x440(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x458(0x18)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x470(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x488(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x4A0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x4B8(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0x4D0(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x4E8(0xF0)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x5D8(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Sound
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Spawn_Sound_Params
{
public:
	class USceneComponent*                       Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	double                                       Size;                                              // 0x20(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x28(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x40(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A59[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x50(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x59(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A5A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x60(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x68(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x70(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_2;         // 0x78(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x80(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue_2;                     // 0x88(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x90(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x91(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_4A5B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_3;         // 0x98(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_4;         // 0xA0(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_FClamp_ReturnValue_3;                     // 0xA8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, NonTransactional)
	double                                       CallFunc_FClamp_ReturnValue_4;                     // 0xB0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xB8(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xC0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_5;         // 0xC8(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xD0(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A5C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue_5;                     // 0xD8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xE0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xE8(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_4A5D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xF0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0x108(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0x110(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0x118(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x120(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1; // 0x124(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2; // 0x128(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3; // 0x12C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4; // 0x130(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5; // 0x134(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)
};

// 0x718 (0x718 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyBegin
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	float                                        TotalDuration;                                     // 0x10(0x4)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A67[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x41(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A68[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material_Front;                                    // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    Material_Back;                                     // 0x50(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Foot_Print_Size;                                   // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AActor*                                Owner;                                             // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	struct FVector                               Direction;                                         // 0x68(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	double                                       BabyScale;                                         // 0x80(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x88(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Total_Amount_Mult;                                 // 0xA0(0x8)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Foot_Velocity_Mult;                                // 0xA8(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UCurveFloat*                           Curve_foot_vel;                                    // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size;                                   // 0xB8(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Foot_Size_Mult;                                    // 0xC0(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Thatch;                                            // 0xC8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Sand;                                              // 0xD0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Pebbles;                                           // 0xD8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Leaves;                                            // 0xE0(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Grass;                                             // 0xE8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Friction;                                          // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       Dust;                                              // 0xF8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference)
	double                                       Bounce;                                            // 0x100(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FColor                                Color;                                             // 0x110(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_4A69[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     Niagara_Component;                                 // 0x118(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                NewLocalVar;                                       // 0x120(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         DebugPrint_;                                       // 0x130(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A6A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x138(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x148(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x150(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A6B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x158(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A6C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x164(0x4)(Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x168(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x169(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x16A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A6D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x16C(0x4)(Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x170(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x171(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x172(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x173(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A6E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x178(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x190(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue; // 0x198(0x4)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A6F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1A8(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A70[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1AC(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x1B4(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A71[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1B8(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A72[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x1C0(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x1C8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1D0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4A73[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWorldSettings*                        CallFunc_K2_GetWorldSettings_ReturnValue;          // 0x1D8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0x1E0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4A74[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue;            // 0x1F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x208(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x210(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_4A75[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UNiagaraComponent*>             CallFunc_GetComponentsByTag_ReturnValue;           // 0x218(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_Array_Get_Item;                           // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x230(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue; // 0x234(0x1)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A76[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x238(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x240(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_4A77[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x248(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x250(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x258(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x260(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x268(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x26C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A78[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x270(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x274(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x275(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4A79[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x278(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x280(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4A7A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Split_LeftS;                              // 0x288(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x298(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x2A8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A7B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Right_ReturnValue;                        // 0x2B0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Left_ReturnValue;                         // 0x2C0(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x2D0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x2D1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_4A7C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2D8(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x2F0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x308(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x310(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue_1;          // 0x328(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x340(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x358(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x370(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Do_Trace_FootPrintSize;                   // 0x388(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Do_Trace_Hit_Bool;                        // 0x390(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A7D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Do_Trace_OutHit;                          // 0x398(0xF0)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    CallFunc_Do_Trace_FootPrintMaterialBack;           // 0x488(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    CallFunc_Do_Trace_FootPrintMaterialFront;          // 0x490(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x498(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x499(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A7E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x49C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x4A0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A7F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x4A8(0x18)(ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x4C0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x4D8(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x4F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x508(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x510(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x518(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x520(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x528(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x530(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x534(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x538(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A80[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x540(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x558(0x18)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x570(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x580(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x588(0xF0)(Edit, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x678(0x66)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A81[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x6E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A82[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x6E8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x6F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x6F8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x700(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x708(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x710(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x714(0x4)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyEnd
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.GetNotifyName
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyTick
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyTick_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	float                                        FrameDeltaTime;                                    // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A83[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4A84[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                Mesh_Comp;                                         // 0x48(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Line_End_Distance;                                 // 0x50(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


