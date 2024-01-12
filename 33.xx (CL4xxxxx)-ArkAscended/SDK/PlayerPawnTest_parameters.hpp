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

// 0x31 (0x31 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation
struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params
{
public:
	struct FVector                               CurrentCameraPivotLocation;                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               DesiredCameraPivotLocation;                        // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
struct APlayerPawnTest_C_GetFXBloodColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection
struct APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params
{
public:
	class UPDA_VoiceCollection_C*                K2Node_DynamicCast_AsPDA_Voice_Collection;         // 0x0(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params
{
public:
	struct FRotator                              CurrentCameraPivotRotation;                        // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              DesiredCameraPivotRotation;                        // 0x18(0x18)(EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3CC5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakRotator_Roll;                        // 0x34(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x38(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x3C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x40(0x18)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0xF1 (0xF1 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector                               DesiredCameraOffset;                               // 0xD8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x155 (0x155 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
struct APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xD8(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastInterpParamsX;                                 // 0x10C(0xC)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastInterpParamsY;                                 // 0x118(0xC)(Edit, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             LastInterpParamsZ;                                 // 0x124(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParamsX;                                  // 0x130(0xC)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParamsY;                                  // 0x13C(0xC)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParamsZ;                                  // 0x148(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x154(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xE5 (0xE5 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
struct APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xD8(0xC)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE4(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
struct APlayerPawnTest_C_BPOverrideCameraArmLength_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CurrentCameraArmLength;                            // 0xD8(0x4)(BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DesiredCameraArmLength;                            // 0xDC(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3D0E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast; // 0xE8(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast; // 0xF0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
struct APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params
{
public:
	class AShooterHUD*                           CallFunc_GetShooterHud_ShooterHud;                 // 0x0(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
struct APlayerPawnTest_C_GetShooterHud_Params
{
public:
	class AShooterHUD*                           ShooterHUD;                                        // 0x0(0x8)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3D1C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
struct APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params
{
public:
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
struct APlayerPawnTest_C_HasEquipToHideImplant_Params
{
public:
	bool                                         ShouldHideImplant;                                 // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Local_HideImplant;                                 // 0x1(0x1)(BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3D29[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x12(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3D2A[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_Array_Get_Item;                           // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x24(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x25(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x26(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x27(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x28(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
};

// 0x2A5 (0x2A5 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
struct APlayerPawnTest_C_SetupMeshes_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D46[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x4(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item;                           // 0x8(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x38(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3D47[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue;                 // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3D48[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x54(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3D4A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x60(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3D4E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_1;                         // 0x68(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_1;               // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3D4F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0xA8(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_1;            // 0xB0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3D50[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xB8(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xC0(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3D52[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0xC8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xCC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xD4(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3D53[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetNumMaterials_ReturnValue_2;            // 0xD8(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xDC(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable_2;                               // 0xE0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3D54[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_1;                // 0xE8(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0xF0(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xF8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3D56[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xFC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable_3;                               // 0x100(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x104(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Variable_4;                               // 0x108(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3D5E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_2;                         // 0x110(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_2;               // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x148(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x14C(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_HasEquipToHideImplant_ShouldHideImplant;  // 0x14D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3D61[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x150(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FName                                  CallFunc_GetObjectName_ReturnValue;                // 0x158(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_3;                         // 0x160(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x190(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3D63[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_3;               // 0x198(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x1A1(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3D65[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_2;                // 0x1A8(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_3;            // 0x1B0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
	uint8                                        Pad_3D67[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x1B8(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x1C0(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x1C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x1C5(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3D6A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1C8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_5;             // 0x1CC(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_3D6B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_3;                // 0x1D0(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_4;            // 0x1D8(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3D6D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x1E0(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x1E8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x1EC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3D6E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x1F0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_6;             // 0x1F4(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_3D70[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_4;                         // 0x1F8(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_4;               // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x230(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3D72[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_5;                               // 0x234(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_4;                // 0x238(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_4; // 0x240(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3D73[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x24C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_5;                         // 0x250(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_5;                // 0x280(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_5;               // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_5; // 0x290(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x298(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3D74[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetNumMaterials_ReturnValue_5;            // 0x29C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x2A0(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_5;           // 0x2A4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
struct APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params
{
public:
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
struct APlayerPawnTest_C_GetTheNumChibiLevelUps_Params
{
public:
	int32                                        OutVal;                                            // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
struct APlayerPawnTest_C_SetNumChibiLevelUps_Params
{
public:
	int32                                        NewNum;                                            // 0x0(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x49 (0x49 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
struct APlayerPawnTest_C_BPGetPlayerHexagonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Ret_val;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3DBF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3DC1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x38(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x5A (0x5A - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
struct APlayerPawnTest_C_BPSetPlayerHexagonCount_Params
{
public:
	int32                                        NewHexagonCount;                                   // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Ret_val;                                           // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3DCC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3DCD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3DCF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x40(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3DD0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

// 0x4C (0x4C - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
struct APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params
{
public:
	TArray<class USkeletalMeshComponent*>        SkelMeshComponents;                                // 0x0(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class USkeletalMeshComponent*>        Comps;                                             // 0x10(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x21(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue_1;              // 0x22(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3DDB[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x24(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x28(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3DDC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x38(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3DDD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                K2Node_Select_Default;                             // 0x40(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x48(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
};

// 0x2C (0x2C - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
struct APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params
{
public:
	float                                        DefaultTPVCameraSpeedInterpolationMultiplier;      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DefaultTPVOffsetInterpSpeed;                       // 0x4(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TPVCameraSpeedInterpolationMultiplier;             // 0x8(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TPVOffsetInterpSpeed;                              // 0xC(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       LocalDefaultTPVOffsetInterpSpeed;                  // 0x10(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_HasBuff_ReturnValue;                      // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3DF2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast; // 0x20(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast; // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
struct APlayerPawnTest_C_ShowHUDNotification_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	double                                       LifetimeSeconds;                                   // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       DisplayScale;                                      // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class USoundCue*                             SoundToPlay;                                       // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
struct APlayerPawnTest_C_TrySpawnMoundEx_Params
{
public:
	double                                       Angle;                                             // 0x0(0x8)(Edit, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       Range;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
struct APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params
{
public:
	class USkeletalMeshComponent*                FirstPersonMasterPosecomponent;                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x71 (0x71 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
struct APlayerPawnTest_C_DefeatedBoss_Params
{
public:
	class APrimalDinoCharacter*                  BossCharacter;                                     // 0x0(0x8)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  BossTag;                                           // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        BossDifficulty;                                    // 0x10(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E20[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x20(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x28(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E23[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3E25[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x60(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0x1B8 (0x1B8 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
struct APlayerPawnTest_C_ServerAscend_Params
{
public:
	int32                                        DifficultyIndex;                                   // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bImmediateAscend;                                  // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bSuppressAchievements;                             // 0x5(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsCheatAscend;                                    // 0x6(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E4E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsListenServer_ReturnValue;               // 0xD(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E4F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x10(0x18)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue;                // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E50[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable;                              // 0x30(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3E52[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_1;                            // 0x48(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	class FString                                Temp_string_Variable_2;                            // 0x58(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable;                                 // 0x68(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FString                                K2Node_Select_Default;                             // 0x70(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x80(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E55[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetCharacterController_ReturnValue;       // 0x88(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x98(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E5A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWorldSettings*                        CallFunc_GetWorldSettings_ReturnValue;             // 0xA8(0x8)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0xB0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0xBA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xBB(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3E5C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Array_Get_Item;                           // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xCC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3E5F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3E61[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0xE0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference, Interp)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xF8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x100(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x110(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3E62[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode_1;          // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x120(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3E64[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetServerSettingsFloat_OutFloat;          // 0x124(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetServerSettingsFloat_ReturnValue;       // 0x128(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E65[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetServerSettingsFloat_OutFloat_1;        // 0x12C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_GetServerSettingsFloat_ReturnValue_1;     // 0x130(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3E66[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetServerSettingsFloat_OutFloat_2;        // 0x134(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GetServerSettingsFloat_ReturnValue_2;     // 0x138(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3E68[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x140(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x150(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x158(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x170(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x178(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue_1;              // 0x179(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3E69[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x188(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0x190(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x198(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x199(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E6B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x1A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x1A8(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x1B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
struct APlayerPawnTest_C_PlayerCommand_Params
{
public:
	class FString                                TheCommand;                                        // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                RetVal;                                            // 0x20(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_PlayerCommand_ReturnValue;                // 0x30(0x10)(ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x40(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
struct APlayerPawnTest_C_NetClientAscend_Params
{
public:
	int32                                        AscendIndex;                                       // 0x0(0x4)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bImmediateAscend;                                  // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bIsCheatAscend;                                    // 0x5(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
struct APlayerPawnTest_C_ClientShowHUDNotification_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	double                                       LifetimeSeconds;                                   // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       DisplayScale;                                      // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class USoundCue*                             SoundToPlay;                                       // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX
struct APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      VictimChar;                                        // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x224 (0x224 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
struct APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3ED0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_CustomEvent_AscendIndex;                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_CustomEvent_bImmediateAscend;               // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_CustomEvent_bIsCheatAscend;                 // 0xD(0x1)(Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3ED2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetUserSettings_ReturnValue;              // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x40(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3ED4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UFinalCreditsUI_C*                     CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                K2Node_CustomEvent_Text;                           // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       K2Node_CustomEvent_LifetimeSeconds;                // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       K2Node_CustomEvent_DisplayScale;                   // 0x80(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class USoundCue*                             K2Node_CustomEvent_SoundToPlay;                    // 0x88(0x8)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x98(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3ED8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0xA0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3EDA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0xB0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0xB8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue;     // 0xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsShipping_ReturnValue;                   // 0xC1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3EDC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0xC8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xD8(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3EDE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  K2Node_Event_SocketName;                           // 0xDC(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3EDF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_Event_VictimChar;                           // 0xE8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FLinearColor                          CallFunc_GetFXBloodColor_ReturnValue;              // 0xF0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x100(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3EE1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x108(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x111(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x112(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3EE4[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Temp_struct_Variable;                              // 0x114(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x124(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x134(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable;                                 // 0x144(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_2;                              // 0x148(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x149(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x14A(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14B(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x14C(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3EE5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       K2Node_Select_Default;                             // 0x150(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x158(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3EE7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       K2Node_Select_Default_1;                           // 0x160(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x168(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class USceneComponent*                       K2Node_Select_Default_2;                           // 0x170(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x178(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x180(0x8)(EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x188(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3EEB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x190(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x1A0(0x4)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3EED[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1A8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue_1;   // 0x1B8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3EEF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x1BC(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3EF1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x1D0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_2;  // 0x1D8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3EF3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast; // 0x1E4(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast; // 0x1E8(0x4)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3EF4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x1F0(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x1F8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x200(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_B_ImplicitCast_1;             // 0x208(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x210(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x218(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x220(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


