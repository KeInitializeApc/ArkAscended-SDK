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

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.UseBlackboard
struct AAIController_UseBlackboard_Params
{
public:
	class UBlackboardData*                       BlackboardAsset;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1AAB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.UnclaimTaskResource
struct AAIController_UnclaimTaskResource_Params
{
public:
	class UClass*                                ResourceClass;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.SetPathFollowingComponent
struct AAIController_SetPathFollowingComponent_Params
{
public:
	class UPathFollowingComponent*               NewPFComponent;                                    // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.AIController.SetMoveBlockDetection
struct AAIController_SetMoveBlockDetection_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIController.RunBehaviorTree
struct AAIController_RunBehaviorTree_Params
{
public:
	class UBehaviorTree*                         BTAsset;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1AB5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIController.OnUsingBlackBoard
struct AAIController_OnUsingBlackBoard_Params
{
public:
	class UBlackboardComponent*                  BlackboardComp;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
public:
	struct FGameplayResourceSet                  NewlyClaimed;                                      // 0x0(0x2)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FGameplayResourceSet                  FreshlyReleased;                                   // 0x2(0x2)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.AIController.MoveToLocation
struct AAIController_MoveToLocation_Params
{
public:
	struct FVector                               Dest;                                              // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        AcceptanceRadius;                                  // 0x18(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bStopOnOverlap;                                    // 0x1C(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUsePathfinding;                                   // 0x1D(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bProjectDestinationToNavigation;                   // 0x1E(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanStrafe;                                        // 0x1F(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x20(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowPartialPath;                                 // 0x28(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         WasPlayerCommand;                                  // 0x29(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPathFollowingRequestResult       ReturnValue;                                       // 0x2A(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1AE1[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIController.MoveToActor
struct AAIController_MoveToActor_Params
{
public:
	class AActor*                                Goal;                                              // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        AcceptanceRadius;                                  // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bStopOnOverlap;                                    // 0xC(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUsePathfinding;                                   // 0xD(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanStrafe;                                        // 0xE(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF3[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0x10(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowPartialPath;                                 // 0x18(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPathFollowingRequestResult       ReturnValue;                                       // 0x19(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1AF6[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.K2_SetFocus
struct AAIController_K2_SetFocus_Params
{
public:
	class AActor*                                NewFocus;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.K2_SetFocalPoint
struct AAIController_K2_SetFocalPoint_Params
{
public:
	struct FVector                               FP;                                                // 0x0(0x18)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.AIController.HasPartialPath
struct AAIController_HasPartialPath_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetPathFollowingComponent
struct AAIController_GetPathFollowingComponent_Params
{
public:
	class UPathFollowingComponent*               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.AIController.GetMoveStatus
struct AAIController_GetMoveStatus_Params
{
public:
	enum class EPathFollowingStatus              ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIController_GetImmediateMoveDestination_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetFocusActor
struct AAIController_GetFocusActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIController.GetFocalPointOnActor
struct AAIController_GetFocalPointOnActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.GetFocalPoint
struct AAIController_GetFocalPoint_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetDeprecatedActionsComponent
struct AAIController_GetDeprecatedActionsComponent_Params
{
public:
	class UPawnActionsComponent*                 ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIController_GetAIPerceptionComponent_Params
{
public:
	class UAIPerceptionComponent*                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.ClaimTaskResource
struct AAIController_ClaimTaskResource_Params
{
public:
	class UClass*                                ResourceClass;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PathFollowingComponent.OnNavDataRegistered
struct UPathFollowingComponent_OnNavDataRegistered_Params
{
public:
	class ANavigationData*                       NavData;                                           // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               NormalImpulse;                                     // 0x10(0x18)(Edit, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FHitResult                            Hit;                                               // 0x28(0xF0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
public:
	enum class EPathFollowingAction              ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
public:
	struct FAIRequestID                          RequestID;                                         // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EPathFollowingResult              MovementResult;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B82[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
public:
	enum class EAIRequestPriority                ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
public:
	enum class EPawnActionResult                 WithResult;                                        // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UClass*                                ActionClass;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
public:
	class UPawnAction*                           NewAction;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAIRequestPriority                Priority;                                          // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1C6F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               Instigator;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C70[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UPawnAction*                           Action;                                            // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAIRequestPriority                Priority;                                          // 0x10(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C76[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
public:
	class UPawnAction*                           ActionToAbort;                                     // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionAbortState             ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C7C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
public:
	class UPawnAction*                           ActionToAbort;                                     // 0x0(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionAbortState             ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C7F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C94[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionResult                 WithResult;                                        // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CA3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BrainComponent.IsRunning
struct UBrainComponent_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BrainComponent.IsPaused
struct UBrainComponent_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
public:
	struct FGameplayTag                          InjectTag;                                         // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BehaviorTreeComponent.FindService
struct UBehaviorTreeComponent_FindService_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class UBTNode*                               ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CooldownDuration;                                  // 0x8(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE1[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
struct IBlackboardAssetProvider_GetBlackboardAsset_Params
{
public:
	class UBlackboardData*                       ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               VectorValue;                                       // 0x8(0x18)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                StringValue;                                       // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FRotator                              VectorValue;                                       // 0x8(0x18)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UObject*                               ObjectValue;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  NameValue;                                         // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        IntValue;                                          // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        FloatValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        EnumValue;                                         // 0x8(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D1B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UClass*                                ClassValue;                                        // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         BoolValue;                                         // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D26[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D2B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D42[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D48[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FRotator                              ResultRotation;                                    // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D4C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               ResultLocation;                                    // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D4E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardComponent.ClearValueAsVector
struct UBlackboardComponent_ClearValueAsVector_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardComponent.ClearValueAsRotator
struct UBlackboardComponent_ClearValueAsRotator_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AActor*                                OwningActor;                                       // 0x8(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FVector                               Value;                                             // 0x30(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x30(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FRotator                              Value;                                             // 0x30(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class UObject*                               Value;                                             // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class FName                                  Value;                                             // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	int32                                        Value;                                             // 0x30(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1DB0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        Value;                                             // 0x30(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1DB2[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Value;                                             // 0x30(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1DB9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class UClass*                                Value;                                             // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         Value;                                             // 0x30(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1DC5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBlackboardComponent*                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBehaviorTreeComponent*                ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class FString                                ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FRotator                              ReturnValue;                                       // 0x30(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class UObject*                               ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class FName                                  ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E0B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        ReturnValue;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E0F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E13[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class UClass*                                ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E18[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class AActor*                                ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E3D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E42[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EBTNodeResult                     NodeResult;                                        // 0x10(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E5B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E62[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
struct UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E68[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E6C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
struct UBTDecorator_BlueprintBase_FinishConditionCheck_Params
{
public:
	bool                                         bAllowExecution;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ResetInterval
struct UBTService_BlueprintBase_ResetInterval_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EC1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EC2[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
public:
	class FName                                  MessageName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        RequestID;                                         // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
public:
	class FName                                  MessageName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EF0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EF8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bUnlockMovement;                                   // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         UnlockAILogic;                                     // 0x9(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F5E[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UClass*                                PawnClass;                                         // 0x8(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBehaviorTree*                         BehaviorTree;                                      // 0x10(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference)
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bNoCollisionFail;                                  // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F70[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Owner;                                             // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	class APawn*                                 ReturnValue;                                       // 0x58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
struct UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FVector                               Goal;                                              // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
struct UAIBlueprintHelperLibrary_SimpleMoveToActor_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class AActor*                                Goal;                                              // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
public:
	class APawn*                                 Target;                                            // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	class FName                                  Message;                                           // 0x8(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UObject*                               MessageSource;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSuccess;                                          // 0x18(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F7E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bLockMovement;                                     // 0x8(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         LockAILogic;                                       // 0x9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F85[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F88[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F8F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
public:
	struct FVector                               DirectionVector;                                   // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F97[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
struct UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F9F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
struct UAIBlueprintHelperLibrary_GetCurrentPathPoints_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<struct FVector>                       ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
struct UAIBlueprintHelperLibrary_GetCurrentPathIndex_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FA1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
struct UAIBlueprintHelperLibrary_GetCurrentPath_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UNavigationPath*                       ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	class UBlackboardComponent*                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
public:
	class AActor*                                ControlledActor;                                   // 0x0(0x8)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AAIController*                         ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FVector                               Destination;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                TargetActor;                                       // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AcceptanceRadius;                                  // 0x30(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bStopOnOverlap;                                    // 0x34(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FB6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UAIAsyncTaskBlueprintProxy*            ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ResultingLocation;                                 // 0x10(0x18)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ResultingActor;                                    // 0x10(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       ResultingLocationSet;                              // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        ResultingActorsSet;                                // 0x10(0x10)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
struct UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params
{
public:
	TArray<struct FVector>                       ResultLocations;                                   // 0x0(0x10)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FEE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params
{
public:
	TArray<class AActor*>                        ResultActors;                                      // 0x0(0x10)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FF2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
public:
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstance;                                     // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EEnvQueryStatus                   QueryStatus;                                       // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FFA[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UEnvQuery*                             QueryTemplate;                                     // 0x8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UObject*                               Querier;                                           // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_2000[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                WrapperClass;                                      // 0x20(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UEnvQueryInstanceBlueprintWrapper*     ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
struct UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Params
{
public:
	TArray<class AActor*>                        ContextActors;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
public:
	TArray<struct FVector>                       ContextLocations;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
public:
	struct FVector                               GeneratedVector;                                   // 0x0(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
public:
	class AActor*                                GeneratedActor;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
public:
	bool                                         bSuspend;                                          // 0x0(0x1)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
struct ANavLinkProxy_SetSmartLinkEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.NavLinkProxy.ResumePathFollowing
struct ANavLinkProxy_ResumePathFollowing_Params
{
public:
	class AActor*                                Agent;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
struct ANavLinkProxy_ReceiveSmartLinkReached_Params
{
public:
	class AActor*                                Agent;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               Destination;                                       // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
struct ANavLinkProxy_IsSmartLinkEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.NavLinkProxy.HasMovingAgents
struct ANavLinkProxy_HasMovingAgents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
struct UNavLocalGridManager_SetLocalNavigationGridDensity_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        CellSize;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_208B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
struct UNavLocalGridManager_RemoveLocalNavigationGrid_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        GridId;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRebuildGrids;                                     // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2094[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
struct UNavLocalGridManager_FindLocalNavigationGridPath_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x48(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_209A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
struct UNavLocalGridManager_AddLocalNavigationGridForPoints_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Radius2D;                                          // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Height;                                            // 0x1C(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	bool                                         bRebuildGrids;                                     // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x24(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
struct UNavLocalGridManager_AddLocalNavigationGridForPoint_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        Radius2D;                                          // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Height;                                            // 0x24(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	bool                                         bRebuildGrids;                                     // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20A8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x2C(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
struct UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        CapsuleRadius;                                     // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CapsuleHalfHeight;                                 // 0x24(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        Radius2D;                                          // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Height;                                            // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	bool                                         bRebuildGrids;                                     // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x34(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
struct UNavLocalGridManager_AddLocalNavigationGridForBox_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Extent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x38(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        Radius2D;                                          // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Height;                                            // 0x54(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	bool                                         bRebuildGrids;                                     // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x5C(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionComponent.SetSenseEnabled
struct UAIPerceptionComponent_SetSenseEnabled_Params
{
public:
	class UClass*                                SenseClass;                                        // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnable;                                           // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20D3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_20D5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
struct UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
public:
	TArray<class AActor*>                        OutActors;                                         // 0x0(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIPerceptionComponent_GetPerceivedActors_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
struct UAIPerceptionComponent_GetKnownPerceivedActors_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
struct UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIPerceptionComponent_GetActorsPerception_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	struct FActorPerceptionBlueprintInfo         Info;                                              // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20E2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
public:
	class UClass*                                SenseClass;                                        // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
public:
	class UClass*                                SenseClass;                                        // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UAISenseEvent*                         PerceptionEvent;                                   // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
public:
	class UAISenseEvent*                         PerceptionEvent;                                   // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UClass*                                Sense;                                             // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                Target;                                            // 0x10(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2103[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_211D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FAIStimulus                           Stimulus;                                          // 0x8(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
public:
	TArray<class UAISenseEvent*>                 EventsToProcess;                                   // 0x0(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2139[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
public:
	class AActor*                                ActorListener;                                     // 0x0(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
public:
	class AActor*                                ActorListener;                                     // 0x0(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
public:
	class AActor*                                ActorListener;                                     // 0x0(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
public:
	class APawn*                                 NewPawn;                                           // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
public:
	TArray<class UAIPerceptionComponent*>        ListenerComponents;                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
public:
	TArray<class AActor*>                        ListenerActors;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                DamagedActor;                                      // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AActor*                                Instigator;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        DamageAmount;                                      // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_215E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               EventLocation;                                     // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               HitLocation;                                       // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class FName                                  Tag;                                               // 0x50(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               NoiseLocation;                                     // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Loudness;                                          // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2169[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Instigator;                                        // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  Tag;                                               // 0x34(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_216C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
public:
	class APawn*                                 Requestor;                                         // 0x0(0x8)(Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        PredictionTime;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2175[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
public:
	class AAIController*                         Requestor;                                         // 0x0(0x8)(Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        PredictionTime;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2179[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AIModule.AISense_Touch.ReportTouchEvent
struct UAISense_Touch_ReportTouchEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                TouchReceiver;                                     // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class AActor*                                OtherActor;                                        // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
public:
	float                                        NewSensingInterval;                                // 0x0(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
public:
	float                                        NewPeripheralVisionAngle;                          // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
public:
	class APawn*                                 Instigator;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Volume;                                            // 0x20(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config)
	uint8                                        Pad_2196[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FVector                               GoalLocation;                                      // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                GoalActor;                                         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        AcceptanceRadius;                                  // 0x28(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAIOptionFlag                     StopOnOverlap;                                     // 0x2C(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAIOptionFlag                     AcceptPartialPath;                                 // 0x2D(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUsePathfinding;                                   // 0x2E(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLockAILogic;                                      // 0x2F(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseContinuousGoalTracking;                        // 0x30(0x1)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	enum class EAIOptionFlag                     ProjectGoalOnNavigation;                           // 0x31(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21AD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UAITask_MoveTo*                        ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AITask_RunEQS.RunEQS
struct UAITask_RunEQS_RunEQS_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UEnvQuery*                             QueryTemplate;                                     // 0x8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UAITask_RunEQS*                        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


