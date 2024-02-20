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

// 0x128 (0x128 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive
struct ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Edit, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         ActiveStorm;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3606[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3607[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x38(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x48(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class ADayCycleManager*                      CallFunc_GetDayCycleManager_ReturnValue;           // 0x50(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface; // 0x70(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3609[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1; // 0x88(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_360A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        CallFunc_GetElectricalStormValues_LocationRegions; // 0xA0(0x10)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetElectricalStormValues_CurrentRegion;   // 0xB0(0x4)(DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_360B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetElectricalStormValues_Radius;          // 0xB8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetIsElectricalStorm_Return;              // 0xC0(0x1)(ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_360C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xD0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0xE8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_360D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X_1;                          // 0xF0(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x100(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x108(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsDistanceLessThan_ReturnValue;           // 0x120(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_360E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_IsDistanceLessThan_Distance_ImplicitCast; // 0x124(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
struct ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params
{
public:
	double                                       OutSocketClampDelta;                               // 0x0(0x8)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
struct ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
struct ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params
{
public:
	class AShooterHUD*                           HUD;                                               // 0x0(0x8)(BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	float                                        XPos;                                              // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        YPos;                                              // 0xC(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ScaleMult;                                         // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x14(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3614[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x30(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3616[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x38(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x48(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x50(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3617[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x78(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CallFunc_BPDrawTextCentered_ReturnValue;           // 0x98(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3618[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0xA0(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0xA8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_BPDrawTextCentered_Y_ImplicitCast;        // 0xC0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BPDrawTextCentered_X_ImplicitCast;        // 0xC4(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x429 (0x429 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
struct ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params
{
public:
	struct FVector                               AimAtLoc;                                          // 0x0(0x18)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               ServerSpawnAtLoc;                                  // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowed;                                          // 0x30(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         RetVal;                                            // 0x31(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3621[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x38(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0x48(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x50(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x58(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3624[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xD0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xE8(0x18)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x118(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x130(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x138(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3626[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x140(0xF0)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x230(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_3627[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0x240(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x2A0(0x18)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x2B8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x2D0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x2E8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_1;                 // 0x2F8(0xF0)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_1;            // 0x3E8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_3629[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x3F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x3F8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x400(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class AStructurePreventionZoneVolume*        CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue; // 0x418(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x420(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_362A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_IsChildOfClassesSoftRef_ReturnValue;      // 0x424(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x428(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
struct ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
struct ABuff_DinoTekHelmet_Base_C_SetTargeting_Params
{
public:
	bool                                         bTargetingEnabled;                                 // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x104 (0x104 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
struct ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3630[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3631[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character_1;      // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3632[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x30(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x40(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0x48(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x58(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x68(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x70(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x88(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               K2Node_Select_Default;                             // 0xA0(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	struct FVector                               K2Node_Select_Default_1;                           // 0xB8(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_VInterpTo_Constant_ReturnValue;           // 0xD0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_VInterpTo_Constant_ReturnValue_1;         // 0xE8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast; // 0x100(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x3A1 (0x3A1 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
struct ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params
{
public:
	bool                                         bDidAttack;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_363C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x14(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_363E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_363F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff; // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue; // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3640[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  K2Node_Select_Default;                             // 0x3C(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3643[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x60(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0x80(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x88(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FRotator                              CallFunc_GetCameraRotation_ReturnValue;            // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0xA8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3646[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0xB8(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x130(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x148(0x18)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x160(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x178(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x190(0x18)(ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1A8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x1C0(0xF0)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x2B0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x2B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x2B2(0x1)(ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3649[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x2B4(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x2B8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_364B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x2C0(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x2D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x2F0(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x308(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x320(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x328(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x330(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x348(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x34C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x350(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_364C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x358(0x18)(BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x370(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               K2Node_Select_Default_1;                           // 0x388(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x3A0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, SubobjectReference)
};

// 0x44 (0x44 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
struct ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params
{
public:
	class UAnimMontage*                          PlayAnim;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_364D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0x10(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_364E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_364F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Montage_Play_ReturnValue;                 // 0x40(0x4)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

// 0x43 (0x43 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
struct ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params
{
public:
	class UPrimalItem*                           TekSaddleItem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           RetVal;                                            // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3653[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3654[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3656[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3657[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimalItem*                           CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x42(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
struct ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params
{
public:
	struct FVector                               AimAtLoc;                                          // 0x0(0x18)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               ServerSpawnAtLoc;                                  // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
struct ABuff_DinoTekHelmet_Base_C_DoAttack_Params
{
public:
	struct FVector                               AimAtLoc;                                          // 0x0(0x18)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bLeftSide;                                         // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3659[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ServerSpawnAtLoc;                                  // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x36C (0x36C - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base
struct ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_366C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Temp_name_Variable;                                // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_366D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
	uint8                                        Pad_366F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
	struct FVector                               K2Node_CustomEvent_AimAtLoc_1;                     // 0x30(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               K2Node_CustomEvent_ServerSpawnAtLoc_1;             // 0x48(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsAllowedToFire_bAllowed;                 // 0x60(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3671[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_CustomEvent_AimAtLoc;                       // 0x68(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_CustomEvent_bLeftSide;                      // 0x80(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3672[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_CustomEvent_ServerSpawnAtLoc;               // 0x88(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA0(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3674[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Temp_name_Variable_1;                              // 0xA4(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3675[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0xB0(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FName                                  K2Node_Select_Default;                             // 0xC0(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3678[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x140(0x18)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x158(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x170(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x190(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_367A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakRotator_Roll;                        // 0x194(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x198(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x19C(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x1A0(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_SpawnActorDeferred_ReturnValue;           // 0x1B8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1C0(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterProjectile*                    K2Node_DynamicCast_AsShooter_Projectile;           // 0x1D8(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_367E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1E8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x200(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x218(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x230(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UAnimMontage*                          K2Node_Select_Default_1;                           // 0x248(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x250(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x254(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x258(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_3682[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x260(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue_2;                // 0x268(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x269(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_3;                // 0x26A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, NonTransactional)
	uint8                                        Pad_3683[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x270(0x8)(Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x278(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3685[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x280(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x288(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3686[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_SaddleGeneric_Tek_C*  K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek; // 0x290(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x298(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_3689[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x2A8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_368B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x2B0(0x8)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanElementDecrease_CanDecrease;           // 0x2B8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_368C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x2C0(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x2C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_368E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x2D8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_IsShipping_ReturnValue;                   // 0x2D9(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_HasEngram_ReturnValue;                    // 0x2DA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2DB(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2DC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3693[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x2E8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2EA(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3696[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x2F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2F8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3697[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x300(0x8)(Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_GetSocketClampDelta_OutSocketClampDelta;  // 0x308(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x310(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3699[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_ClampRotAxis_ReturnValue;                 // 0x314(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_ClampRotAxis_ReturnValue_1;               // 0x318(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsElectricalStormActive_Return;           // 0x31C(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_369B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x320(0x18)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x338(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_369C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue_1;       // 0x340(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x358(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_369E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;  // 0x35C(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1; // 0x360(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_ClampRotAxis_MaxDiff_ImplicitCast;        // 0x364(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1;      // 0x368(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

}
}


