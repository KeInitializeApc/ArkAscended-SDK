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
	struct FVector                               Front_Offset;                                      // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Back_Offset;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Offset;                                            // 0x30(0x18)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x70(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x80(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_278D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x88(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_Right_ReturnValue;                        // 0xA0(0x10)(ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xC8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2791[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Left_ReturnValue;                         // 0xD0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xE0(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xF0(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0xF8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_2794[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x100(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x118(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
};

// 0x2 (0x2 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewFunction_0
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_NewFunction_0_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         Condition2;                                        // 0x1(0x1)(ExportObject, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x5D9 (0x5D9 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Do Trace
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Do_Trace_Params
{
public:
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                InputPin;                                          // 0x8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	double                                       BabyScale;                                         // 0x10(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FootPrintSize;                                     // 0x20(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Hit_Bool;                                          // 0x28(0x1)(ConstParm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_27C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            OutHit;                                            // 0x30(0xF0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class UMaterialInterface*                    FootPrintMaterialBack;                             // 0x120(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    FootPrintMaterialFront;                            // 0x128(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    MI_Back;                                           // 0x130(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    MI_Front;                                          // 0x138(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Back_Offset;                                       // 0x140(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Front_Offset;                                      // 0x158(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Size;                                              // 0x170(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x178(0x18)(BlueprintVisible, Parm, ReturnParm, SubobjectReference)
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x190(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_27C4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_27C5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x1B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_27C7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDinoSettings_Base_C*                  K2Node_DynamicCast_AsDino_Settings_Base;           // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_27C8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1D0(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x1E8(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x200(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	struct FVector                               CallFunc_LR_FB_Offset_Offset;                      // 0x210(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x240(0x60)(BlueprintVisible, Net, Parm, ReturnParm, Transient, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x2A0(0x18)(BlueprintVisible, Parm, ReturnParm, SubobjectReference, Interp)
	uint8                                        Pad_27CC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x2C0(0x80)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x340(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	uint8                                        Pad_27CD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CallFunc_Matrix_TransformVector_ReturnValue;       // 0x360(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x380(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Conv_Vector4ToVector_ReturnValue;         // 0x398(0x18)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x3C8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
	class FName                                  CallFunc_GetSocketBoneName_ReturnValue;            // 0x3D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_27CE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x3E0(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x440(0x18)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x458(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x470(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x488(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x4A0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x4B8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0x4D0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x4E8(0xF0)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x5D8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Sound
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Spawn_Sound_Params
{
public:
	class USceneComponent*                       Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	double                                       Size;                                              // 0x20(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x28(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x40(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27DE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x59(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_27E0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x68(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_2;         // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x80(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue_2;                     // 0x88(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x90(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x91(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_27E3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_3;         // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_4;         // 0xA0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_FClamp_ReturnValue_3;                     // 0xA8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_FClamp_ReturnValue_4;                     // 0xB0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_5;         // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xD0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_27E6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue_5;                     // 0xD8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xE8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_27E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xF0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0x108(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0x110(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0x118(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x120(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1; // 0x124(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2; // 0x128(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3; // 0x12C(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4; // 0x130(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5; // 0x134(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
};

// 0x718 (0x718 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyBegin
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        TotalDuration;                                     // 0x10(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2853[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         IsPlayer;                                          // 0x41(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2854[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material_Front;                                    // 0x48(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    Material_Back;                                     // 0x50(0x8)(Edit, ConstParm, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Foot_Print_Size;                                   // 0x58(0x8)(ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                Owner;                                             // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	struct FVector                               Direction;                                         // 0x68(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BabyScale;                                         // 0x80(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x88(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Total_Amount_Mult;                                 // 0xA0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Foot_Velocity_Mult;                                // 0xA8(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           Curve_foot_vel;                                    // 0xB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size;                                   // 0xB8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Foot_Size_Mult;                                    // 0xC0(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Thatch;                                            // 0xC8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
	double                                       Sand;                                              // 0xD0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Pebbles;                                           // 0xD8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       Leaves;                                            // 0xE0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Grass;                                             // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Friction;                                          // 0xF0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	double                                       Dust;                                              // 0xF8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference)
	double                                       Bounce;                                            // 0x100(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x108(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FColor                                Color;                                             // 0x110(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_2857[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     Niagara_Component;                                 // 0x118(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                NewLocalVar;                                       // 0x120(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         DebugPrint_;                                       // 0x130(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2859[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x138(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x148(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x150(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_285A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x158(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_285B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x164(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x168(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x169(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x16A(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_285C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x16C(0x4)(Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x170(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x171(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x172(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x173(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_285D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x178(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x190(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	float                                        CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue; // 0x198(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_285E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1A8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_285F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1AC(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x1B4(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2860[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1B8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2861[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x1C0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x1C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1D0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2863[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWorldSettings*                        CallFunc_K2_GetWorldSettings_ReturnValue;          // 0x1D8(0x8)(BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0x1E0(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2864[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue;            // 0x1F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x208(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x210(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_2865[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UNiagaraComponent*>             CallFunc_GetComponentsByTag_ReturnValue;           // 0x218(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_Array_Get_Item;                           // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x230(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue; // 0x234(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2866[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x240(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_2869[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x248(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x250(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x258(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x260(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x268(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x26C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_286C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x270(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x274(0x1)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x275(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_286F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x278(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x280(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2871[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Split_LeftS;                              // 0x288(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x298(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x2A8(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2872[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Right_ReturnValue;                        // 0x2B0(0x10)(ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Left_ReturnValue;                         // 0x2C0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x2D0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x2D1(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_2874[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x2F0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference, Interp)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x310(0x18)(BlueprintVisible, ExportObject, ReturnParm, Transient, SubobjectReference)
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue_1;          // 0x328(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x340(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x358(0x18)(BlueprintVisible, ExportObject, ReturnParm, Transient, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x370(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Do_Trace_FootPrintSize;                   // 0x388(0x8)(BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Do_Trace_Hit_Bool;                        // 0x390(0x1)(Edit, Net, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_287A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Do_Trace_OutHit;                          // 0x398(0xF0)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    CallFunc_Do_Trace_FootPrintMaterialBack;           // 0x488(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    CallFunc_Do_Trace_FootPrintMaterialFront;          // 0x490(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x498(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x499(0x1)(ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	uint8                                        Pad_287B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x49C(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x4A0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_287C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x4A8(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x4C0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x4D8(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x4F0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x508(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x510(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x518(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x520(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x528(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x530(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x534(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x538(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2881[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x540(0x18)(BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x558(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x570(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x580(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference, RepNotify, Interp)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x588(0xF0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x678(0x66)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2883[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x6E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2885[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x6E8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x6F0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x6F8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x700(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x708(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x710(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x714(0x4)(BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyEnd
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x38(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.GetNotifyName
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyTick
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyTick_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        FrameDeltaTime;                                    // 0x10(0x4)(Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_28A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_28A1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                Mesh_Comp;                                         // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Line_End_Distance;                                 // 0x50(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


