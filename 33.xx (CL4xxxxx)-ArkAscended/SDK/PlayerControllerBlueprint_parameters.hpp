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

// 0x190 (0x190 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.HandleAddPhotoModeMarker
struct APlayerControllerBlueprint_C_HandleAddPhotoModeMarker_Params
{
public:
	TArray<struct FVector>                       Points;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                MarkerClass;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<double>                               VectorValues_HAP;                                  // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x2C(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5C7C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Array_Get_Item;                           // 0x30(0x18)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5C7D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x68(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xE4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5C7E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xEC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xF0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xF4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5C7F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x100(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x160(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0x161(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5C80[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x168(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x170(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x178(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5C81[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                K2Node_MakeStruct_FloatArrayParam1_ImplicitCast;   // 0x180(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x65 (0x65 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.IsPhotoModeAllowed
struct APlayerControllerBlueprint_C_IsPhotoModeAllowed_Params
{
public:
	bool                                         Allowed;                                           // 0x0(0x1)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsAllowed_IPM;                                     // 0x1(0x1)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C82[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x10(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue;            // 0x18(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UPrimalUI*>                     CallFunc_GetAllUIScenesFromClass_ReturnValue;      // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x30(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5C84[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x40(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x49(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsPrimalCharFalling_ReturnValue;          // 0x4A(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C88[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x58(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x61(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsSplitscreen_ReturnValue;                // 0x62(0x1)(BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x63(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x64(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x23C (0x23C - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.TogglePhotoMode
struct APlayerControllerBlueprint_C_TogglePhotoMode_Params
{
public:
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x8(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue;            // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x18(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class UPrimalUI*>                     CallFunc_GetAllUIScenesFromClass_ReturnValue;      // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                CallFunc_GetActorOfClass_ReturnValue;              // 0x30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UPrimalUI*                             CallFunc_Array_Get_Item;                           // 0x38(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5CA0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x50(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5CA2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xB8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xD0(0x18)(Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xEC(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xF0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5CA3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xF8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x110(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x118(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x130(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x148(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x160(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_SelectTransform_ReturnValue;              // 0x1C0(0x60)(ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x228(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x230(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x238(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.PlayerCommand
struct APlayerControllerBlueprint_C_PlayerCommand_Params
{
public:
	class FString                                TheCommand;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_PlayerCommand_ReturnValue;                // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x30(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x3B1 (0x3B1 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef
struct APlayerControllerBlueprint_C_BPSetFCustomTrackedPlayerInfoMembersByPlayerRef_Params
{
public:
	class AShooterCharacter*                     HandledPlayer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Isfavorited;                                       // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsATeammateOnMap;                                  // 0x9(0x1)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsTrackedWaypoint;                                // 0xA(0x1)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsValidForCurrentFilter;                          // 0xB(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5CB9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCustomTrackedActorInfo               ReturnValue;                                       // 0x10(0xE0)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* Local_function_library;                            // 0xF0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FCustomTrackedActorInfo               K2Node_MakeStruct_CustomTrackedActorInfo;          // 0xF8(0xE0)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FCustomTrackedActorInfo               CallFunc_BPSetFCustomTrackedPlayerInfoMembersByPlayerRef_ReturnValue; // 0x1D8(0xE0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x2B8(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FCustomTrackedActorInfo               CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue; // 0x2C0(0xE0)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x3A0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions; // 0x3A8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3B0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnRecievedUpdatedCachedTeamTameList
struct APlayerControllerBlueprint_C_BPOnRecievedUpdatedCachedTeamTameList_Params
{
public:
	int32                                        CustomTameSelectionType;                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsInfoFresh;                                       // 0x18(0x1)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CBF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned; // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Handled;                                           // 0x20(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_5CC0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ScrollbarIndex;                                    // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          NewLocalVar_0;                                     // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Handle_sorting_tracked_actors_Handled;    // 0x40(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x131 (0x131 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is creature being tracked atm
struct APlayerControllerBlueprint_C_Is_creature_being_tracked_atm_Params
{
public:
	int32                                        InputPin;                                          // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	bool                                         NewParam;                                          // 0x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5CC3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           CallFunc_Map_Find_Value;                           // 0x8(0x128)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x130(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x261 (0x261 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is player being tracked atm
struct APlayerControllerBlueprint_C_Is_player_being_tracked_atm_Params
{
public:
	int32                                        InputPin;                                          // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	bool                                         NewParam;                                          // 0x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5CC5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           CallFunc_Map_Find_Value;                           // 0x8(0x128)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x130(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5CC6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           CallFunc_Map_Find_Value_1;                         // 0x138(0x128)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x260(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x428 (0x428 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.If Room Remains Query More Entries From Source List
struct APlayerControllerBlueprint_C_If_Room_Remains_Query_More_Entries_From_Source_List_Params
{
public:
	int32                                        CustomTameSelectionType;                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterGameMode*                      GameMode;                                          // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
	bool                                         Is_handling_favorited_actors1;                     // 0x20(0x1)(EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CCD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        Non_favorite_tracked_actors1;                      // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_players1;               // 0x38(0x10)(ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_creatures1;             // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Creatures1;            // 0x58(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Players1;              // 0x68(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_Tracked_Actors_IDs_Players1;               // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_Tracked_Actors_IDs_Creatures1;             // 0x88(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          Local_track_actor_filter;                          // 0x98(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Scrollbar_Index;                                   // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CD0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        Overwritten_Custom_Actor_Array;                    // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Creatures_That_Remain_Tracked;  // 0xB8(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked;    // 0x108(0x50)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_Players1;                 // 0x158(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_creatures1;               // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, bool>                            All_Tracked_Players_This_Tick;                     // 0x178(0x50)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, bool>                            All_Tracked_Creatures_This_Tick;                   // 0x1C8(0x50)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_Teammates;                                 // 0x218(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_fav_creatures;                             // 0x228(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_fav_allies;                                // 0x238(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_fav_teammates;                             // 0x248(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_waypoint_creatures;                        // 0x258(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_waypoint_allies;                           // 0x268(0x10)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_waypoint_teammates;                        // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* Local_function_library2;                           // 0x288(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          Track_actor_filter;                                // 0x290(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Index_to_use;                                      // 0x298(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CD6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           Info_to_use;                                       // 0x2A0(0x128)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3C9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5CD7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Max_ReturnValue;                          // 0x3CC(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3D0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5CD9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetControllerPlayer_ReturnValue;          // 0x3D8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x3E0(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x3E8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions; // 0x3F0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3F8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5CDB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3FC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x400(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5CDD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTrackedActorPlusInfoStruct>   CallFunc_GetAllCachedTeamTames_ReturnValue;        // 0x408(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_If_Room_Remains_Query_More_Entries_From_Source_List_1_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast; // 0x418(0x8)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_If_Room_Remains_Query_More_Entries_From_Source_List_2_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast; // 0x420(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x82 (0x82 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.get or create filter object
struct APlayerControllerBlueprint_C_Get_or_create_filter_object_Params
{
public:
	class UCharacterTrackFilter_Base_C*          Already_Setup_Filter_Object;                       // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        TameSelectionType;                                 // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CE0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCharacterTrackFilter_Base_C*          AsCreature_Track_Filter_Base;                      // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Local_selection_type;                              // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CE1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        Used_Filters;                                      // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x31(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5CE2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x38(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0x40(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x49(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5CE3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x58(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x64(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x65(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5CE4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x68(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          K2Node_DynamicCast_AsCharacter_Track_Filter_Base;  // 0x70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5CE5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x7C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x80(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x81(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x9AE (0x9AE - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.update tracked characters on server and client
struct APlayerControllerBlueprint_C_Update_tracked_characters_on_server_and_client_Params
{
public:
	bool                                         IsInfoFresh;                                       // 0x0(0x1)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CE6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Creatures1;            // 0x8(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Players1;              // 0x18(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_creatures1;               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_Players1;                 // 0x38(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_creatures1;             // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_players1;               // 0x58(0x10)(ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_From_Page_Tracked_Actors_IDs_Creatures1;   // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_From_Page_Tracked_Actors_IDs_Players1;     // 0x78(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_From_Page_Tracked_Actors_IDs_Players_Teammates; // 0x88(0x10)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* Local_function_library;                            // 0x98(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Filtered_remove_non_teammates;                     // 0xA0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Filtered_remove_teammates;                         // 0xB0(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Filtered_remove_creatures;                         // 0xC0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Filtered_add_players;                              // 0xD0(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Filtered_add_creatures;                            // 0xE0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Filtered_update_players;                           // 0xF0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Filtered_update_creatures;                         // 0x100(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterGameMode*                      Local_cast_shooter_game_mode;                      // 0x110(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Did_update_freshness_on_client;                    // 0x118(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CE7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_players;                                 // 0x120(0x50)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_creatures;                               // 0x170(0x50)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Local_Tracked_Info_Map_To_Use;                     // 0x1C0(0x50)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Is_handling_favorited_actors;                      // 0x210(0x1)(ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CE8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           Actor_info_to_use;                                 // 0x218(0x128)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Actor_id_to_use;                                   // 0x340(0x4)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CE9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                Removed_Tracked_Actors_IDs_Players;                // 0x348(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_Players;                  // 0x358(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Players;               // 0x368(0x10)(Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_players;                // 0x378(0x10)(ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_creatures;              // 0x388(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_Tracked_Actors_IDs_Creatures;              // 0x398(0x10)(Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_Creatures;                // 0x3A8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Local_tracked_actors_fav;                          // 0x3B8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Local_tracked_actors;                              // 0x3C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Number_of_favorites_being_shown;                   // 0x3D8(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CEA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Local_actor;                                       // 0x3E0(0x8)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        Used_Filters;                                      // 0x3E8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Creatures;             // 0x3F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        Non_favorite_tracked_actors;                       // 0x408(0x10)(OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x418(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x41C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x420(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x424(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x428(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x42C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x430(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x434(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x438(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x43C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x440(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x444(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x448(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x44C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x450(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x454(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x458(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x45C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x460(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x468(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5CEB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x470(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions; // 0x478(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x480(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x481(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_1;              // 0x482(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_2;              // 0x483(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_3;              // 0x484(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_4;              // 0x485(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_5;              // 0x486(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_5CEC[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Get_Item;                           // 0x488(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x490(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x494(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Is_Player_Being_Tracked_Atm_NewParam;     // 0x495(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CED[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x498(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x49C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5CEE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           CallFunc_Array_Get_Item_1;                         // 0x4A0(0x128)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x5C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x5CC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_is_creature_being_tracked_atm_NewParam;   // 0x5CD(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CEF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           CallFunc_Array_Get_Item_2;                         // 0x5D0(0x128)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	struct FTrackedActorPlusInfoStruct           CallFunc_Array_Get_Item_3;                         // 0x6F8(0x128)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x820(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x824(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_is_creature_being_tracked_atm_NewParam_1; // 0x828(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Is_Player_Being_Tracked_Atm_NewParam_1;   // 0x829(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_5CF0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x82C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x830(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x834(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x835(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_5CF1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x838(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x83C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x840(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x844(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x848(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_6;              // 0x84C(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_5CF2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Get_Item_4;                         // 0x850(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x854(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x858(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x85C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Is_Player_Being_Tracked_Atm_NewParam_2;   // 0x85D(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_7;              // 0x85E(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	uint8                                        Pad_5CF3[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           CallFunc_Array_Get_Item_5;                         // 0x860(0x128)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_8;              // 0x988(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_5CF4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x98C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x990(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x994(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Is_Player_Being_Tracked_Atm_NewParam_3;   // 0x995(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_9;              // 0x996(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_10;             // 0x997(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_11;             // 0x998(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_12;             // 0x999(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_13;             // 0x99A(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_5CF5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x99C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_14;             // 0x9A0(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_5CF6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Get_Item_6;                         // 0x9A4(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x9A8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_is_creature_being_tracked_atm_NewParam_2; // 0x9AC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Should_Fully_Refresh_List_ReturnValue;    // 0x9AD(0x1)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x9C (0x9C - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList_logic
struct APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_logic_Params
{
public:
	int32                                        CustomTameSelectionType;                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        ScrollbarIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Skip_UI_List;                                      // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Skip_Map;                                          // 0x1D(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Handled;                                           // 0x1E(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_5CF7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UCharacterTrackFilter_Base_C*          NewLocalVar_4;                                     // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class UCharacterTrackFilter_Base_C*          NewLocalVar_1;                                     // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class UClass*>                        Used_Filters;                                      // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                Local_actor;                                       // 0x40(0x8)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          Local_filter;                                      // 0x48(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FCustomTrackedActorInfo>       Tracked_Actor_Info;                                // 0x50(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        Tracked_Actors;                                    // 0x60(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base; // 0x80(0x8)(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        CallFunc_GetActorsToSearchThrough_BP_ReturnValue;  // 0x88(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Handle_sorting_tracked_actors_Handled;    // 0x99(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x9A(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Handle_sorting_tracked_actors_Handled_1;  // 0x9B(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
};

// 0x630 (0x630 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Handle sorting tracked actors
struct APlayerControllerBlueprint_C_Handle_sorting_tracked_actors_Params
{
public:
	int32                                        CustomTameSelectionType;                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsInfoFresh;                                       // 0x18(0x1)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CF9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        Overwritten_Custom_Actor_Array;                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          Already_Setup_Filter_Object;                       // 0x30(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Scrollbar_Index;                                   // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Skip_Dino_List_UI;                                 // 0x3C(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Skip_Map;                                          // 0x3D(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Handled;                                           // 0x3E(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_5CFA[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                Missing_teammates_waypoints;                       // 0x40(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_allies_waypoints;                          // 0x50(0x10)(Edit, ConstParm, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_creature_waypoints;                        // 0x60(0x10)(ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   NewLocalVar_3;                                     // 0x70(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	TArray<int32>                                Missing_teammates_favs;                            // 0x80(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_allies_favs;                               // 0x90(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Missing_creatures_favs;                            // 0xA0(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* Local_function_library;                            // 0xB0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_Teammates;                                 // 0xB8(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, bool>                            All_Tracked_Creatures_This_Tick;                   // 0xC8(0x50)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          NewLocalVar_2;                                     // 0x118(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	TArray<int32>                                Removed_From_Page_Tracked_Actors_IDs_Creatures;    // 0x120(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Removed_From_Page_Tracked_Actors_IDs_Players;      // 0x130(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Adjusted_Scrollbar_Index;                          // 0x140(0x4)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CFB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int32, bool>                            All_Tracked_PlayerChars_This_Tick;                 // 0x148(0x50)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Creatures_That_Remain_Tracked;  // 0x198(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked;    // 0x1E8(0x50)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   NewLocalVar;                                       // 0x238(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UCharacterTrackFilter_Base_C*          Local_track_actor_filter;                          // 0x248(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterGameMode*                      Local_cast_shooter_game_mode;                      // 0x250(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Did_update_freshness_on_client;                    // 0x258(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CFC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_players;                                 // 0x260(0x50)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_creatures;                               // 0x2B0(0x50)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FTrackedActorPlusInfoStruct> Local_Tracked_Info_Map_To_Use;                     // 0x300(0x50)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Is_handling_favorited_actors;                      // 0x350(0x1)(ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CFF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTrackedActorPlusInfoStruct           Actor_info_to_use;                                 // 0x358(0x128)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Actor_id_to_use;                                   // 0x480(0x4)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D00[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_Players;                  // 0x488(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Players;               // 0x498(0x10)(Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_players;                // 0x4A8(0x10)(ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Updated_Tracked_Actor_Info_creatures;              // 0x4B8(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Added_Tracked_Actor_Info_Creatures;                // 0x4C8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Local_tracked_actors_fav;                          // 0x4D8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Local_tracked_actors;                              // 0x4E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Number_of_favorites_being_shown;                   // 0x4F8(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D03[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Local_actor;                                       // 0x500(0x8)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        Used_Filters;                                      // 0x508(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   Replaced_Tracked_Actor_Info_Creatures;             // 0x518(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        Non_favorite_tracked_actors;                       // 0x528(0x10)(OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x538(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x53C(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetControllerPlayer_ReturnValue;          // 0x540(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   K2Node_MakeArray_Array;                            // 0x548(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetControllerPlayer_ReturnValue_1;        // 0x558(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	TArray<struct FTrackedActorPlusInfoStruct>   CallFunc_GetAllCachedTeamTames_ReturnValue;        // 0x560(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x570(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D08[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTrackedActorPlusInfoStruct>   K2Node_MakeArray_Array_1;                          // 0x578(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	class AShooterCharacter*                     CallFunc_GetControllerPlayer_ReturnValue_2;        // 0x588(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class AShooterCharacter*                     CallFunc_GetControllerPlayer_ReturnValue_3;        // 0x590(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	TArray<struct FTrackedActorPlusInfoStruct>   CallFunc_GetAllCachedTeamTames_ReturnValue_1;      // 0x598(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue_1;           // 0x5A8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue_2;           // 0x5A9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue_3;           // 0x5AA(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5AB(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x5AC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue_4;           // 0x5AD(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x5AE(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5AF(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue_5;           // 0x5B0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x5B1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_5D09[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetControllerPlayer_ReturnValue_4;        // 0x5B8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x5C0(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x5C8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions; // 0x5D0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5D8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5D0C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCharacterTrackFilter_Base_C*          CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base; // 0x5E0(0x8)(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5E8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5D0D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x5F0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x5F8(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x600(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5D0E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_handle_missing_waypoints_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast; // 0x608(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_handle_missing_waypoints_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1; // 0x610(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast; // 0x618(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1; // 0x620(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Handle_sorting_tracked_actors_first_stuff_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast; // 0x628(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Should Fully Refresh List
struct APlayerControllerBlueprint_C_Should_Fully_Refresh_List_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x21 (0x21 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList
struct APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_Params
{
public:
	int32                                        CustomTameSelectionType;                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Handled;                                           // 0x18(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_5D15[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NewScrollbarIndex;                                 // 0x1C(0x4)(Edit, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPServerRequestCustomTrackedActorList_logic_Handled; // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x25C (0x25C - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit
struct APlayerControllerBlueprint_C_CanFit_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	double                                       VerticalOffset;                                    // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       Angle;                                             // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       HorizontalOffset;                                  // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       Radius;                                            // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       HalfHeight;                                        // 0x38(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                SpawningActor;                                     // 0x40(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                IgnoreActor;                                       // 0x48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         Can;                                               // 0x50(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D16[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewLocation;                                       // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               TestLocation;                                      // 0x70(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         LocalCan;                                          // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D17[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x90(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0xB8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xD0(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0xE8(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x100(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x118(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class AActor*                                CallFunc_CapsuleOverlapFast_FirstOverlappedActor;  // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CapsuleOverlapFast_ReturnValue;           // 0x138(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x139(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5D18[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x140(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x231(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5D19[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x238(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x250(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_CapsuleOverlapFast_Radius_ImplicitCast;   // 0x254(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_CapsuleOverlapFast_HalfHeight_ImplicitCast; // 0x258(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x190 (0x190 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy
struct APlayerControllerBlueprint_C_CanDeploy_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class AActor*                                Actor;                                             // 0x20(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class AActor*                                IgnoreActor;                                       // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         Can;                                               // 0x30(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D1A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewLocation;                                       // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                LocalFailureReason;                                // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       VerticalOffset;                                    // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       HorizontalOffset;                                  // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       Angle;                                             // 0x70(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         LocalCanDeploy;                                    // 0x78(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D1B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LocalLocation;                                     // 0x80(0x18)(Edit, ExportObject, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x98(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x99(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5D1C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0xA8(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5D1D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xB8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0xC0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	int32                                        Temp_int_Variable;                                 // 0xC8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0xD0(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0xD8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xE0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xEC(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xED(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5D1E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0xF0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	int32                                        Temp_int_Variable_1;                               // 0xF8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_CanFit_Can;                               // 0xFC(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D1F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_CanFit_NewLocation;                       // 0x100(0x18)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x118(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5D20[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x11C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x120(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x121(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x122(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_CanFit_Can_1;                             // 0x123(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_5D21[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_CanFit_NewLocation_1;                     // 0x128(0x18)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x140(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5D22[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x148(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       K2Node_VariableSet_VerticalOffset_ImplicitCast;    // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_CanFit_HalfHeight_ImplicitCast;           // 0x158(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_B_ImplicitCast;         // 0x160(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x168(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_CanFit_HalfHeight_ImplicitCast_1;         // 0x170(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       K2Node_VariableSet_HorizontalOffset_ImplicitCast;  // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_CanFit_Radius_ImplicitCast;               // 0x180(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_CanFit_Radius_ImplicitCast_1;             // 0x188(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
};

// 0x78 (0x78 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation
struct APlayerControllerBlueprint_C_BPCheckCanDinoSpawnFromLocation_Params
{
public:
	class UClass*                                DinoClass;                                         // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CheckLocation;                                     // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               LocalLoc;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x50(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_CanDeploy_Can;                            // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D23[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_CanDeploy_NewLocation;                    // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_D7293B2D48183D83205E9295F5716E6E
struct APlayerControllerBlueprint_C_OnLoaded_D7293B2D48183D83205E9295F5716E6E_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_BA98DE0848BC459B691689932D89326C
struct APlayerControllerBlueprint_C_OnLoaded_BA98DE0848BC459B691689932D89326C_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_CAE125AC424938179B7AD98DC7D71BB0
struct APlayerControllerBlueprint_C_OnLoaded_CAE125AC424938179B7AD98DC7D71BB0_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnActorCustomEvent_Event
struct APlayerControllerBlueprint_C_OnActorCustomEvent_Event_Params
{
public:
	class FName                                  EventCustomName;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                EventCustomString;                                 // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class AActor*                                InstigatorActor;                                   // 0x18(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPApplyFoliageHarvestEffectOnHitAndCollect
struct APlayerControllerBlueprint_C_BPApplyFoliageHarvestEffectOnHitAndCollect_Params
{
public:
	struct FVector                               FoliageOrigin_ImpactPoint;                         // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               TraceEndpoint;                                     // 0x18(0x18)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               InteractDir;                                       // 0x30(0x18)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.AddPhotoModeMarker
struct APlayerControllerBlueprint_C_AddPhotoModeMarker_Params
{
public:
	TArray<struct FVector>                       Points;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                MarkerClass;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SavePhotoModeMarker
struct APlayerControllerBlueprint_C_SavePhotoModeMarker_Params
{
public:
	class FString                                MarkerName;                                        // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x424 (0x424 - 0x0)
// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
struct APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsShipping_ReturnValue;                   // 0x4(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x8(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  K2Node_CustomEvent_EventCustomName;                // 0x10(0x8)(ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                K2Node_CustomEvent_EventCustomString;              // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                K2Node_CustomEvent_InstigatorActor;                // 0x28(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x58(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D25[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x60(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5D26[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x70(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Split_LeftS_1;                            // 0x80(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Split_RightS_1;                           // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Split_ReturnValue_1;                      // 0xA0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0xA1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5D27[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue_1;                    // 0xA8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0xB8(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsNumeric_ReturnValue_1;                  // 0xBC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_5D28[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0xC0(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5D29[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Split_LeftS_2;                            // 0xC8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Split_RightS_2;                           // 0xD8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Split_ReturnValue_2;                      // 0xE8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5D2A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue_2;                    // 0xF0(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x100(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsNumeric_ReturnValue_2;                  // 0x101(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5D2B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_2;           // 0x104(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Split_LeftS_3;                            // 0x108(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Split_RightS_3;                           // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Split_ReturnValue_3;                      // 0x128(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x129(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D2C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue_3;                    // 0x130(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsNumeric_ReturnValue_3;                  // 0x140(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_5D2D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_3;           // 0x144(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BPServerRequestCustomTrackedActorList_logic_Handled; // 0x148(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D2E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_CustomEvent_Loaded;                         // 0x150(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BPServerRequestCustomTrackedActorList_logic_Handled_1; // 0x158(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x159(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0x15A(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5D2F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x160(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BPTryMultiUse_ReturnValue;                // 0x171(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x172(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x173(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5D30[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Temp_class_Variable;                               // 0x178(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x180(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5D31[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x188(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x190(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D32[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x198(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x1A0(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_2;  // 0x1A8(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5D33[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      CallFunc_PawnToPrimalCharacter_ReturnValue;        // 0x1B0(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5D34[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_CustomEvent_Loaded_1;                       // 0x1C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UClass*                                Temp_class_Variable_1;                             // 0x1D0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UClass*                                K2Node_CustomEvent_Loaded_2;                       // 0x1D8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x1E0(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x1E8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5D35[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x1F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ATrackBinocularsBuff_C*                K2Node_DynamicCast_AsTrack_Binoculars_Buff;        // 0x1F8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x200(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5D36[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x204(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5D37[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPlayerControllerTrameTrackerFunctions_C* CallFunc_SpawnObject_ReturnValue;                  // 0x218(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x220(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               K2Node_Event_FoliageOrigin_ImpactPoint;            // 0x230(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               K2Node_Event_TraceEndpoint;                        // 0x248(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               K2Node_Event_interactDir;                          // 0x260(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x278(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_X;                            // 0x288(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x290(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x298(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0x2A0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x2A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x2B0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_K2_IsTimerActive_ReturnValue;             // 0x2B8(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D38[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2C0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2C8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0x2D0(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2E0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5D39[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x2E8(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                Temp_class_Variable_2;                             // 0x2F0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff_1;           // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x300(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5D3A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x308(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x310(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x318(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x320(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_5D3B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue_1;              // 0x328(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_ShouldSpawnWaterInteraction_ReturnValue;  // 0x330(0x1)(BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D3C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerCameraBlueprint_C*              K2Node_DynamicCast_AsPlayer_Camera_Blueprint;      // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x340(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_5D3D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       K2Node_CustomEvent_Points;                         // 0x348(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                K2Node_CustomEvent_MarkerClass;                    // 0x358(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                K2Node_CustomEvent_MarkerName;                     // 0x360(0x10)(ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x370(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x3E8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x3E9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_5D3E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3EC(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0x3FC(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D3F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x400(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D40[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;   // 0x408(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_AddFoliageCapsuleInteractionEffect_Radius_ImplicitCast; // 0x410(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MapRangeClamped_OutRangeA_ImplicitCast;   // 0x418(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_AddFoliageCapsuleInteractionEffect_FoliageInteractionStrength_ImplicitCast; // 0x420(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


