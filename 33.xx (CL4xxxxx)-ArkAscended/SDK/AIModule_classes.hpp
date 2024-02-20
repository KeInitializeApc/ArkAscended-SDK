#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class AIModule.BTNode
class UBTNode : public UObject
{
public:
	uint8                                        Pad_1A7E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBehaviorTree*                         TreeAsset;                                         // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBTCompositeNode*                      ParentNode;                                        // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A83[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTNode* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class AIModule.BTAuxiliaryNode
class UBTAuxiliaryNode : public UBTNode
{
public:
	uint8                                        Pad_1A86[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTAuxiliaryNode* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class AIModule.BTService
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                        Interval;                                          // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        RandomDeviation;                                   // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bCallTickOnSearchStart : 1;                        // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bRestartTimerOnEachActivation : 1;                 // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A8D[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlackboardBase
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTService_BlackboardBase* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class AIModule.BTTaskNode
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                    Services;                                          // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIgnoreRestartSelf : 1;                            // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A95[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTaskNode* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTTask_BlackboardBase
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_BlackboardBase* GetDefaultObj();

};

// 0x38 (0xD0 - 0x98)
// Class AIModule.BTTask_RotateToFaceBBEntry
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                        Precision;                                         // 0x98(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A9B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                PrecisionKey;                                      // 0xA0(0x28)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bForceUpdatePrecision : 1;                         // Mask: 0x1, PropSize: 0x10xC8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bZeroPrecisionSucceedsInstantly : 1;               // Mask: 0x2, PropSize: 0x10xC8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIgnorePitch : 1;                                  // Mask: 0x4, PropSize: 0x10xC8(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_RotateToFaceBBEntry* GetDefaultObj();

};

// 0x90 (0x600 - 0x570)
// Class AIModule.AIController
class AAIController : public APrimalController
{
public:
	uint8                                        Pad_1B1E[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bStartAILogicOnPossess : 1;                        // Mask: 0x1, PropSize: 0x10x5A8(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bStopAILogicOnUnposses : 1;                        // Mask: 0x2, PropSize: 0x10x5A8(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bLOSflag : 1;                                      // Mask: 0x4, PropSize: 0x10x5A8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSkipExtraLOSChecks : 1;                           // Mask: 0x8, PropSize: 0x10x5A8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x10, PropSize: 0x10x5A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bWantsPlayerState : 1;                             // Mask: 0x20, PropSize: 0x10x5A8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bLastRequestedMoveToLocationWasPlayerCommand : 1;  // Mask: 0x40, PropSize: 0x10x5A8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSetControlRotationFromPawnOrientation : 1;        // Mask: 0x80, PropSize: 0x10x5A8(0x1)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bExecutingRotateToFace : 1;                        // Mask: 0x1, PropSize: 0x10x5A9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_E1 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B26[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPathFollowingComponent*               PathFollowingComponent;                            // 0x5B0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UBrainComponent*                       BrainComponent;                                    // 0x5B8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x5C0(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPawnActionsComponent*                 ActionsComp;                                       // 0x5C8(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBlackboardComponent*                  Blackboard;                                        // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGameplayTasksComponent*               CachedGameplayTasksComponent;                      // 0x5D8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                DefaultNavigationFilterClass;                      // 0x5E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReceiveMoveCompleted;                              // 0x5E8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B30[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AAIController* GetDefaultObj();

	class UBlackboardData* UseBlackboard(class UBlackboardComponent* BlackboardComponent, bool ReturnValue);
	class UClass* UnclaimTaskResource();
	class UPathFollowingComponent* SetPathFollowingComponent();
	bool SetMoveBlockDetection();
	class UBehaviorTree* RunBehaviorTree(bool ReturnValue);
	class UBlackboardData* OnUsingBlackBoard();
	struct FGameplayResourceSet OnGameplayTaskResourcesClaimed();
	bool MoveToLocation(const struct FVector& Dest, enum class EPathFollowingRequestResult ReturnValue);
	bool MoveToActor(enum class EPathFollowingRequestResult ReturnValue);
	class AActor* K2_SetFocus();
	struct FVector K2_SetFocalPoint();
	void K2_ClearFocus();
	void HasPartialPath(bool ReturnValue);
	void GetPathFollowingComponent(class UPathFollowingComponent* ReturnValue);
	void GetMoveStatus(enum class EPathFollowingStatus ReturnValue);
	void GetImmediateMoveDestination(const struct FVector& ReturnValue);
	void GetFocusActor(class AActor* ReturnValue);
	void GetFocalPointOnActor(class AActor** Actor, const struct FVector& ReturnValue);
	void GetFocalPoint(const struct FVector& ReturnValue);
	void GetDeprecatedActionsComponent(class UPawnActionsComponent* ReturnValue);
	void GetAIPerceptionComponent(class UAIPerceptionComponent* ReturnValue);
	class UClass* ClaimTaskResource();
};

// 0x228 (0x2E0 - 0xB8)
// Class AIModule.PathFollowingComponent
class UPathFollowingComponent : public UActorComponent
{
public:
	uint8                                        Pad_1B6E[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	class UNavMovementComponent*                 MovementComp;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_1B70[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       MyNavData;                                         // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B72[0x1D8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPathFollowingComponent* GetDefaultObj();

	class ANavigationData* OnNavDataRegistered();
	struct FHitResult OnActorBump(class AActor* SelfActor, class AActor** OtherActor, struct FVector* NormalImpulse);
	void GetPathDestination(const struct FVector& ReturnValue);
	void GetPathActionType(enum class EPathFollowingAction ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class AIModule.AIAsyncTaskBlueprintProxy
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B84[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIAsyncTaskBlueprintProxy* GetDefaultObj();

	void OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIResourceInterface
class IAIResourceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAIResourceInterface* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class AIModule.AISenseBlueprintListener
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static class UClass* StaticClass();
	static class UAISenseBlueprintListener* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class AIModule.AISenseConfig
class UAISenseConfig : public UObject
{
public:
	struct FColor                                DebugColor;                                        // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAge;                                            // 0x2C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bStartsEnabled : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, ConstParm, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE4[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISenseConfig* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Blueprint
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISenseConfig_Blueprint* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class AIModule.AISenseConfig_Hearing
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        HearingRange;                                      // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        LoSHearingRange;                                   // 0x54(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseLoSHearing : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_E9 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1BF6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISenseConfig_Hearing* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Prediction
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static class UClass* StaticClass();
	static class UAISenseConfig_Prediction* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class AIModule.AISenseConfig_Sight
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        SightRadius;                                       // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        LoseSightRadius;                                   // 0x54(0x4)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        PeripheralVisionAngleDegrees;                      // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        AutoSuccessRangeFromLastSeenLocation;              // 0x60(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        PointOfViewBackwardOffset;                         // 0x64(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NearClippingRadius;                                // 0x68(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C02[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISenseConfig_Sight* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Team
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static class UClass* StaticClass();
	static class UAISenseConfig_Team* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Touch
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static class UClass* StaticClass();
	static class UAISenseConfig_Touch* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AISenseEvent
class UAISenseEvent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAISenseEvent* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AIModule.AISenseEvent_Damage
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                        Event;                                             // 0x28(0x50)(ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISenseEvent_Damage* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class AIModule.AISenseEvent_Hearing
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                         Event;                                             // 0x28(0x40)(ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISenseEvent_Hearing* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.CrowdAgentInterface
class ICrowdAgentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICrowdAgentInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryTypes
class UEnvQueryTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTypes* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EQSQueryResultSourceInterface
class IEQSQueryResultSourceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEQSQueryResultSourceInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.GenericTeamAgentInterface
class IGenericTeamAgentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGenericTeamAgentInterface* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class AIModule.PawnAction
class UPawnAction : public UObject
{
public:
	class UPawnAction*                           ChildAction;                                       // 0x28(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           ParentAction;                                      // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnActionsComponent*                 OwnerComponent;                                    // 0x38(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Config)
	class UObject*                               Instigator;                                        // 0x40(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UBrainComponent*                       BrainComp;                                         // 0x48(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C58[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAllowNewSameClassInstance : 1;                    // Mask: 0x1, PropSize: 0x10x80(0x1)(ConstParm, ExportObject, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReplaceActiveSameClassInstance : 1;               // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShouldPauseMovement : 1;                          // Mask: 0x4, PropSize: 0x10x80(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAlwaysNotifyOnFinished : 1;                       // Mask: 0x8, PropSize: 0x10x80(0x1)(Edit, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C5D[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction* GetDefaultObj();

	void GetActionPriority(enum class EAIRequestPriority ReturnValue);
	void Finish(enum class EPawnActionResult* WithResult);
	class UObject* CreateActionInstance(class UClass** ActionClass, class UPawnAction* ReturnValue);
};

// 0x38 (0xF0 - 0xB8)
// Class AIModule.PawnActionsComponent
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                 ControlledPawn;                                    // 0xB8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FPawnActionStack>              ActionStacks;                                      // 0xC0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FPawnActionEvent>              ActionEvents;                                      // 0xD0(0x10)(ConstParm, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           CurrentAction;                                     // 0xE0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C83[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnActionsComponent* GetDefaultObj();

	enum class EAIRequestPriority K2_PushAction(class UPawnAction** NewAction, class UObject** Instigator, bool ReturnValue);
	enum class EAIRequestPriority K2_PerformAction(class APawn* Pawn, class UPawnAction** Action, bool ReturnValue);
	void K2_ForceAbortAction(class UPawnAction** ActionToAbort, enum class EPawnActionAbortState ReturnValue);
	void K2_AbortAction(class UPawnAction** ActionToAbort, enum class EPawnActionAbortState ReturnValue);
};

// 0x0 (0x90 - 0x90)
// Class AIModule.PawnAction_BlueprintBase
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static class UClass* StaticClass();
	static class UPawnAction_BlueprintBase* GetDefaultObj();

	float ActionTick(class APawn** ControlledPawn);
	void ActionStart(class APawn** ControlledPawn);
	void ActionResume(class APawn** ControlledPawn);
	void ActionPause(class APawn** ControlledPawn);
	void ActionFinished(class APawn** ControlledPawn, enum class EPawnActionResult* WithResult);
};

// 0x60 (0xF0 - 0x90)
// Class AIModule.PawnAction_Move
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                GoalActor;                                         // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector                               GoalLocation;                                      // 0x98(0x18)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AcceptableRadius;                                  // 0xB0(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CA6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0xB8(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFinishOnOverlap : 1;                              // Mask: 0x2, PropSize: 0x10xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUsePathfinding : 1;                               // Mask: 0x4, PropSize: 0x10xC0(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x8, PropSize: 0x10xC0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bProjectGoalToNavigation : 1;                      // Mask: 0x10, PropSize: 0x10xC0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUpdatePathToGoal : 1;                             // Mask: 0x20, PropSize: 0x10xC0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAbortSubActionOnPathChange : 1;                   // Mask: 0x40, PropSize: 0x10xC0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CA9[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Move* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class AIModule.PawnAction_Repeat
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                           ActionToRepeat;                                    // 0x90(0x8)(BlueprintVisible, Net, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           RecentActionCopy;                                  // 0x98(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CAC[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Repeat* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class AIModule.PawnAction_Sequence
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                   ActionSequence;                                    // 0x90(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CAE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPawnAction*                           RecentActionCopy;                                  // 0xA8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CAF[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Sequence* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class AIModule.PawnAction_Wait
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                        TimeToWait;                                        // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CB2[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Wait* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AIModule.AIResource_Movement
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass();
	static class UAIResource_Movement* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AIModule.AIResource_Logic
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass();
	static class UAIResource_Logic* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class AIModule.AISubsystem
class UAISubsystem : public UObject
{
public:
	uint8                                        Pad_1CB7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UAISystem*                             AISystem;                                          // 0x30(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISubsystem* GetDefaultObj();

};

// 0x110 (0x170 - 0x60)
// Class AIModule.AISystem
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                        PerceptionSystemClassName;                         // 0x60(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, SubobjectReference)
	struct FSoftClassPath                        HotSpotManagerClassName;                           // 0x80(0x20)(BlueprintVisible, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        EnvQueryManagerClassName;                          // 0xA0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AcceptanceRadius;                                  // 0xC0(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PathfollowingRegularPathPointAcceptanceRadius;     // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PathfollowingNavLinkAcceptanceRadius;              // 0xC8(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFinishMoveOnGoalOverlap;                          // 0xCC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAcceptPartialPaths;                               // 0xCD(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowStrafing;                                    // 0xCE(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowControllersAsEQSQuerier;                     // 0xCF(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableDebuggerPlugin;                             // 0xD0(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForgetStaleActors;                                // 0xD1(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAddBlackboardSelfKey;                             // 0xD2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bClearBBEntryOnBTEQSFail;                          // 0xD3(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bBlackboardKeyDecoratorAllowsNoneAsValue;          // 0xD4(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 DefaultSightCollisionChannel;                      // 0xD5(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CBE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UBehaviorTreeManager*                  BehaviorTreeManager;                               // 0xD8(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UEnvQueryManager*                      EnvironmentQueryManager;                           // 0xE0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIPerceptionSystem*                   PerceptionSystem;                                  // 0xE8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UAIAsyncTaskBlueprintProxy*>    AllProxyObjects;                                   // 0xF0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIHotSpotManager*                     HotSpotManager;                                    // 0x100(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UNavLocalGridManager*                  NavLocalGrids;                                     // 0x108(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CC1[0x60];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISystem* GetDefaultObj();

	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// 0x40 (0x68 - 0x28)
// Class AIModule.BehaviorTree
class UBehaviorTree : public UObject
{
public:
	uint8                                        Pad_1CC4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBTCompositeNode*                      RootNode;                                          // 0x30(0x8)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UBTDecorator*>                  RootDecorators;                                    // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FBTDecoratorLogic>             RootDecoratorOps;                                  // 0x50(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CC6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBehaviorTree* GetDefaultObj();

};

// 0x58 (0x110 - 0xB8)
// Class AIModule.BrainComponent
class UBrainComponent : public UActorComponent
{
public:
	uint8                                        Pad_1CD2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlackboardComponent*                  BlackboardComp;                                    // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AAIController*                         AIOwner;                                           // 0xC8(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD4[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrainComponent* GetDefaultObj();

	class FString StopLogic();
	void StartLogic();
	void RestartLogic();
	void IsRunning(bool ReturnValue);
	void IsPaused(bool ReturnValue);
};

// 0x1A8 (0x2B8 - 0x110)
// Class AIModule.BehaviorTreeComponent
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	uint8                                        Pad_1CE3[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UBTNode*>                       NodeInstances;                                     // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE5[0x148];                                   // Fixing Size After Last Property  > TateDumper <
	class UBehaviorTree*                         DefaultBehaviorTreeAsset;                          // 0x288(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE6[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBehaviorTreeComponent* GetDefaultObj();

	void SetDynamicSubtree(struct FGameplayTag* InjectTag, class UBehaviorTree** BehaviorAsset);
	void GetTagCooldownEndTime(struct FGameplayTag* CooldownTag, double ReturnValue);
	void FindService(class FString* Name, class UBTNode* ReturnValue);
	void AddCooldownTagDuration(struct FGameplayTag* CooldownTag, float CooldownDuration, bool* bAddToExistingDuration);
};

// 0x28 (0x50 - 0x28)
// Class AIModule.BehaviorTreeManager
class UBehaviorTreeManager : public UObject
{
public:
	int32                                        MaxDebuggerSteps;                                  // 0x28(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CED[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBehaviorTreeTemplateInfo>     LoadedTemplates;                                   // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UBehaviorTreeComponent*>        ActiveComponents;                                  // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBehaviorTreeManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BehaviorTreeTypes
class UBehaviorTreeTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class UBehaviorTreeTypes* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BlackboardAssetProvider
class IBlackboardAssetProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBlackboardAssetProvider* GetDefaultObj();

	void GetBlackboardAsset(class UBlackboardData* ReturnValue);
};

// 0x108 (0x1C0 - 0xB8)
// Class AIModule.BlackboardComponent
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                       BrainComp;                                         // 0xB8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlackboardData*                       DefaultBlackboardAsset;                            // 0xC0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlackboardData*                       BlackboardAsset;                                   // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D53[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UBlackboardKeyType*>            KeyInstances;                                      // 0xF0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D55[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBlackboardComponent* GetDefaultObj();

	struct FVector SetValueAsVector();
	class FString SetValueAsString();
	struct FRotator SetValueAsRotator();
	class FName SetValueAsObject(class UObject* ObjectValue);
	class FName SetValueAsName();
	class FName SetValueAsInt(int32 IntValue);
	class FName SetValueAsFloat(float FloatValue);
	class FName SetValueAsEnum(uint8* EnumValue);
	class FName SetValueAsClass(class UClass** ClassValue);
	class FName SetValueAsBool(bool* BoolValue);
	class FName IsVectorValueSet(bool ReturnValue);
	class FName GetValueAsVector(const struct FVector& ReturnValue);
	class FName GetValueAsString(const class FString& ReturnValue);
	class FName GetValueAsRotator(const struct FRotator& ReturnValue);
	class FName GetValueAsObject(class UObject* ReturnValue);
	class FName GetValueAsName(class FName ReturnValue);
	class FName GetValueAsInt(int32 ReturnValue);
	class FName GetValueAsFloat(float ReturnValue);
	class FName GetValueAsEnum(uint8 ReturnValue);
	class FName GetValueAsClass(class UClass* ReturnValue);
	class FName GetValueAsBool(bool ReturnValue);
	class FName GetRotationFromEntry(struct FRotator* ResultRotation, bool ReturnValue);
	class FName GetLocationFromEntry(struct FVector* ResultLocation, bool ReturnValue);
	class FName ClearValueAsVector();
	class FName ClearValueAsRotator();
	class FName ClearValue();
};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardData
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                       Parent;                                            // 0x30(0x8)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FBlackboardEntry>              Keys;                                              // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHasSynchronizedKeys : 1;                          // Mask: 0x1, PropSize: 0x10x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D5B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBlackboardData* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.BlackboardKeyType
class UBlackboardKeyType : public UObject
{
public:
	uint8                                        Pad_1D5C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBlackboardKeyType* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Bool
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Bool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Class
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                BaseClass;                                         // 0x30(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Class* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardKeyType_Enum
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                 EnumType;                                          // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                EnumName;                                          // 0x38(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsEnumNameValid : 1;                              // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D5E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Enum* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Float
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Float* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Int
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Int* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Name
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Name* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class AIModule.BlackboardKeyType_NativeEnum
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	class FString                                EnumName;                                          // 0x30(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UEnum*                                 EnumType;                                          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_NativeEnum* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Object
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                BaseClass;                                         // 0x30(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Object* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Rotator
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Rotator* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class AIModule.BlackboardKeyType_String
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	class FString                                StringValue;                                       // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_String* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Vector
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Vector* GetDefaultObj();

};

// 0x38 (0x90 - 0x58)
// Class AIModule.BTCompositeNode
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>             Children;                                          // 0x58(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<class UBTService*>                    Services;                                          // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D6D[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bApplyDecoratorScope : 1;                          // Mask: 0x1, PropSize: 0x10x88(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D6E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTCompositeNode* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class AIModule.BTDecorator
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	uint8                                        BitPad_F2 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bInverseCondition : 1;                             // Mask: 0x80, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D72[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EBTFlowAbortMode                  FlowAbortMode;                                     // 0x64(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D73[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BTFunctionLibrary
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBTFunctionLibrary* GetDefaultObj();

	class UBTNode* StopUsingExternalEvent();
	class UBTNode* StartUsingExternalEvent(class AActor* OwningActor);
	struct FBlackboardKeySelector SetBlackboardValueAsVector(struct FVector* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsString(class FString* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsRotator(struct FRotator* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsObject(class UObject** Value);
	struct FBlackboardKeySelector SetBlackboardValueAsName(class FName* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsInt(int32* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsFloat(float* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsEnum(uint8* Value);
	struct FBlackboardKeySelector SetBlackboardValueAsClass(class UClass** Value);
	struct FBlackboardKeySelector SetBlackboardValueAsBool(bool* Value);
	class UBTNode* GetOwnersBlackboard(class UBlackboardComponent* ReturnValue);
	class UBTNode* GetOwnerComponent(class UBehaviorTreeComponent* ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsVector(const struct FVector& ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsString(const class FString& ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsRotator(const struct FRotator& ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsObject(class UObject* ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsName(class FName ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsInt(int32 ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsFloat(float ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsEnum(uint8 ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsClass(class UClass* ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsBool(bool ReturnValue);
	struct FBlackboardKeySelector GetBlackboardValueAsActor(class AActor* ReturnValue);
	struct FBlackboardKeySelector ClearBlackboardValueAsVector();
	struct FBlackboardKeySelector ClearBlackboardValue();
};

// 0x0 (0x90 - 0x90)
// Class AIModule.BTComposite_Selector
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static class UClass* StaticClass();
	static class UBTComposite_Selector* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class AIModule.BTComposite_Sequence
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static class UClass* StaticClass();
	static class UBTComposite_Sequence* GetDefaultObj();

};

// 0x8 (0x98 - 0x90)
// Class AIModule.BTComposite_SimpleParallel
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	enum class EBTParallelMode                   FinishMode;                                        // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E2F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTComposite_SimpleParallel* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class AIModule.BTDecorator_BlackboardBase
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x68(0x28)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_BlackboardBase* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class AIModule.BTDecorator_Blackboard
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int32                                        IntValue;                                          // 0x90(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        FloatValue;                                        // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                StringValue;                                       // 0x98(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FString                                CachedDescription;                                 // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        OperationType;                                     // 0xB8(0x1)(Edit, BlueprintVisible, ExportObject, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EBTBlackboardRestart              NotifyObserver;                                    // 0xB9(0x1)(Edit, BlueprintVisible, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E36[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_Blackboard* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class AIModule.BTDecorator_BlueprintBase
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                         AIOwner;                                           // 0x68(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ActorOwner;                                        // 0x70(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          ObservedKeyNames;                                  // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E78[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x98(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCheckConditionOnlyBlackBoardChanges : 1;          // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsObservingBB : 1;                                // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E7B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_BlueprintBase* GetDefaultObj();

	float ReceiveTickAI(class APawn** ControlledPawn);
	float ReceiveTick(class AActor** OwnerActor);
	class AAIController* ReceiveObserverDeactivatedAI(class APawn** ControlledPawn);
	void ReceiveObserverDeactivated(class AActor** OwnerActor);
	class AAIController* ReceiveObserverActivatedAI(class APawn** ControlledPawn);
	void ReceiveObserverActivated(class AActor** OwnerActor);
	class AAIController* ReceiveExecutionStartAI(class APawn** ControlledPawn);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	enum class EBTNodeResult ReceiveExecutionFinishAI(class APawn** ControlledPawn);
	enum class EBTNodeResult ReceiveExecutionFinish(class AActor** OwnerActor);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	class AAIController* PerformConditionCheckAI(class APawn** ControlledPawn, bool ReturnValue);
	void PerformConditionCheck(class AActor** OwnerActor, bool ReturnValue);
	void IsDecoratorObserverActive(bool ReturnValue);
	void IsDecoratorExecutionActive(bool ReturnValue);
	bool FinishConditionCheck();
};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                ActorToCheck;                                      // 0x68(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x90(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E83[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x98(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst)
	class FString                                CachedDescription;                                 // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_CheckGameplayTagsOnActor* GetDefaultObj();

};

// 0x58 (0xC0 - 0x68)
// Class AIModule.BTDecorator_CompareBBEntries
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	enum class EBlackBoardEntryComparison        Operator;                                          // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E89[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x70(0x28)(ConstParm, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x98(0x28)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_CompareBBEntries* GetDefaultObj();

};

// 0x0 (0xC0 - 0xC0)
// Class AIModule.BTDecorator_ConditionalLoop
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_ConditionalLoop* GetDefaultObj();

};

// 0x88 (0xF0 - 0x68)
// Class AIModule.BTDecorator_ConeCheck
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1E91[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                ConeDirection;                                     // 0x98(0x28)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Observed;                                          // 0xC0(0x28)(ConstParm, ExportObject, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E92[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_ConeCheck* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class AIModule.BTDecorator_Cooldown
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                        CoolDownTime;                                      // 0x68(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E99[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                CoolDownTimeKey;                                   // 0x70(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_Cooldown* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_DoesPathExist
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x68(0x28)(ConstParm, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x90(0x28)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSelf : 1;                                      // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_110 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E9E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPathExistanceQueryType           PathQueryType;                                     // 0xBC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0xC0(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_DoesPathExist* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class AIModule.BTDecorator_ForceSuccess
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_ForceSuccess* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class AIModule.BTDecorator_IsAtLocation
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x90(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderFloatValue             ParametrizedAcceptableRadius;                      // 0x98(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFAIDistanceType                  GeometricDistanceType;                             // 0xD0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseParametrizedRadius : 1;                        // Mask: 0x1, PropSize: 0x10xD4(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseNavAgentGoalLocation : 1;                      // Mask: 0x2, PropSize: 0x10xD4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bPathFindingBasedTest : 1;                         // Mask: 0x4, PropSize: 0x10xD4(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA9[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_IsAtLocation* GetDefaultObj();

};

// 0x8 (0x98 - 0x90)
// Class AIModule.BTDecorator_IsBBEntryOfClass
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                TestClass;                                         // 0x90(0x8)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_IsBBEntryOfClass* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_KeepInCone
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1EAD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Observed;                                          // 0x98(0x28)(ConstParm, ExportObject, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSelfAsOrigin : 1;                              // Mask: 0x1, PropSize: 0x10xC0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSelfAsObserved : 1;                            // Mask: 0x2, PropSize: 0x10xC0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EAE[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_KeepInCone* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_Loop
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int32                                        NumLoops;                                          // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bInfiniteLoop;                                     // 0x6C(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InfiniteLoopTimeoutTime;                           // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_Loop* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class AIModule.BTDecorator_ReachedMoveGoal
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_ReachedMoveGoal* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_SetTagCooldown
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CooldownDuration;                                  // 0x70(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB7[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_SetTagCooldown* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_TagCooldown
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CooldownDuration;                                  // 0x70(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bActivatesCooldown;                                // 0x75(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB8[0x2];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_TagCooldown* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class AIModule.BTDecorator_TimeLimit
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                        TimeLimit;                                         // 0x68(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EBA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                TimeLimitKey;                                      // 0x70(0x28)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_TimeLimit* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlueprintBase
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                         AIOwner;                                           // 0x70(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ActorOwner;                                        // 0x78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EDC[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x90(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShowEventDetails : 1;                             // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EDD[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService_BlueprintBase* GetDefaultObj();

	class UBehaviorTreeComponent* ResetInterval();
	float ReceiveTickAI(class APawn** ControlledPawn);
	float ReceiveTick(class AActor** OwnerActor);
	class AAIController* ReceiveSearchStartAI(class APawn** ControlledPawn);
	void ReceiveSearchStart(class AActor** OwnerActor);
	class AAIController* ReceiveDeactivationAI(class APawn** ControlledPawn);
	void ReceiveDeactivation(class AActor** OwnerActor);
	class AAIController* ReceiveActivationAI(class APawn** ControlledPawn);
	void ReceiveActivation(class AActor** OwnerActor);
	void IsServiceActive(bool ReturnValue);
};

// 0x8 (0xA0 - 0x98)
// Class AIModule.BTService_DefaultFocus
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	uint8                                        FocusPriority;                                     // 0x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService_DefaultFocus* GetDefaultObj();

};

// 0x60 (0xF8 - 0x98)
// Class AIModule.BTService_RunEQS
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0x98(0x48)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateBBOnFail;                                   // 0xE0(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE6[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService_RunEQS* GetDefaultObj();

};

// 0x38 (0xA8 - 0x70)
// Class AIModule.BTTask_BlueprintBase
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                         AIOwner;                                           // 0x70(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ActorOwner;                                        // 0x78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FIntervalCountdown                    TickInterval;                                      // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1F08[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10xA0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F09[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_BlueprintBase* GetDefaultObj();

	void SetFinishOnMessageWithId(class FName MessageName, int32 RequestID);
	void SetFinishOnMessage(class FName MessageName);
	float ReceiveTickAI(class APawn** ControlledPawn);
	float ReceiveTick(class AActor** OwnerActor);
	class AAIController* ReceiveExecuteAI(class APawn** ControlledPawn);
	void ReceiveExecute(class AActor** OwnerActor);
	class AAIController* ReceiveAbortAI(class APawn** ControlledPawn);
	void ReceiveAbort(class AActor** OwnerActor);
	void IsTaskExecuting(bool ReturnValue);
	void IsTaskAborting(bool ReturnValue);
	bool FinishExecute();
	void FinishAbort();
};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_FinishWithResult
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	enum class EBTNodeResult                     Result;                                            // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F0B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_FinishWithResult* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_GameplayTaskBase
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	uint8                                        bWaitForGameplayTask : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F0E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_GameplayTaskBase* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_MakeNoise
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                        Loudnes;                                           // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F15[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_MakeNoise* GetDefaultObj();

};

// 0x40 (0xD8 - 0x98)
// Class AIModule.BTTask_MoveTo
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x98(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F17[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0xA0(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ObservedBlackboardValueTolerance;                  // 0xA8(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bObserveBlackboardValue : 1;                       // Mask: 0x1, PropSize: 0x10xAC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x2, PropSize: 0x10xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x4, PropSize: 0x10xAC(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bTrackMovingGoal : 1;                              // Mask: 0x8, PropSize: 0x10xAC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x10, PropSize: 0x10xAC(0x1)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReachTestIncludesAgentRadius : 1;                 // Mask: 0x20, PropSize: 0x10xAC(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReachTestIncludesGoalRadius : 1;                  // Mask: 0x40, PropSize: 0x10xAC(0x1)(BlueprintVisible, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bStopOnOverlap : 1;                                // Mask: 0x80, PropSize: 0x10xAC(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bStopOnOverlapNeedsUpdate : 1;                     // Mask: 0x1, PropSize: 0x10xAD(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_112 : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bAutoStopOnAbort : 1;                              // Mask: 0x4, PropSize: 0x10xAD(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_113 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1F1C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                AcceptableRadiusKey;                               // 0xB0(0x28)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_MoveTo* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class AIModule.BTTask_MoveDirectlyToward
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	uint8                                        bDisablePathUpdateOnGoalLocationChange : 1;        // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        bProjectVectorGoalToNavigation : 1;                // Mask: 0x2, PropSize: 0x10xD8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUpdatedDeprecatedProperties : 1;                  // Mask: 0x4, PropSize: 0x10xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F21[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_MoveDirectlyToward* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AIModule.BTTask_PawnActionBase
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static class UClass* StaticClass();
	static class UBTTask_PawnActionBase* GetDefaultObj();

};

// 0x40 (0xB0 - 0x70)
// Class AIModule.BTTask_PlayAnimation
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                       AnimationToPlay;                                   // 0x70(0x8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x78(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        bNonBlocking : 1;                                  // Mask: 0x2, PropSize: 0x10x78(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_114 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1F25[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBehaviorTreeComponent*                MyOwnerComp;                                       // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USkeletalMeshComponent*                CachedSkelMesh;                                    // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F26[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_PlayAnimation* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PlaySound
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                             SoundToPlay;                                       // 0x70(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_PlaySound* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PushPawnAction
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                           Action;                                            // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_PushPawnAction* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class AIModule.BTTask_RunBehavior
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x70(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                ControllerProperty;                                // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                CurrentControllerClass;                            // 0x88(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_RunBehavior* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class AIModule.BTTask_RunBehaviorDynamic
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UBehaviorTree*                         DefaultBehaviorAsset;                              // 0x78(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x80(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_RunBehaviorDynamic* GetDefaultObj();

};

// 0xC0 (0x158 - 0x98)
// Class AIModule.BTTask_RunEQSQuery
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x98(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0xB0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F36[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                EQSQueryBlackboardKey;                             // 0xC8(0x28)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseBBKey;                                         // 0xF0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F38[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0xF8(0x48)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateBBOnFail;                                   // 0x140(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F39[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_RunEQSQuery* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class AIModule.BTTask_SetTagCooldown
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F42[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CooldownDuration;                                  // 0x7C(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_SetTagCooldown* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_Wait
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                        WaitTime;                                          // 0x70(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomDeviation;                                   // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_Wait* GetDefaultObj();

};

// 0x28 (0xA0 - 0x78)
// Class AIModule.BTTask_WaitBlackboardTime
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x78(0x28)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_WaitBlackboardTime* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIBlueprintHelperLibrary
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAIBlueprintHelperLibrary* GetDefaultObj();

	bool UnlockAIResourcesWithAnimation();
	class UClass* SpawnAIFromClass(class UBehaviorTree** BehaviorTree, struct FVector* Location, struct FRotator* Rotation, bool bNoCollisionFail, class AActor** Owner, class APawn* ReturnValue);
	struct FVector SimpleMoveToLocation(class AController** Controller);
	class AActor* SimpleMoveToActor(class AController** Controller);
	bool SendAIMessage(class FName* Message);
	bool LockAIResourcesWithAnimation();
	void IsValidAIRotation(struct FRotator* Rotation, bool ReturnValue);
	void IsValidAILocation(struct FVector* Location, bool ReturnValue);
	struct FVector IsValidAIDirection(bool ReturnValue);
	void GetNextNavLinkIndex(class AController** Controller, int32 ReturnValue);
	void GetCurrentPathPoints(class AController** Controller, const TArray<struct FVector>& ReturnValue);
	void GetCurrentPathIndex(class AController** Controller, int32 ReturnValue);
	void GetCurrentPath(class AController** Controller, class UNavigationPath* ReturnValue);
	class AActor* GetBlackboard(class UBlackboardComponent* ReturnValue);
	class AActor* GetAIController(class AAIController* ReturnValue);
	bool CreateMoveToProxyObject(class APawn* Pawn, struct FVector* Destination, class UAIAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIDataProvider
class UAIDataProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAIDataProvider* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AIModule.AIDataProvider_QueryParams
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	class FName                                  ParamName;                                         // 0x28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatValue;                                        // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        IntValue;                                          // 0x34(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         BoolValue;                                         // 0x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FBF[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIDataProvider_QueryParams* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class AIModule.AIDataProvider_Random
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                        Min;                                               // 0x40(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        bInteger : 1;                                      // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FC4[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIDataProvider_Random* GetDefaultObj();

};

// 0x0 (0x600 - 0x600)
// Class AIModule.DetourCrowdAIController
class ADetourCrowdAIController : public AAIController
{
public:

	static class UClass* StaticClass();
	static class ADetourCrowdAIController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext
class UEnvQueryContext : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryContext_BlueprintBase
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	uint8                                        Pad_1FD6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryContext_BlueprintBase* GetDefaultObj();

	struct FVector ProvideSingleLocation();
	class AActor* ProvideSingleActor();
	TArray<struct FVector> ProvideLocationsSet();
	TArray<class AActor*> ProvideActorsSet();
};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext_Item
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Item* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext_Querier
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Querier* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class AIModule.EnvQuery
class UEnvQuery : public UDataAsset
{
public:
	class FName                                  QueryName;                                         // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryOption*>               Options;                                           // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryDebugHelpers
class UEnvQueryDebugHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryDebugHelpers* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryNode
class UEnvQueryNode : public UObject
{
public:
	int32                                        VerNum;                                            // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FE0[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryNode* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AIModule.EnvQueryGenerator
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	class FString                                OptionName;                                        // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                ItemType;                                          // 0x40(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoSortTests : 1;                                // Mask: 0x1, PropSize: 0x10x48(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FE2[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AIModule.EnvQueryInstanceBlueprintWrapper
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	uint8                                        Pad_1FFB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        QueryID;                                           // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FFC[0x24];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ItemType;                                          // 0x58(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OptionIndex;                                       // 0x60(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FFD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnQueryFinishedEvent;                              // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryInstanceBlueprintWrapper* GetDefaultObj();

	void SetNamedParam(class FName* ParamName, float* Value);
	void GetResultsAsLocations(const TArray<struct FVector>& ReturnValue);
	void GetResultsAsActors(const TArray<class AActor*>& ReturnValue);
	void GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations, bool ReturnValue);
	void GetQueryResultsAsActors(TArray<class AActor*>* ResultActors, bool ReturnValue);
	int32 GetItemScore(float ReturnValue);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper** QueryInstance, enum class EEnvQueryStatus QueryStatus);
};

// 0x120 (0x158 - 0x38)
// Class AIModule.EnvQueryManager
class UEnvQueryManager : public UAISubsystem
{
public:
	uint8                                        Pad_2001[0x70];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEnvQueryInstanceCache>        InstanceCache;                                     // 0xA8(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryContext*>              LocalContexts;                                     // 0xB8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;                                // 0xC8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2002[0x54];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        MaxAllowedTestingTime;                             // 0x12C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bTestQueriesUsingBreadth;                          // 0x130(0x1)(BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2003[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        QueryCountWarningThreshold;                        // 0x134(0x4)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	double                                       QueryCountWarningInterval;                         // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	double                                       ExecutionTimeWarningSeconds;                       // 0x140(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x148(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       GenerationTimeWarningSeconds;                      // 0x150(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryManager* GetDefaultObj();

	class UClass* RunEQSQuery(class UEnvQuery** QueryTemplate, class UObject* Querier, enum class EEnvQueryRunMode* RunMode, class UEnvQueryInstanceBlueprintWrapper* ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class AIModule.EnvQueryOption
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                    Generator;                                         // 0x28(0x8)(Edit, ConstParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryTest*>                 Tests;                                             // 0x30(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryOption* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class AIModule.EnvQueryTest
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int32                                        TestOrder;                                         // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestPurpose                   TestPurpose;                                       // 0x34(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_200A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TestComment;                                       // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestFilterOperator            MultipleContextFilterOp;                           // 0x48(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestScoreOperator             MultipleContextScoreOp;                            // 0x49(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestFilterType                FilterType;                                        // 0x4A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_200B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderBoolValue              BoolValue;                                         // 0x50(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FAIDataProviderFloatValue             FloatValueMin;                                     // 0x88(0x38)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             FloatValueMax;                                     // 0xC0(0x38)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_200C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EEnvTestScoreEquation             ScoringEquation;                                   // 0xF9(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvQueryTestClamping             ClampMinType;                                      // 0xFA(0x1)(OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvQueryTestClamping             ClampMaxType;                                      // 0xFB(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEQSNormalizationType             NormalizationType;                                 // 0xFC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_200D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderFloatValue             ScoreClampMin;                                     // 0x100(0x38)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ScoreClampMax;                                     // 0x138(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ScoringFactor;                                     // 0x170(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ReferenceValue;                                    // 0x1A8(0x38)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bDefineReferenceValue;                             // 0x1E0(0x1)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2010[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bWorkOnFloatValues : 1;                            // Mask: 0x1, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2012[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryTest* GetDefaultObj();

};

// 0x30 (0x720 - 0x6F0)
// Class AIModule.EQSRenderingComponent
class UEQSRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_2013[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEQSRenderingComponent* GetDefaultObj();

};

// 0xA0 (0x970 - 0x8D0)
// Class AIModule.EQSTestingPawn
class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x8D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0x8D8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x8E8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        TimeLimitPerStep;                                  // 0x8F8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        StepToDebugDraw;                                   // 0x8FC(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvQueryHightlightMode           HighlightMode;                                     // 0x900(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2016[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bDrawLabels : 1;                                   // Mask: 0x1, PropSize: 0x10x904(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawFailedItems : 1;                              // Mask: 0x2, PropSize: 0x10x904(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReRunQueryOnlyOnFinishedMove : 1;                 // Mask: 0x4, PropSize: 0x10x904(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x8, PropSize: 0x10x904(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bTickDuringGame : 1;                               // Mask: 0x10, PropSize: 0x10x904(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_126 : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2017[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EEnvQueryRunMode                  QueryingMode;                                      // 0x908(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2018[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNavAgentProperties                   NavAgentProperties;                                // 0x910(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_2019[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AEQSTestingPawn* GetDefaultObj();

};

// 0x80 (0xD0 - 0x50)
// Class AIModule.EnvQueryGenerator_ActorsOfClass
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                SearchedActorClass;                                // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderBoolValue              GenerateOnlyActorsInRadius;                        // 0x58(0x38)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x90(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                SearchCenter;                                      // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_ActorsOfClass* GetDefaultObj();

};

// 0x38 (0x88 - 0x50)
// Class AIModule.EnvQueryGenerator_BlueprintBase
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	class FText                                  GeneratorsActionDescription;                       // 0x50(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Context;                                           // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UClass*                                GeneratedItemType;                                 // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2023[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_BlueprintBase* GetDefaultObj();

	void GetQuerier(class UObject* ReturnValue);
	TArray<class AActor*> DoItemGenerationFromActors();
	TArray<struct FVector> DoItemGeneration();
	struct FVector AddGeneratedVector();
	class AActor* AddGeneratedActor();
};

// 0x20 (0x70 - 0x50)
// Class AIModule.EnvQueryGenerator_Composite
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>            Generators;                                        // 0x50(0x10)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAllowDifferentItemTypes : 1;                      // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bHasMatchingItemType : 1;                          // Mask: 0x2, PropSize: 0x10x60(0x1)(DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_128 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2025[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ForcedItemType;                                    // 0x68(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Composite* GetDefaultObj();

};

// 0x40 (0x90 - 0x50)
// Class AIModule.EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x50(0x40)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_ProjectedPoints* GetDefaultObj();

};

// 0xF0 (0x180 - 0x90)
// Class AIModule.EnvQueryGenerator_Cone
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             AlignedPointsDistance;                             // 0x90(0x38)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ConeDegrees;                                       // 0xC8(0x38)(EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             AngleStep;                                         // 0x100(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             Range;                                             // 0x138(0x38)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                CenterActor;                                       // 0x170(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIncludeContextLocation : 1;                       // Mask: 0x1, PropSize: 0x10x178(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2027[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Cone* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class AIModule.EnvQueryGenerator_CurrentLocation
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                QueryContext;                                      // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_CurrentLocation* GetDefaultObj();

};

// 0x150 (0x1E0 - 0x90)
// Class AIModule.EnvQueryGenerator_Donut
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x90(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0xC8(0x38)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FAIDataProviderIntValue               NumberOfRings;                                     // 0x100(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderIntValue               PointsPerRing;                                     // 0x138(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEnvDirection                         ArcDirection;                                      // 0x170(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x190(0x38)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseSpiralPattern;                                 // 0x1C8(0x1)(Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_202A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Center;                                            // 0x1D0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x1D8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_202C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Donut* GetDefaultObj();

};

// 0x1A0 (0x230 - 0x90)
// Class AIModule.EnvQueryGenerator_OnCircle
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             CircleRadius;                                      // 0x90(0x38)(Edit, ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderIntValue               NumberOfPoints;                                    // 0x100(0x38)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPointOnCircleSpacingMethod       PointOnCircleSpacingMethod;                        // 0x138(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_202F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEnvDirection                         ArcDirection;                                      // 0x140(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x160(0x38)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AngleRadians;                                      // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2030[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CircleCenter;                                      // 0x1A0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIgnoreAnyContextActorsWhenGeneratingCircle;       // 0x1A8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2031[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderFloatValue             CircleCenterZOffset;                               // 0x1B0(0x38)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEnvTraceData                         TraceData;                                         // 0x1E8(0x40)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x228(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2034[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_OnCircle* GetDefaultObj();

};

// 0x78 (0x108 - 0x90)
// Class AIModule.EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             GridSize;                                          // 0x90(0x38)(ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                GenerateAround;                                    // 0x100(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_SimpleGrid* GetDefaultObj();

};

// 0x78 (0x180 - 0x108)
// Class AIModule.EnvQueryGenerator_PathingGrid
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue              PathToItem;                                        // 0x108(0x38)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                NavigationFilter;                                  // 0x140(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x148(0x38)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_PathingGrid* GetDefaultObj();

};

// 0x58 (0xA8 - 0x50)
// Class AIModule.EnvQueryGenerator_PerceivedActors
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
public:
	class UClass*                                AllowedActorClass;                                 // 0x50(0x8)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x58(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ListenerContext;                                   // 0x90(0x8)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                SenseToUse;                                        // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIncludeKnownActors;                               // 0xA0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_203B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_PerceivedActors* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryItemType
class UEnvQueryItemType : public UObject
{
public:
	uint8                                        Pad_203C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryItemType* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_VectorBase
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_VectorBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_ActorBase
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_ActorBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Actor
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Actor* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Direction
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Direction* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Point
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Point* GetDefaultObj();

};

// 0x10 (0x208 - 0x1F8)
// Class AIModule.EnvQueryTest_Distance
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	enum class EEnvTestDistance                  TestMode;                                          // 0x1F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2045[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DistanceTo;                                        // 0x200(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Distance* GetDefaultObj();

};

// 0x48 (0x240 - 0x1F8)
// Class AIModule.EnvQueryTest_Dot
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                         LineA;                                             // 0x1F8(0x20)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEnvDirection                         LineB;                                             // 0x218(0x20)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestDot                       TestMode;                                          // 0x238(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteValue;                                    // 0x239(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_204B[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryTest_Dot* GetDefaultObj();

};

// 0x70 (0x268 - 0x1F8)
// Class AIModule.EnvQueryTest_GameplayTags
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x1F8(0x48)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRejectIncompatibleItems;                          // 0x240(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdatedToUseQuery;                                // 0x241(0x1)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x242(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2052[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x248(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UEnvQueryTest_GameplayTags* GetDefaultObj();

};

// 0x30 (0x228 - 0x1F8)
// Class AIModule.EnvQueryTest_Overlap
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                       OverlapData;                                       // 0x1F8(0x30)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Overlap* GetDefaultObj();

};

// 0x88 (0x280 - 0x1F8)
// Class AIModule.EnvQueryTest_Pathfinding
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	enum class EEnvTestPathfinding               TestMode;                                          // 0x1F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2055[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Context;                                           // 0x200(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	struct FAIDataProviderBoolValue              PathFromContext;                                   // 0x208(0x38)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderBoolValue              SkipUnreachable;                                   // 0x240(0x38)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x278(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Pathfinding* GetDefaultObj();

};

// 0x38 (0x2B8 - 0x280)
// Class AIModule.EnvQueryTest_PathfindingBatch
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x280(0x38)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_PathfindingBatch* GetDefaultObj();

};

// 0x40 (0x238 - 0x1F8)
// Class AIModule.EnvQueryTest_Project
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x1F8(0x40)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Project* GetDefaultObj();

};

// 0x0 (0x1F8 - 0x1F8)
// Class AIModule.EnvQueryTest_Random
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_Random* GetDefaultObj();

};

// 0xF0 (0x2E8 - 0x1F8)
// Class AIModule.EnvQueryTest_Trace
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         TraceData;                                         // 0x1F8(0x40)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderBoolValue              TraceFromContext;                                  // 0x238(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ItemHeightOffset;                                  // 0x270(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ContextHeightOffset;                               // 0x2A8(0x38)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Context;                                           // 0x2E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Trace* GetDefaultObj();

};

// 0x18 (0x210 - 0x1F8)
// Class AIModule.EnvQueryTest_Volume
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	class UClass*                                VolumeContext;                                     // 0x1F8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                VolumeClass;                                       // 0x200(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDoComplexVolumeTest : 1;                          // Mask: 0x1, PropSize: 0x10x208(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_205C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryTest_Volume* GetDefaultObj();

};

// 0x0 (0x600 - 0x600)
// Class AIModule.GridPathAIController
class AGridPathAIController : public AAIController
{
public:

	static class UClass* StaticClass();
	static class AGridPathAIController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIHotSpotManager
class UAIHotSpotManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAIHotSpotManager* GetDefaultObj();

};

// 0x50 (0x330 - 0x2E0)
// Class AIModule.CrowdFollowingComponent
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	uint8                                        Pad_2065[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CrowdAgentMoveDirection;                           // 0x2F8(0x18)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2066[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCrowdFollowingComponent* GetDefaultObj();

	void SuspendCrowdSteering(bool* bSuspend);
};

// 0xC8 (0xF0 - 0x28)
// Class AIModule.CrowdManager
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                       MyNavData;                                         // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FCrowdAvoidanceConfig>         AvoidanceConfig;                                   // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;                                  // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAgents;                                         // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxAgentRadius;                                    // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAvoidedAgents;                                  // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAvoidedWalls;                                   // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NavmeshCheckInterval;                              // 0x60(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PathOptimizationInterval;                          // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SeparationDirClamp;                                // 0x68(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PathOffsetRadiusMultiplier;                        // 0x6C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_12B : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bResolveCollisions : 1;                            // Mask: 0x10, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2073[0x7F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCrowdManager* GetDefaultObj();

};

// 0x30 (0x310 - 0x2E0)
// Class AIModule.GridPathFollowingComponent
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                  GridManager;                                       // 0x2E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2074[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGridPathFollowingComponent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.NavFilter_AIControllerDefault
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UNavFilter_AIControllerDefault* GetDefaultObj();

};

// 0x50 (0x518 - 0x4C8)
// Class AIModule.NavLinkProxy
class ANavLinkProxy : public AActor
{
public:
	uint8                                        Pad_2082[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNavigationLink>               PointLinks;                                        // 0x4D8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<struct FNavigationSegmentLink>        SegmentLinks;                                      // 0x4E8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	class UNavLinkCustomComponent*               SmartLinkComp;                                     // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSmartLinkIsRelevant;                              // 0x500(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2083[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSmartLinkReached;                                // 0x508(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ANavLinkProxy* GetDefaultObj();

	bool SetSmartLinkEnabled();
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, struct FVector* Destination);
	void IsSmartLinkEnabled(bool ReturnValue);
	void HasMovingAgents(bool ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class AIModule.NavLocalGridManager
class UNavLocalGridManager : public UObject
{
public:
	uint8                                        Pad_20CA[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavLocalGridManager* GetDefaultObj();

	class UObject* SetLocalNavigationGridDensity(float* CellSize, bool ReturnValue);
	class UObject* RemoveLocalNavigationGrid(int32 GridId, bool bRebuildGrids);
	TArray<struct FVector> FindLocalNavigationGridPath(bool ReturnValue);
	float AddLocalNavigationGridForPoints(const TArray<struct FVector>& Locations, int32 Radius2D, bool bRebuildGrids, int32 ReturnValue);
	float AddLocalNavigationGridForPoint(struct FVector* Location, int32 Radius2D, bool bRebuildGrids, int32 ReturnValue);
	float AddLocalNavigationGridForCapsule(struct FVector* Location, float CapsuleRadius, int32 Radius2D, bool bRebuildGrids, int32 ReturnValue);
	float AddLocalNavigationGridForBox(struct FVector* Location, struct FRotator* Rotation, int32 Radius2D, bool bRebuildGrids, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.PathFollowingManager
class UPathFollowingManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPathFollowingManager* GetDefaultObj();

};

// 0xF0 (0x1A8 - 0xB8)
// Class AIModule.AIPerceptionComponent
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                SensesConfig;                                      // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                DominantSense;                                     // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20E3[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class AAIController*                         AIOwner;                                           // 0xE0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20E4[0x80];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPerceptionUpdated;                               // 0x168(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionForgotten;                       // 0x178(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionUpdated;                         // 0x188(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionInfoUpdated;                     // 0x198(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAIPerceptionComponent* GetDefaultObj();

	bool SetSenseEnabled(class UClass* SenseClass);
	void RequestStimuliListenerUpdate();
	enum class EEndPlayReason OnOwnerEndPlay(class AActor** Actor);
	TArray<class AActor*> GetPerceivedHostileActorsBySense(class UClass* SenseToUse);
	TArray<class AActor*> GetPerceivedHostileActors();
	TArray<class AActor*> GetPerceivedActors(class UClass* SenseToUse);
	TArray<class AActor*> GetKnownPerceivedActors(class UClass* SenseToUse);
	TArray<class AActor*> GetCurrentlyPerceivedActors(class UClass* SenseToUse);
	struct FActorPerceptionBlueprintInfo GetActorsPerception(class AActor** Actor, bool ReturnValue);
	void ForgetAll();
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIPerceptionListenerInterface
class IAIPerceptionListenerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAIPerceptionListenerInterface* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class AIModule.AIPerceptionStimuliSourceComponent
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	uint8                                        bAutoRegisterAsSource : 1;                         // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_136 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_20F5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        RegisterAsSourceForSenses;                         // 0xC0(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAIPerceptionStimuliSourceComponent* GetDefaultObj();

	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};

// 0x100 (0x138 - 0x38)
// Class AIModule.AIPerceptionSystem
class UAIPerceptionSystem : public UAISubsystem
{
public:
	uint8                                        Pad_211E[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UAISense*>                      Senses;                                            // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PerceptionAgingRate;                               // 0x98(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_211F[0x9C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIPerceptionSystem* GetDefaultObj();

	class UObject* ReportPerceptionEvent(class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	class AActor* RegisterPerceptionStimuliSource(class UClass* Sense, bool ReturnValue);
	enum class EEndPlayReason OnPerceptionStimuliSourceEndPlay(class AActor** Actor);
	class UObject* GetSenseClassForStimulus(struct FAIStimulus* Stimulus, class UClass* ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class AIModule.AISense
class UAISense : public UObject
{
public:
	float                                        DefaultExpirationAge;                              // 0x28(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAISenseNotifyType                NotifyType;                                        // 0x2C(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2129[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bWantsNewPawnNotification : 1;                     // Mask: 0x1, PropSize: 0x10x30(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAutoRegisterAllPawnsAsSources : 1;                // Mask: 0x2, PropSize: 0x10x30(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_137 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_212B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAIPerceptionSystem*                   PerceptionSystemInstance;                          // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_212C[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISense* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Damage
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISenseConfig_Damage* GetDefaultObj();

};

// 0x28 (0xA8 - 0x80)
// Class AIModule.AISense_Blueprint
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                ListenerDataType;                                  // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UAIPerceptionComponent*>        ListenerContainer;                                 // 0x88(0x10)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UAISenseEvent*>                 UnprocessedEvents;                                 // 0x98(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Blueprint* GetDefaultObj();

	void OnUpdate(TArray<class UAISenseEvent*>* EventsToProcess, float ReturnValue);
	class UAIPerceptionComponent* OnListenerUpdated(class AActor** ActorListener);
	class UAIPerceptionComponent* OnListenerUnregistered(class AActor** ActorListener);
	class UAIPerceptionComponent* OnListenerRegistered(class AActor** ActorListener);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Damage
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                RegisteredEvents;                                  // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Damage* GetDefaultObj();

	class FName ReportDamageEvent(class AActor** Instigator, struct FVector* EventLocation);
};

// 0x68 (0xE8 - 0x80)
// Class AIModule.AISense_Hearing
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                 NoiseEvents;                                       // 0x80(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SpeedOfSoundSq;                                    // 0x90(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_216E[0x54];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISense_Hearing* GetDefaultObj();

	class FName ReportNoiseEvent(float* Loudness, class AActor** Instigator, float MaxRange);
};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Prediction
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>            RegisteredEvents;                                  // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Prediction* GetDefaultObj();

	class AActor* RequestPawnPredictionEvent(float* PredictionTime);
	class AActor* RequestControllerPredictionEvent(float* PredictionTime);
};

// 0x130 (0x1B0 - 0x80)
// Class AIModule.AISense_Sight
class UAISense_Sight : public UAISense
{
public:
	uint8                                        Pad_217C[0xD8];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxTracesPerTick;                                  // 0x158(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAsyncTracesPerTick;                             // 0x15C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MinQueriesPerTimeSliceCheck;                       // 0x160(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_217E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxTimeSlicePerTick;                               // 0x168(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        HighImportanceQueryDistanceThreshold;              // 0x170(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_217F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxQueryImportance;                                // 0x178(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SightLimitQueryImportance;                         // 0x17C(0x4)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PendingQueriesBudgetReductionRatio;                // 0x180(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseAsynchronousTraceForDefaultSightQueries;       // 0x184(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2180[0x2B];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISense_Sight* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Team
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>          RegisteredEvents;                                  // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Team* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Touch
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                 RegisteredEvents;                                  // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Touch* GetDefaultObj();

	class AActor* ReportTouchEvent(class AActor** OtherActor, struct FVector* Location);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AISightTargetInterface
class IAISightTargetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAISightTargetInterface* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class AIModule.PawnSensingComponent
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                        HearingThreshold;                                  // 0xB8(0x4)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        LOSHearingThreshold;                               // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        SightRadius;                                       // 0xC0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        SensingInterval;                                   // 0xC4(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        HearingMaxSoundAge;                                // 0xC8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableSensingUpdates : 1;                         // Mask: 0x1, PropSize: 0x10xCC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlySensePlayers : 1;                             // Mask: 0x2, PropSize: 0x10xCC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSeePawns : 1;                                     // Mask: 0x4, PropSize: 0x10xCC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        bHearNoises : 1;                                   // Mask: 0x8, PropSize: 0x10xCC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_13F : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_21A2[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSeePawn;                                         // 0xD8(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHearNoise;                                       // 0xE8(0x10)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        PeripheralVisionAngle;                             // 0xF8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        PeripheralVisionCosine;                            // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPawnSensingComponent* GetDefaultObj();

	bool SetSensingUpdatesEnabled();
	void SetSensingInterval(float* NewSensingInterval);
	void SetPeripheralVisionAngle(float* NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	float HearNoiseDelegate__DelegateSignature(class APawn** Instigator, struct FVector* Location);
	void GetPeripheralVisionCosine(float ReturnValue);
	void GetPeripheralVisionAngle(float ReturnValue);
};

// 0x8 (0x70 - 0x68)
// Class AIModule.AITask
class UAITask : public UGameplayTask
{
public:
	class AAIController*                         OwnerController;                                   // 0x68(0x8)(ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAITask* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AIModule.AITask_LockLogic
class UAITask_LockLogic : public UAITask
{
public:

	static class UClass* StaticClass();
	static class UAITask_LockLogic* GetDefaultObj();

};

// 0xB0 (0x120 - 0x70)
// Class AIModule.AITask_MoveTo
class UAITask_MoveTo : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnRequestFailed;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoveFinished;                                    // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIMoveRequest                        MoveRequest;                                       // 0x90(0x50)(Net, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21B1[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAITask_MoveTo* GetDefaultObj();

	bool AIMoveTo(class AAIController** Controller, const struct FVector& GoalLocation, class AActor* GoalActor, bool* bUseContinuousGoalTracking, enum class EAIOptionFlag* ProjectGoalOnNavigation, class UAITask_MoveTo* ReturnValue);
};

// 0x78 (0xE8 - 0x70)
// Class AIModule.AITask_RunEQS
class UAITask_RunEQS : public UAITask
{
public:
	uint8                                        Pad_21B4[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAITask_RunEQS* GetDefaultObj();

	void RunEQS(class AAIController** Controller, class UEnvQuery** QueryTemplate, class UAITask_RunEQS* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.VisualLoggerExtension
class UVisualLoggerExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVisualLoggerExtension* GetDefaultObj();

};

}


