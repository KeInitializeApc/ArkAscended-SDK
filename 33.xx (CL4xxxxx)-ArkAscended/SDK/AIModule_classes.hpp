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
	uint8                                        Pad_27A1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                NodeName;                                          // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UBehaviorTree*                         TreeAsset;                                         // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UBTCompositeNode*                      ParentNode;                                        // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27A2[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTNode* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class AIModule.BTAuxiliaryNode
class UBTAuxiliaryNode : public UBTNode
{
public:
	uint8                                        Pad_27A3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTAuxiliaryNode* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class AIModule.BTService
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                        Interval;                                          // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RandomDeviation;                                   // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bCallTickOnSearchStart : 1;                        // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bRestartTimerOnEachActivation : 1;                 // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27A6[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlackboardBase
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTService_BlackboardBase* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class AIModule.BTTaskNode
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                    Services;                                          // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIgnoreRestartSelf : 1;                            // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27A8[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTaskNode* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTTask_BlackboardBase
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_BlackboardBase* GetDefaultObj();

};

// 0x38 (0xD0 - 0x98)
// Class AIModule.BTTask_RotateToFaceBBEntry
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                        Precision;                                         // 0x98(0x4)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_27AA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                PrecisionKey;                                      // 0xA0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bForceUpdatePrecision : 1;                         // Mask: 0x1, PropSize: 0x10xC8(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bZeroPrecisionSucceedsInstantly : 1;               // Mask: 0x2, PropSize: 0x10xC8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIgnorePitch : 1;                                  // Mask: 0x4, PropSize: 0x10xC8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27AB[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_RotateToFaceBBEntry* GetDefaultObj();

};

// 0x90 (0x600 - 0x570)
// Class AIModule.AIController
class AAIController : public APrimalController
{
public:
	uint8                                        Pad_27F6[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bStartAILogicOnPossess : 1;                        // Mask: 0x1, PropSize: 0x10x5A8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bStopAILogicOnUnposses : 1;                        // Mask: 0x2, PropSize: 0x10x5A8(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bLOSflag : 1;                                      // Mask: 0x4, PropSize: 0x10x5A8(0x1)(EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bSkipExtraLOSChecks : 1;                           // Mask: 0x8, PropSize: 0x10x5A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x10, PropSize: 0x10x5A8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bWantsPlayerState : 1;                             // Mask: 0x20, PropSize: 0x10x5A8(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bLastRequestedMoveToLocationWasPlayerCommand : 1;  // Mask: 0x40, PropSize: 0x10x5A8(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bSetControlRotationFromPawnOrientation : 1;        // Mask: 0x80, PropSize: 0x10x5A8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bExecutingRotateToFace : 1;                        // Mask: 0x1, PropSize: 0x10x5A9(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1FB : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_27FA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPathFollowingComponent*               PathFollowingComponent;                            // 0x5B0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig)
	class UBrainComponent*                       BrainComponent;                                    // 0x5B8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x5C0(0x8)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPawnActionsComponent*                 ActionsComp;                                       // 0x5C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UBlackboardComponent*                  Blackboard;                                        // 0x5D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UGameplayTasksComponent*               CachedGameplayTasksComponent;                      // 0x5D8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                DefaultNavigationFilterClass;                      // 0x5E0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReceiveMoveCompleted;                              // 0x5E8(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27FE[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AAIController* GetDefaultObj();

	bool UseBlackboard(class UBlackboardComponent** BlackboardComponent);
	class UClass* UnclaimTaskResource();
	class UPathFollowingComponent* SetPathFollowingComponent();
	void SetMoveBlockDetection(bool* bEnable);
	bool RunBehaviorTree();
	class UBlackboardData* OnUsingBlackBoard();
	struct FGameplayResourceSet OnGameplayTaskResourcesClaimed();
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector* Dest);
	enum class EPathFollowingRequestResult MoveToActor();
	class AActor* K2_SetFocus();
	struct FVector K2_SetFocalPoint();
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	enum class EPathFollowingStatus GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor** Actor);
	struct FVector GetFocalPoint();
	class UPawnActionsComponent* GetDeprecatedActionsComponent();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	class UClass* ClaimTaskResource();
};

// 0x228 (0x2E0 - 0xB8)
// Class AIModule.PathFollowingComponent
class UPathFollowingComponent : public UActorComponent
{
public:
	uint8                                        Pad_280D[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	class UNavMovementComponent*                 MovementComp;                                      // 0xF0(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_280E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       MyNavData;                                         // 0x100(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_280F[0x1D8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPathFollowingComponent* GetDefaultObj();

	void OnNavDataRegistered(class ANavigationData** NavData);
	struct FHitResult OnActorBump(class AActor** SelfActor);
	struct FVector GetPathDestination();
	enum class EPathFollowingAction GetPathActionType();
};

// 0x40 (0x68 - 0x28)
// Class AIModule.AIAsyncTaskBlueprintProxy
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2816[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIAsyncTaskBlueprintProxy* GetDefaultObj();

	enum class EPathFollowingResult OnMoveCompleted();
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
	struct FColor                                DebugColor;                                        // 0x28(0x4)(BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxAge;                                            // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bStartsEnabled : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2844[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISenseConfig* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Blueprint
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAISenseConfig_Blueprint* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class AIModule.AISenseConfig_Hearing
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        HearingRange;                                      // 0x50(0x4)(ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        LoSHearingRange;                                   // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseLoSHearing : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_202 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_284B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

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
	class UClass*                                Implementation;                                    // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        SightRadius;                                       // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        LoseSightRadius;                                   // 0x54(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        PeripheralVisionAngleDegrees;                      // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        AutoSuccessRangeFromLastSeenLocation;              // 0x60(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        PointOfViewBackwardOffset;                         // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NearClippingRadius;                                // 0x68(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2855[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FAIDamageEvent                        Event;                                             // 0x28(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISenseEvent_Damage* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class AIModule.AISenseEvent_Hearing
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                         Event;                                             // 0x28(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	class UPawnAction*                           ChildAction;                                       // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           ParentAction;                                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnActionsComponent*                 OwnerComponent;                                    // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config)
	class UObject*                               Instigator;                                        // 0x40(0x8)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBrainComponent*                       BrainComp;                                         // 0x48(0x8)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28D1[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAllowNewSameClassInstance : 1;                    // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReplaceActiveSameClassInstance : 1;               // Mask: 0x2, PropSize: 0x10x80(0x1)(ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShouldPauseMovement : 1;                          // Mask: 0x4, PropSize: 0x10x80(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAlwaysNotifyOnFinished : 1;                       // Mask: 0x8, PropSize: 0x10x80(0x1)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28D2[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction* GetDefaultObj();

	enum class EAIRequestPriority GetActionPriority();
	void Finish(enum class EPawnActionResult* WithResult);
	class UPawnAction* CreateActionInstance(class UClass* ActionClass);
};

// 0x38 (0xF0 - 0xB8)
// Class AIModule.PawnActionsComponent
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                 ControlledPawn;                                    // 0xB8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FPawnActionStack>              ActionStacks;                                      // 0xC0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FPawnActionEvent>              ActionEvents;                                      // 0xD0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           CurrentAction;                                     // 0xE0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28E5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnActionsComponent* GetDefaultObj();

	bool K2_PushAction(class UPawnAction** NewAction, enum class EAIRequestPriority Priority, class UObject** Instigator);
	bool K2_PerformAction(class APawn* Pawn, enum class EAIRequestPriority Priority);
	enum class EPawnActionAbortState K2_ForceAbortAction(class UPawnAction** ActionToAbort);
	enum class EPawnActionAbortState K2_AbortAction(class UPawnAction** ActionToAbort);
};

// 0x0 (0x90 - 0x90)
// Class AIModule.PawnAction_BlueprintBase
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static class UClass* StaticClass();
	static class UPawnAction_BlueprintBase* GetDefaultObj();

	void ActionTick(class APawn** ControlledPawn, float DeltaSeconds);
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
	class AActor*                                GoalActor;                                         // 0x90(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               GoalLocation;                                      // 0x98(0x18)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AcceptableRadius;                                  // 0xB0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_28E9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0xB8(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x1, PropSize: 0x10xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bFinishOnOverlap : 1;                              // Mask: 0x2, PropSize: 0x10xC0(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUsePathfinding : 1;                               // Mask: 0x4, PropSize: 0x10xC0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x8, PropSize: 0x10xC0(0x1)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bProjectGoalToNavigation : 1;                      // Mask: 0x10, PropSize: 0x10xC0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUpdatePathToGoal : 1;                             // Mask: 0x20, PropSize: 0x10xC0(0x1)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAbortSubActionOnPathChange : 1;                   // Mask: 0x40, PropSize: 0x10xC0(0x1)(Edit, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28EA[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Move* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class AIModule.PawnAction_Repeat
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                           ActionToRepeat;                                    // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPawnAction*                           RecentActionCopy;                                  // 0x98(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28EB[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Repeat* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class AIModule.PawnAction_Sequence
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                   ActionSequence;                                    // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28EC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPawnAction*                           RecentActionCopy;                                  // 0xA8(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28ED[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPawnAction_Sequence* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class AIModule.PawnAction_Wait
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                        TimeToWait;                                        // 0x90(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28EE[0xC];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_28EF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UAISystem*                             AISystem;                                          // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class UAISubsystem* GetDefaultObj();

};

// 0x110 (0x170 - 0x60)
// Class AIModule.AISystem
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                        PerceptionSystemClassName;                         // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference)
	struct FSoftClassPath                        HotSpotManagerClassName;                           // 0x80(0x20)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        EnvQueryManagerClassName;                          // 0xA0(0x20)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AcceptanceRadius;                                  // 0xC0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PathfollowingRegularPathPointAcceptanceRadius;     // 0xC4(0x4)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PathfollowingNavLinkAcceptanceRadius;              // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFinishMoveOnGoalOverlap;                          // 0xCC(0x1)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAcceptPartialPaths;                               // 0xCD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowStrafing;                                    // 0xCE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowControllersAsEQSQuerier;                     // 0xCF(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableDebuggerPlugin;                             // 0xD0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForgetStaleActors;                                // 0xD1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAddBlackboardSelfKey;                             // 0xD2(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bClearBBEntryOnBTEQSFail;                          // 0xD3(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bBlackboardKeyDecoratorAllowsNoneAsValue;          // 0xD4(0x1)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 DefaultSightCollisionChannel;                      // 0xD5(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28F0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UBehaviorTreeManager*                  BehaviorTreeManager;                               // 0xD8(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	class UEnvQueryManager*                      EnvironmentQueryManager;                           // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIPerceptionSystem*                   PerceptionSystem;                                  // 0xE8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UAIAsyncTaskBlueprintProxy*>    AllProxyObjects;                                   // 0xF0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UAIHotSpotManager*                     HotSpotManager;                                    // 0x100(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UNavLocalGridManager*                  NavLocalGrids;                                     // 0x108(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28F1[0x60];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_28F2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBTCompositeNode*                      RootNode;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UBTDecorator*>                  RootDecorators;                                    // 0x40(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FBTDecoratorLogic>             RootDecoratorOps;                                  // 0x50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28F3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBehaviorTree* GetDefaultObj();

};

// 0x58 (0x110 - 0xB8)
// Class AIModule.BrainComponent
class UBrainComponent : public UActorComponent
{
public:
	uint8                                        Pad_28F4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlackboardComponent*                  BlackboardComp;                                    // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AAIController*                         AIOwner;                                           // 0xC8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28F5[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrainComponent* GetDefaultObj();

	void StopLogic(class FString* Reason);
	void StartLogic();
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};

// 0x1A8 (0x2B8 - 0x110)
// Class AIModule.BehaviorTreeComponent
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	uint8                                        Pad_28FA[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UBTNode*>                       NodeInstances;                                     // 0x130(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28FB[0x148];                                   // Fixing Size After Last Property  > TateDumper <
	class UBehaviorTree*                         DefaultBehaviorTreeAsset;                          // 0x288(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28FC[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBehaviorTreeComponent* GetDefaultObj();

	void SetDynamicSubtree(struct FGameplayTag* InjectTag, class UBehaviorTree** BehaviorAsset);
	double GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	class UBTNode* FindService(class FString* Name);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// 0x28 (0x50 - 0x28)
// Class AIModule.BehaviorTreeManager
class UBehaviorTreeManager : public UObject
{
public:
	int32                                        MaxDebuggerSteps;                                  // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_28FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBehaviorTreeTemplateInfo>     LoadedTemplates;                                   // 0x30(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UBehaviorTreeComponent*>        ActiveComponents;                                  // 0x40(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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

	class UBlackboardData* GetBlackboardAsset();
};

// 0x108 (0x1C0 - 0xB8)
// Class AIModule.BlackboardComponent
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                       BrainComp;                                         // 0xB8(0x8)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlackboardData*                       DefaultBlackboardAsset;                            // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlackboardData*                       BlackboardAsset;                                   // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_290D[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UBlackboardKeyType*>            KeyInstances;                                      // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_290E[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBlackboardComponent* GetDefaultObj();

	void SetValueAsVector(class FName* KeyName, const struct FVector& VectorValue);
	class FString SetValueAsString(class FName* KeyName);
	void SetValueAsRotator(class FName* KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(class FName* KeyName, class UObject** ObjectValue);
	void SetValueAsName(class FName* KeyName, class FName NameValue);
	void SetValueAsInt(class FName* KeyName, int32* IntValue);
	void SetValueAsFloat(class FName* KeyName, float* FloatValue);
	void SetValueAsEnum(class FName* KeyName, uint8* EnumValue);
	void SetValueAsClass(class FName* KeyName, class UClass** ClassValue);
	bool SetValueAsBool(class FName* KeyName);
	bool IsVectorValueSet(class FName* KeyName);
	struct FVector GetValueAsVector(class FName* KeyName);
	class FString GetValueAsString(class FName* KeyName);
	struct FRotator GetValueAsRotator(class FName* KeyName);
	class UObject* GetValueAsObject(class FName* KeyName);
	class FName GetValueAsName(class FName* KeyName);
	int32 GetValueAsInt(class FName* KeyName);
	float GetValueAsFloat(class FName* KeyName);
	uint8 GetValueAsEnum(class FName* KeyName);
	class UClass* GetValueAsClass(class FName* KeyName);
	bool GetValueAsBool(class FName* KeyName);
	bool GetRotationFromEntry(class FName* KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(class FName* KeyName, struct FVector* ResultLocation);
	void ClearValueAsVector(class FName* KeyName);
	void ClearValueAsRotator(class FName* KeyName);
	void ClearValue(class FName* KeyName);
};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardData
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                       Parent;                                            // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FBlackboardEntry>              Keys;                                              // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHasSynchronizedKeys : 1;                          // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2912[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBlackboardData* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.BlackboardKeyType
class UBlackboardKeyType : public UObject
{
public:
	uint8                                        Pad_2914[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class UClass*                                BaseClass;                                         // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Class* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardKeyType_Enum
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                 EnumType;                                          // 0x30(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                EnumName;                                          // 0x38(0x10)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsEnumNameValid : 1;                              // Mask: 0x1, PropSize: 0x10x48(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2916[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	class FString                                EnumName;                                          // 0x30(0x10)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UEnum*                                 EnumType;                                          // 0x40(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_NativeEnum* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Object
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                BaseClass;                                         // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	class FString                                StringValue;                                       // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)

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
	TArray<struct FBTCompositeChild>             Children;                                          // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<class UBTService*>                    Services;                                          // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2917[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bApplyDecoratorScope : 1;                          // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2918[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTCompositeNode* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class AIModule.BTDecorator
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	uint8                                        BitPad_210 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bInverseCondition : 1;                             // Mask: 0x80, PropSize: 0x10x60(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2919[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EBTFlowAbortMode                  FlowAbortMode;                                     // 0x64(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_291A[0x3];                                     // Fixing Size Of Struct > TateDumper <

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
	class UBTNode* SetBlackboardValueAsVector(const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	class UBTNode* SetBlackboardValueAsString(const struct FBlackboardKeySelector& Key, const class FString& Value);
	class UBTNode* SetBlackboardValueAsRotator(const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	class UBTNode* SetBlackboardValueAsObject(const struct FBlackboardKeySelector& Key, class UObject* Value);
	class UBTNode* SetBlackboardValueAsName(const struct FBlackboardKeySelector& Key, class FName Value);
	class UBTNode* SetBlackboardValueAsInt(const struct FBlackboardKeySelector& Key, int32 Value);
	class UBTNode* SetBlackboardValueAsFloat(const struct FBlackboardKeySelector& Key, float Value);
	class UBTNode* SetBlackboardValueAsEnum(const struct FBlackboardKeySelector& Key, uint8 Value);
	class UBTNode* SetBlackboardValueAsClass(const struct FBlackboardKeySelector& Key, class UClass* Value);
	class UBTNode* SetBlackboardValueAsBool(const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* GetOwnersBlackboard();
	class UBehaviorTreeComponent* GetOwnerComponent();
	struct FVector GetBlackboardValueAsVector(const struct FBlackboardKeySelector& Key);
	class FString GetBlackboardValueAsString(const struct FBlackboardKeySelector& Key);
	struct FRotator GetBlackboardValueAsRotator(const struct FBlackboardKeySelector& Key);
	class UObject* GetBlackboardValueAsObject(const struct FBlackboardKeySelector& Key);
	class FName GetBlackboardValueAsName(const struct FBlackboardKeySelector& Key);
	int32 GetBlackboardValueAsInt(const struct FBlackboardKeySelector& Key);
	float GetBlackboardValueAsFloat(const struct FBlackboardKeySelector& Key);
	uint8 GetBlackboardValueAsEnum(const struct FBlackboardKeySelector& Key);
	class UClass* GetBlackboardValueAsClass(const struct FBlackboardKeySelector& Key);
	bool GetBlackboardValueAsBool(const struct FBlackboardKeySelector& Key);
	class AActor* GetBlackboardValueAsActor(const struct FBlackboardKeySelector& Key);
	class UBTNode* ClearBlackboardValueAsVector(const struct FBlackboardKeySelector& Key);
	class UBTNode* ClearBlackboardValue(const struct FBlackboardKeySelector& Key);
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
	enum class EBTParallelMode                   FinishMode;                                        // 0x90(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2933[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTComposite_SimpleParallel* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class AIModule.BTDecorator_BlackboardBase
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x68(0x28)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_BlackboardBase* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class AIModule.BTDecorator_Blackboard
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int32                                        IntValue;                                          // 0x90(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        FloatValue;                                        // 0x94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                StringValue;                                       // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
	class FString                                CachedDescription;                                 // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        OperationType;                                     // 0xB8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EBTBlackboardRestart              NotifyObserver;                                    // 0xB9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2934[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_Blackboard* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class AIModule.BTDecorator_BlueprintBase
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                         AIOwner;                                           // 0x68(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ActorOwner;                                        // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          ObservedKeyNames;                                  // 0x78(0x10)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_293F[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCheckConditionOnlyBlackBoardChanges : 1;          // Mask: 0x2, PropSize: 0x10x98(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsObservingBB : 1;                                // Mask: 0x4, PropSize: 0x10x98(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2941[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_BlueprintBase* GetDefaultObj();

	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor** OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverDeactivated(class AActor** OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverActivated(class AActor** OwnerActor);
	void ReceiveExecutionStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController** OwnerController, class APawn** ControlledPawn, enum class EBTNodeResult* NodeResult);
	void ReceiveExecutionFinish(class AActor** OwnerActor, enum class EBTNodeResult* NodeResult);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	bool PerformConditionCheck(class AActor** OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
	void FinishConditionCheck(bool* bAllowExecution);
};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                ActorToCheck;                                      // 0x68(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2944[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x98(0x20)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class FString                                CachedDescription;                                 // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_CheckGameplayTagsOnActor* GetDefaultObj();

};

// 0x58 (0xC0 - 0x68)
// Class AIModule.BTDecorator_CompareBBEntries
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	enum class EBlackBoardEntryComparison        Operator;                                          // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2946[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x70(0x28)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x98(0x28)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2947[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                ConeDirection;                                     // 0x98(0x28)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Observed;                                          // 0xC0(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2948[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_ConeCheck* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class AIModule.BTDecorator_Cooldown
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                        CoolDownTime;                                      // 0x68(0x4)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2949[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                CoolDownTimeKey;                                   // 0x70(0x28)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_Cooldown* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_DoesPathExist
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x68(0x28)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x90(0x28)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSelf : 1;                                      // Mask: 0x1, PropSize: 0x10xB8(0x1)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_211 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_294A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPathExistanceQueryType           PathQueryType;                                     // 0xBC(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_294B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0xC0(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

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
	float                                        AcceptableRadius;                                  // 0x90(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_294C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderFloatValue             ParametrizedAcceptableRadius;                      // 0x98(0x38)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFAIDistanceType                  GeometricDistanceType;                             // 0xD0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_294D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseParametrizedRadius : 1;                        // Mask: 0x1, PropSize: 0x10xD4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseNavAgentGoalLocation : 1;                      // Mask: 0x2, PropSize: 0x10xD4(0x1)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bPathFindingBasedTest : 1;                         // Mask: 0x4, PropSize: 0x10xD4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_294E[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_IsAtLocation* GetDefaultObj();

};

// 0x8 (0x98 - 0x90)
// Class AIModule.BTDecorator_IsBBEntryOfClass
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                TestClass;                                         // 0x90(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_IsBBEntryOfClass* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_KeepInCone
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_294F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                Observed;                                          // 0x98(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSelfAsOrigin : 1;                              // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUseSelfAsObserved : 1;                            // Mask: 0x2, PropSize: 0x10xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2951[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_KeepInCone* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_Loop
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int32                                        NumLoops;                                          // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInfiniteLoop;                                     // 0x6C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2952[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InfiniteLoopTimeoutTime;                           // 0x70(0x4)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2953[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CooldownDuration;                                  // 0x70(0x4)(ConstParm, ExportObject, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2955[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_SetTagCooldown* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_TagCooldown
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CooldownDuration;                                  // 0x70(0x4)(ConstParm, ExportObject, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bActivatesCooldown;                                // 0x75(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2957[0x2];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTDecorator_TagCooldown* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class AIModule.BTDecorator_TimeLimit
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                        TimeLimit;                                         // 0x68(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2958[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                TimeLimitKey;                                      // 0x70(0x28)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTDecorator_TimeLimit* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlueprintBase
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                         AIOwner;                                           // 0x70(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ActorOwner;                                        // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2965[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShowEventDetails : 1;                             // Mask: 0x2, PropSize: 0x10x90(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2966[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService_BlueprintBase* GetDefaultObj();

	class UBehaviorTreeComponent* ResetInterval();
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor** OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveSearchStart(class AActor** OwnerActor);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveActivation(class AActor** OwnerActor);
	bool IsServiceActive();
};

// 0x8 (0xA0 - 0x98)
// Class AIModule.BTService_DefaultFocus
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	uint8                                        FocusPriority;                                     // 0x98(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2968[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService_DefaultFocus* GetDefaultObj();

};

// 0x60 (0xF8 - 0x98)
// Class AIModule.BTService_RunEQS
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0x98(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateBBOnFail;                                   // 0xE0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2969[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTService_RunEQS* GetDefaultObj();

};

// 0x38 (0xA8 - 0x70)
// Class AIModule.BTTask_BlueprintBase
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                         AIOwner;                                           // 0x70(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                ActorOwner;                                        // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FIntervalCountdown                    TickInterval;                                      // 0x80(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2970[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2971[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_BlueprintBase* GetDefaultObj();

	int32 SetFinishOnMessageWithId(class FName MessageName);
	void SetFinishOnMessage(class FName MessageName);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor** OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveAbort(class AActor** OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	bool FinishExecute();
	void FinishAbort();
};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_FinishWithResult
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	enum class EBTNodeResult                     Result;                                            // 0x70(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2973[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_FinishWithResult* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_GameplayTaskBase
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	uint8                                        bWaitForGameplayTask : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2974[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_GameplayTaskBase* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_MakeNoise
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                        Loudnes;                                           // 0x70(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_297B[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_MakeNoise* GetDefaultObj();

};

// 0x40 (0xD8 - 0x98)
// Class AIModule.BTTask_MoveTo
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x98(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_297D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FilterClass;                                       // 0xA0(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ObservedBlackboardValueTolerance;                  // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bObserveBlackboardValue : 1;                       // Mask: 0x1, PropSize: 0x10xAC(0x1)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x2, PropSize: 0x10xAC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x4, PropSize: 0x10xAC(0x1)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bTrackMovingGoal : 1;                              // Mask: 0x8, PropSize: 0x10xAC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x10, PropSize: 0x10xAC(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReachTestIncludesAgentRadius : 1;                 // Mask: 0x20, PropSize: 0x10xAC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReachTestIncludesGoalRadius : 1;                  // Mask: 0x40, PropSize: 0x10xAC(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bStopOnOverlap : 1;                                // Mask: 0x80, PropSize: 0x10xAC(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bStopOnOverlapNeedsUpdate : 1;                     // Mask: 0x1, PropSize: 0x10xAD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_215 : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bAutoStopOnAbort : 1;                              // Mask: 0x4, PropSize: 0x10xAD(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_216 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2981[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                AcceptableRadiusKey;                               // 0xB0(0x28)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_MoveTo* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class AIModule.BTTask_MoveDirectlyToward
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	uint8                                        bDisablePathUpdateOnGoalLocationChange : 1;        // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        bProjectVectorGoalToNavigation : 1;                // Mask: 0x2, PropSize: 0x10xD8(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUpdatedDeprecatedProperties : 1;                  // Mask: 0x4, PropSize: 0x10xD8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2985[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	class UAnimationAsset*                       AnimationToPlay;                                   // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x78(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        bNonBlocking : 1;                                  // Mask: 0x2, PropSize: 0x10x78(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_219 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_298D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBehaviorTreeComponent*                MyOwnerComp;                                       // 0x80(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USkeletalMeshComponent*                CachedSkelMesh;                                    // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_298E[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_PlayAnimation* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PlaySound
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                             SoundToPlay;                                       // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_PlaySound* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PushPawnAction
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                           Action;                                            // 0x70(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_PushPawnAction* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class AIModule.BTTask_RunBehavior
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x70(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                ControllerProperty;                                // 0x78(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                CurrentControllerClass;                            // 0x88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_RunBehavior* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class AIModule.BTTask_RunBehaviorDynamic
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBehaviorTree*                         DefaultBehaviorAsset;                              // 0x78(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x80(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_RunBehaviorDynamic* GetDefaultObj();

};

// 0xC0 (0x158 - 0x98)
// Class AIModule.BTTask_RunEQSQuery
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_299F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlackboardKeySelector                EQSQueryBlackboardKey;                             // 0xC8(0x28)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseBBKey;                                         // 0xF0(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29A0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0xF8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateBBOnFail;                                   // 0x140(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29A1[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBTTask_RunEQSQuery* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class AIModule.BTTask_SetTagCooldown
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAddToExistingDuration;                            // 0x78(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CooldownDuration;                                  // 0x7C(0x4)(ConstParm, ExportObject, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_SetTagCooldown* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_Wait
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                        WaitTime;                                          // 0x70(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        RandomDeviation;                                   // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBTTask_Wait* GetDefaultObj();

};

// 0x28 (0xA0 - 0x78)
// Class AIModule.BTTask_WaitBlackboardTime
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x78(0x28)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

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

	bool UnlockAIResourcesWithAnimation(class UAnimInstance** AnimInstance);
	class APawn* SpawnAIFromClass(class UClass* PawnClass, class UBehaviorTree** BehaviorTree, struct FVector* Location, struct FRotator* Rotation, bool bNoCollisionFail, class AActor** Owner);
	struct FVector SimpleMoveToLocation(class AController** Controller);
	class AActor* SimpleMoveToActor(class AController** Controller);
	bool SendAIMessage(class APawn* Target);
	bool LockAIResourcesWithAnimation(class UAnimInstance** AnimInstance);
	bool IsValidAIRotation(struct FRotator* Rotation);
	bool IsValidAILocation(struct FVector* Location);
	bool IsValidAIDirection();
	int32 GetNextNavLinkIndex(class AController** Controller);
	TArray<struct FVector> GetCurrentPathPoints(class AController** Controller);
	int32 GetCurrentPathIndex(class AController** Controller);
	class UNavigationPath* GetCurrentPath(class AController** Controller);
	class UBlackboardComponent* GetBlackboard(class AActor* Target);
	class AAIController* GetAIController();
	class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class APawn* Pawn, class AActor* TargetActor);
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
	class FName                                  ParamName;                                         // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatValue;                                        // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        IntValue;                                          // 0x34(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         BoolValue;                                         // 0x38(0x1)(Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_29CB[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIDataProvider_QueryParams* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class AIModule.AIDataProvider_Random
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                        Min;                                               // 0x40(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	uint8                                        bInteger : 1;                                      // Mask: 0x1, PropSize: 0x10x48(0x1)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29CD[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_29D8[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class FName                                  QueryName;                                         // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryOption*>               Options;                                           // 0x38(0x10)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
	int32                                        VerNum;                                            // 0x28(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29DD[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryNode* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AIModule.EnvQueryGenerator
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	class FString                                OptionName;                                        // 0x30(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ItemType;                                          // 0x40(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoSortTests : 1;                                // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29DF[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AIModule.EnvQueryInstanceBlueprintWrapper
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	uint8                                        Pad_29E9[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        QueryID;                                           // 0x30(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29EA[0x24];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ItemType;                                          // 0x58(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OptionIndex;                                       // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29EB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnQueryFinishedEvent;                              // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryInstanceBlueprintWrapper* GetDefaultObj();

	void SetNamedParam(class FName ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(const TArray<struct FVector>& ResultLocations);
	bool GetQueryResultsAsActors(const TArray<class AActor*>& ResultActors);
	float GetItemScore(int32 ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
};

// 0x120 (0x158 - 0x38)
// Class AIModule.EnvQueryManager
class UEnvQueryManager : public UAISubsystem
{
public:
	uint8                                        Pad_29F1[0x70];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEnvQueryInstanceCache>        InstanceCache;                                     // 0xA8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryContext*>              LocalContexts;                                     // 0xB8(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;                                // 0xC8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29F2[0x54];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        MaxAllowedTestingTime;                             // 0x12C(0x4)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bTestQueriesUsingBreadth;                          // 0x130(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_29F5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        QueryCountWarningThreshold;                        // 0x134(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	double                                       QueryCountWarningInterval;                         // 0x138(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	double                                       ExecutionTimeWarningSeconds;                       // 0x140(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x148(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       GenerationTimeWarningSeconds;                      // 0x150(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryManager* GetDefaultObj();

	class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery();
};

// 0x18 (0x40 - 0x28)
// Class AIModule.EnvQueryOption
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                    Generator;                                         // 0x28(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UEnvQueryTest*>                 Tests;                                             // 0x30(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryOption* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class AIModule.EnvQueryTest
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int32                                        TestOrder;                                         // 0x30(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestPurpose                   TestPurpose;                                       // 0x34(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TestComment;                                       // 0x38(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestFilterOperator            MultipleContextFilterOp;                           // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestScoreOperator             MultipleContextScoreOp;                            // 0x49(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestFilterType                FilterType;                                        // 0x4A(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_29F7[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderBoolValue              BoolValue;                                         // 0x50(0x38)(Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             FloatValueMin;                                     // 0x88(0x38)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             FloatValueMax;                                     // 0xC0(0x38)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29F9[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EEnvTestScoreEquation             ScoringEquation;                                   // 0xF9(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvQueryTestClamping             ClampMinType;                                      // 0xFA(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvQueryTestClamping             ClampMaxType;                                      // 0xFB(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEQSNormalizationType             NormalizationType;                                 // 0xFC(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderFloatValue             ScoreClampMin;                                     // 0x100(0x38)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ScoreClampMax;                                     // 0x138(0x38)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ScoringFactor;                                     // 0x170(0x38)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ReferenceValue;                                    // 0x1A8(0x38)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bDefineReferenceValue;                             // 0x1E0(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_29FC[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bWorkOnFloatValues : 1;                            // Mask: 0x1, PropSize: 0x10x1F0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29FD[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryTest* GetDefaultObj();

};

// 0x30 (0x720 - 0x6F0)
// Class AIModule.EQSRenderingComponent
class UEQSRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_29FE[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEQSRenderingComponent* GetDefaultObj();

};

// 0xA0 (0x960 - 0x8C0)
// Class AIModule.EQSTestingPawn
class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x8C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0x8C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x8D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TimeLimitPerStep;                                  // 0x8E8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        StepToDebugDraw;                                   // 0x8EC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvQueryHightlightMode           HighlightMode;                                     // 0x8F0(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bDrawLabels : 1;                                   // Mask: 0x1, PropSize: 0x10x8F4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDrawFailedItems : 1;                              // Mask: 0x2, PropSize: 0x10x8F4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReRunQueryOnlyOnFinishedMove : 1;                 // Mask: 0x4, PropSize: 0x10x8F4(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x8, PropSize: 0x10x8F4(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bTickDuringGame : 1;                               // Mask: 0x10, PropSize: 0x10x8F4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_21B : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2A00[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EEnvQueryRunMode                  QueryingMode;                                      // 0x8F8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A01[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNavAgentProperties                   NavAgentProperties;                                // 0x900(0x38)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst)
	uint8                                        Pad_2A02[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AEQSTestingPawn* GetDefaultObj();

};

// 0x80 (0xD0 - 0x50)
// Class AIModule.EnvQueryGenerator_ActorsOfClass
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                SearchedActorClass;                                // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderBoolValue              GenerateOnlyActorsInRadius;                        // 0x58(0x38)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x90(0x38)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                SearchCenter;                                      // 0xC8(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_ActorsOfClass* GetDefaultObj();

};

// 0x38 (0x88 - 0x50)
// Class AIModule.EnvQueryGenerator_BlueprintBase
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	class FText                                  GeneratorsActionDescription;                       // 0x50(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Context;                                           // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                GeneratedItemType;                                 // 0x70(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A30[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_BlueprintBase* GetDefaultObj();

	class UObject* GetQuerier();
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
	TArray<class UEnvQueryGenerator*>            Generators;                                        // 0x50(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAllowDifferentItemTypes : 1;                      // Mask: 0x1, PropSize: 0x10x60(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bHasMatchingItemType : 1;                          // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_220 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2A33[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ForcedItemType;                                    // 0x68(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Composite* GetDefaultObj();

};

// 0x40 (0x90 - 0x50)
// Class AIModule.EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x50(0x40)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_ProjectedPoints* GetDefaultObj();

};

// 0xF0 (0x180 - 0x90)
// Class AIModule.EnvQueryGenerator_Cone
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             AlignedPointsDistance;                             // 0x90(0x38)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ConeDegrees;                                       // 0xC8(0x38)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             AngleStep;                                         // 0x100(0x38)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             Range;                                             // 0x138(0x38)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UClass*                                CenterActor;                                       // 0x170(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIncludeContextLocation : 1;                       // Mask: 0x1, PropSize: 0x10x178(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A35[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Cone* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class AIModule.EnvQueryGenerator_CurrentLocation
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                QueryContext;                                      // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_CurrentLocation* GetDefaultObj();

};

// 0x150 (0x1E0 - 0x90)
// Class AIModule.EnvQueryGenerator_Donut
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x90(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0xC8(0x38)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAIDataProviderIntValue               NumberOfRings;                                     // 0x100(0x38)(Edit, ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderIntValue               PointsPerRing;                                     // 0x138(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEnvDirection                         ArcDirection;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x190(0x38)(Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseSpiralPattern;                                 // 0x1C8(0x1)(Edit, ExportObject, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A3A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Center;                                            // 0x1D0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x1D8(0x1)(Edit, ConstParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A3B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Donut* GetDefaultObj();

};

// 0x1A0 (0x230 - 0x90)
// Class AIModule.EnvQueryGenerator_OnCircle
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             CircleRadius;                                      // 0x90(0x38)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderIntValue               NumberOfPoints;                                    // 0x100(0x38)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EPointOnCircleSpacingMethod       PointOnCircleSpacingMethod;                        // 0x138(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A40[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEnvDirection                         ArcDirection;                                      // 0x140(0x20)(ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x160(0x38)(Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AngleRadians;                                      // 0x198(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A42[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CircleCenter;                                      // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIgnoreAnyContextActorsWhenGeneratingCircle;       // 0x1A8(0x1)(EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A43[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAIDataProviderFloatValue             CircleCenterZOffset;                               // 0x1B0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEnvTraceData                         TraceData;                                         // 0x1E8(0x40)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x228(0x1)(Edit, ConstParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A44[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_OnCircle* GetDefaultObj();

};

// 0x78 (0x108 - 0x90)
// Class AIModule.EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             GridSize;                                          // 0x90(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                GenerateAround;                                    // 0x100(0x8)(ConstParm, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_SimpleGrid* GetDefaultObj();

};

// 0x78 (0x180 - 0x108)
// Class AIModule.EnvQueryGenerator_PathingGrid
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue              PathToItem;                                        // 0x108(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                NavigationFilter;                                  // 0x140(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x148(0x38)(ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_PathingGrid* GetDefaultObj();

};

// 0x58 (0xA8 - 0x50)
// Class AIModule.EnvQueryGenerator_PerceivedActors
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
public:
	class UClass*                                AllowedActorClass;                                 // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x58(0x38)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ListenerContext;                                   // 0x90(0x8)(BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                SenseToUse;                                        // 0x98(0x8)(ConstParm, BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIncludeKnownActors;                               // 0xA0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A5C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_PerceivedActors* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryItemType
class UEnvQueryItemType : public UObject
{
public:
	uint8                                        Pad_2A60[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EEnvTestDistance                  TestMode;                                          // 0x1F8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A69[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DistanceTo;                                        // 0x200(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Distance* GetDefaultObj();

};

// 0x48 (0x240 - 0x1F8)
// Class AIModule.EnvQueryTest_Dot
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                         LineA;                                             // 0x1F8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEnvDirection                         LineB;                                             // 0x218(0x20)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEnvTestDot                       TestMode;                                          // 0x238(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteValue;                                    // 0x239(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A6A[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvQueryTest_Dot* GetDefaultObj();

};

// 0x70 (0x268 - 0x1F8)
// Class AIModule.EnvQueryTest_GameplayTags
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x1F8(0x48)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRejectIncompatibleItems;                          // 0x240(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdatedToUseQuery;                                // 0x241(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x242(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A6C[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x248(0x20)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UEnvQueryTest_GameplayTags* GetDefaultObj();

};

// 0x30 (0x228 - 0x1F8)
// Class AIModule.EnvQueryTest_Overlap
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                       OverlapData;                                       // 0x1F8(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Overlap* GetDefaultObj();

};

// 0x88 (0x280 - 0x1F8)
// Class AIModule.EnvQueryTest_Pathfinding
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	enum class EEnvTestPathfinding               TestMode;                                          // 0x1F8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A71[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Context;                                           // 0x200(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FAIDataProviderBoolValue              PathFromContext;                                   // 0x208(0x38)(ConstParm, ExportObject, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderBoolValue              SkipUnreachable;                                   // 0x240(0x38)(Edit, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x278(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Pathfinding* GetDefaultObj();

};

// 0x38 (0x2B8 - 0x280)
// Class AIModule.EnvQueryTest_PathfindingBatch
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x280(0x38)(ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_PathfindingBatch* GetDefaultObj();

};

// 0x40 (0x238 - 0x1F8)
// Class AIModule.EnvQueryTest_Project
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x1F8(0x40)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	struct FEnvTraceData                         TraceData;                                         // 0x1F8(0x40)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderBoolValue              TraceFromContext;                                  // 0x238(0x38)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ItemHeightOffset;                                  // 0x270(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIDataProviderFloatValue             ContextHeightOffset;                               // 0x2A8(0x38)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Context;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Trace* GetDefaultObj();

};

// 0x18 (0x210 - 0x1F8)
// Class AIModule.EnvQueryTest_Volume
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	class UClass*                                VolumeContext;                                     // 0x1F8(0x8)(ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                VolumeClass;                                       // 0x200(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDoComplexVolumeTest : 1;                          // Mask: 0x1, PropSize: 0x10x208(0x1)(BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A83[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2A8C[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CrowdAgentMoveDirection;                           // 0x2F8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A8D[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCrowdFollowingComponent* GetDefaultObj();

	void SuspendCrowdSteering(bool* bSuspend);
};

// 0xC8 (0xF0 - 0x28)
// Class AIModule.CrowdManager
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                       MyNavData;                                         // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FCrowdAvoidanceConfig>         AvoidanceConfig;                                   // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;                                  // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAgents;                                         // 0x50(0x4)(BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxAgentRadius;                                    // 0x54(0x4)(ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAvoidedAgents;                                  // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAvoidedWalls;                                   // 0x5C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NavmeshCheckInterval;                              // 0x60(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PathOptimizationInterval;                          // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SeparationDirClamp;                                // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PathOffsetRadiusMultiplier;                        // 0x6C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_224 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bResolveCollisions : 1;                            // Mask: 0x10, PropSize: 0x10x70(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A96[0x7F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCrowdManager* GetDefaultObj();

};

// 0x30 (0x310 - 0x2E0)
// Class AIModule.GridPathFollowingComponent
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                  GridManager;                                       // 0x2E0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AB4[0x28];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2ABD[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNavigationLink>               PointLinks;                                        // 0x4D8(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
	TArray<struct FNavigationSegmentLink>        SegmentLinks;                                      // 0x4E8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
	class UNavLinkCustomComponent*               SmartLinkComp;                                     // 0x4F8(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSmartLinkIsRelevant;                              // 0x500(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AC2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSmartLinkReached;                                // 0x508(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ANavLinkProxy* GetDefaultObj();

	void SetSmartLinkEnabled(bool* bEnabled);
	void ResumePathFollowing(class AActor** Agent);
	struct FVector ReceiveSmartLinkReached(class AActor** Agent);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};

// 0x30 (0x58 - 0x28)
// Class AIModule.NavLocalGridManager
class UNavLocalGridManager : public UObject
{
public:
	uint8                                        Pad_2ADD[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNavLocalGridManager* GetDefaultObj();

	bool SetLocalNavigationGridDensity();
	class UObject* RemoveLocalNavigationGrid(int32* GridId, bool* bRebuildGrids);
	bool FindLocalNavigationGridPath(struct FVector* Start, const struct FVector& End);
	int32 AddLocalNavigationGridForPoints(int32* Radius2D, float Height, bool* bRebuildGrids);
	int32 AddLocalNavigationGridForPoint(struct FVector* Location, int32* Radius2D, float Height, bool* bRebuildGrids);
	int32 AddLocalNavigationGridForCapsule(struct FVector* Location, float CapsuleHalfHeight, int32* Radius2D, float Height, bool* bRebuildGrids);
	int32 AddLocalNavigationGridForBox(struct FVector* Location, struct FRotator* Rotation, int32* Radius2D, float Height, bool* bRebuildGrids);
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
	TArray<class UAISenseConfig*>                SensesConfig;                                      // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                DominantSense;                                     // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AE8[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class AAIController*                         AIOwner;                                           // 0xE0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AE9[0x80];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPerceptionUpdated;                               // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionForgotten;                       // 0x178(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionUpdated;                         // 0x188(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionInfoUpdated;                     // 0x198(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAIPerceptionComponent* GetDefaultObj();

	void SetSenseEnabled(class UClass* SenseClass, bool* bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor** Actor, enum class EEndPlayReason* EndPlayReason);
	TArray<class AActor*> GetPerceivedHostileActorsBySense(class UClass* SenseToUse);
	TArray<class AActor*> GetPerceivedHostileActors();
	TArray<class AActor*> GetPerceivedActors(class UClass* SenseToUse);
	TArray<class AActor*> GetKnownPerceivedActors(class UClass* SenseToUse);
	TArray<class AActor*> GetCurrentlyPerceivedActors(class UClass* SenseToUse);
	bool GetActorsPerception(class AActor** Actor);
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
	uint8                                        bAutoRegisterAsSource : 1;                         // Mask: 0x1, PropSize: 0x10xB8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_225 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2AF2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        RegisterAsSourceForSenses;                         // 0xC0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2B01[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UAISense*>                      Senses;                                            // 0x88(0x10)(Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PerceptionAgingRate;                               // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B02[0x9C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAIPerceptionSystem* GetDefaultObj();

	class UObject* ReportPerceptionEvent(class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool RegisterPerceptionStimuliSource(class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor** Actor, enum class EEndPlayReason* EndPlayReason);
	class UClass* GetSenseClassForStimulus();
};

// 0x58 (0x80 - 0x28)
// Class AIModule.AISense
class UAISense : public UObject
{
public:
	float                                        DefaultExpirationAge;                              // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAISenseNotifyType                NotifyType;                                        // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B04[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bWantsNewPawnNotification : 1;                     // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAutoRegisterAllPawnsAsSources : 1;                // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_226 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2B05[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAIPerceptionSystem*                   PerceptionSystemInstance;                          // 0x38(0x8)(BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B06[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISense* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Damage
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAISenseConfig_Damage* GetDefaultObj();

};

// 0x28 (0xA8 - 0x80)
// Class AIModule.AISense_Blueprint
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                ListenerDataType;                                  // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UAIPerceptionComponent*>        ListenerContainer;                                 // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UAISenseEvent*>                 UnprocessedEvents;                                 // 0x98(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Blueprint* GetDefaultObj();

	float OnUpdate(const TArray<class UAISenseEvent*>& EventsToProcess);
	class UAIPerceptionComponent* OnListenerUpdated(class AActor* ActorListener);
	class UAIPerceptionComponent* OnListenerUnregistered(class AActor* ActorListener);
	class UAIPerceptionComponent* OnListenerRegistered(class AActor* ActorListener);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(const TArray<class UAIPerceptionComponent*>& ListenerComponents);
	void GetAllListenerActors(const TArray<class AActor*>& ListenerActors);
};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Damage
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                RegisteredEvents;                                  // 0x80(0x10)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Damage* GetDefaultObj();

	struct FVector ReportDamageEvent(class AActor** Instigator, float* DamageAmount, struct FVector* EventLocation, class FName* Tag);
};

// 0x68 (0xE8 - 0x80)
// Class AIModule.AISense_Hearing
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                 NoiseEvents;                                       // 0x80(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SpeedOfSoundSq;                                    // 0x90(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2B23[0x54];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISense_Hearing* GetDefaultObj();

	float ReportNoiseEvent(const struct FVector& NoiseLocation, class AActor** Instigator, class FName* Tag);
};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Prediction
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>            RegisteredEvents;                                  // 0x80(0x10)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2B38[0xD8];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxTracesPerTick;                                  // 0x158(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxAsyncTracesPerTick;                             // 0x15C(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MinQueriesPerTimeSliceCheck;                       // 0x160(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B39[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxTimeSlicePerTick;                               // 0x168(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        HighImportanceQueryDistanceThreshold;              // 0x170(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B3A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxQueryImportance;                                // 0x178(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SightLimitQueryImportance;                         // 0x17C(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PendingQueriesBudgetReductionRatio;                // 0x180(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseAsynchronousTraceForDefaultSightQueries;       // 0x184(0x1)(Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B3B[0x2B];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAISense_Sight* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Team
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>          RegisteredEvents;                                  // 0x80(0x10)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Team* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Touch
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                 RegisteredEvents;                                  // 0x80(0x10)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAISense_Touch* GetDefaultObj();

	class AActor* ReportTouchEvent(struct FVector* Location);
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
	float                                        HearingThreshold;                                  // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LOSHearingThreshold;                               // 0xBC(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SightRadius;                                       // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        SensingInterval;                                   // 0xC4(0x4)(Edit, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        HearingMaxSoundAge;                                // 0xC8(0x4)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableSensingUpdates : 1;                         // Mask: 0x1, PropSize: 0x10xCC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlySensePlayers : 1;                             // Mask: 0x2, PropSize: 0x10xCC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSeePawns : 1;                                     // Mask: 0x4, PropSize: 0x10xCC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        bHearNoises : 1;                                   // Mask: 0x8, PropSize: 0x10xCC(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_227 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2B58[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSeePawn;                                         // 0xD8(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHearNoise;                                       // 0xE8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PeripheralVisionAngle;                             // 0xF8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        PeripheralVisionCosine;                            // 0xFC(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPawnSensingComponent* GetDefaultObj();

	void SetSensingUpdatesEnabled(bool* bEnabled);
	void SetSensingInterval(float* NewSensingInterval);
	void SetPeripheralVisionAngle(float* NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn** Instigator, struct FVector* Location, float* Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// 0x8 (0x70 - 0x68)
// Class AIModule.AITask
class UAITask : public UGameplayTask
{
public:
	class AAIController*                         OwnerController;                                   // 0x68(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	FMulticastInlineDelegateProperty_            OnRequestFailed;                                   // 0x70(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoveFinished;                                    // 0x80(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAIMoveRequest                        MoveRequest;                                       // 0x90(0x50)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B7F[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAITask_MoveTo* GetDefaultObj();

	class UAITask_MoveTo* AIMoveTo(class AAIController** Controller, struct FVector* GoalLocation, enum class EAIOptionFlag* StopOnOverlap, enum class EAIOptionFlag* AcceptPartialPath, bool* bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag* ProjectGoalOnNavigation);
};

// 0x78 (0xE8 - 0x70)
// Class AIModule.AITask_RunEQS
class UAITask_RunEQS : public UAITask
{
public:
	uint8                                        Pad_2B82[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAITask_RunEQS* GetDefaultObj();

	class UAITask_RunEQS* RunEQS(class AAIController** Controller);
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


