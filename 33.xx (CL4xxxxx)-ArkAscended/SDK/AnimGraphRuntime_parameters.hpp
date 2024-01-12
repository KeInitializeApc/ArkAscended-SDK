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

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition
struct UBlendSpaceLibrary_SnapToPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
struct UBlendSpaceLibrary_GetPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
struct UBlendSpaceLibrary_GetFilteredPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
struct UBlendSpaceLibrary_ConvertToBlendSpacePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1580[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
struct UBlendSpaceLibrary_ConvertToBlendSpace_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1587[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpaceReference                  ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
struct UAnimationStateMachineLibrary_SetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class FName                                  TargetState;                                       // 0x20(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Duration;                                          // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETransitionLogicType              BlendType;                                         // 0x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1599[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlendProfile*                         BlendProfile;                                      // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	enum class EAlphaBlendOption                 AlphaBlendOption;                                  // 0x38(0x1)(ConstParm, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_159B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
struct UAnimationStateMachineLibrary_IsStateBlendingOut_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15A3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
struct UAnimationStateMachineLibrary_IsStateBlendingIn_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15AC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
struct UAnimationStateMachineLibrary_GetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class FName                                  ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15BB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15C1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_15C9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_15CD[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_15D4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_15DA[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
struct UAnimExecutionContextLibrary_GetDeltaTime_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_160E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
struct UAnimExecutionContextLibrary_GetCurrentWeight_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1610[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
struct UAnimExecutionContextLibrary_GetAnimNodeReference_Params
{
public:
	class UAnimInstance*                         Instance;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1618[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNodeReference                    ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
struct UAnimExecutionContextLibrary_GetAnimInstance_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
struct UAnimExecutionContextLibrary_ConvertToUpdateContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1629[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimUpdateContext                    ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
struct UAnimExecutionContextLibrary_ConvertToPoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_162F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimPoseContext                      ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
struct UAnimExecutionContextLibrary_ConvertToInitializationContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1631[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimInitializationContext            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
struct UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1636[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimComponentSpacePoseContext        ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
struct UBlendSpacePlayerLibrary_SnapToPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_164E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bReset;                                            // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1657[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
struct UBlendSpacePlayerLibrary_SetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1664[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
struct UBlendSpacePlayerLibrary_SetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x10(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_166D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
struct UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	float                                        BlendTime;                                         // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_167C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
struct UBlendSpacePlayerLibrary_SetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
struct UBlendSpacePlayerLibrary_GetStartPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_168F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
struct UBlendSpacePlayerLibrary_GetPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
struct UBlendSpacePlayerLibrary_GetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_169A[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
struct UBlendSpacePlayerLibrary_GetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_16B1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
struct UBlendSpacePlayerLibrary_GetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlendSpace*                           ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_16BE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_16CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
public:
	struct FVector                               RootPos;                                           // 0x0(0x18)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               JointPos;                                          // 0x18(0x18)(Edit, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               EndPos;                                            // 0x30(0x18)(Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               JointTarget;                                       // 0x48(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Effector;                                          // 0x60(0x18)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               OutJointPos;                                       // 0x78(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               OutEndPos;                                         // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowStretching;                                  // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1703[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartStretchRatio;                                 // 0xAC(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxStretchScale;                                   // 0xB0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1705[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        RangeOutMinX;                                      // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxX;                                      // 0x10(0x4)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMinY;                                      // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxY;                                      // 0x18(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMinZ;                                      // 0x1C(0x4)(Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxZ;                                      // 0x20(0x4)(ConstParm, ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1728[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x28(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	float                                        RangeOutMin;                                       // 0x4(0x4)(Edit, ConstParm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMax;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x120 (0x120 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UKismetAnimationLibrary_K2_LookAt_Params
{
public:
	struct FTransform                            CurrentTransform;                                  // 0x0(0x60)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector                               TargetPosition;                                    // 0x60(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector                               LookAtVector;                                      // 0x78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseUpVector;                                      // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_175A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               UpVector;                                          // 0x98(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        ClampConeInDegree;                                 // 0xB0(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_175C[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0xC0(0x60)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params
{
public:
	bool                                         bLog;                                              // 0x0(0x1)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1765[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                LogPrefix;                                         // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1767[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneNameA;                                 // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpaceA;                                      // 0x10(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1778[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SocketOrBoneNameB;                                 // 0x14(0x8)(EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpaceB;                                      // 0x1C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRemapRange;                                       // 0x1D(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_177A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InRangeMin;                                        // 0x20(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        InRangeMax;                                        // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        OutRangeMin;                                       // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        OutRangeMax;                                       // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x30(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_177D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneNameFrom;                              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  SocketOrBoneNameTo;                                // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_17AA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                Component;                                         // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneName;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ReferenceSocketOrBone;                             // 0x18(0x8)(ExportObject, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpace;                                       // 0x20(0x1)(Edit, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_17AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetInBoneSpace;                                 // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPositionHistory                      History;                                           // 0x40(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumberOfSamples;                                   // 0x70(0x4)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMin;                                       // 0x74(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMax;                                       // 0x78(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEasingFuncType                   EasingType;                                        // 0x7C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x80(0x88)(Edit, ConstParm, ExportObject, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x108(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_17B1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_17B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FPositionHistory                      History;                                           // 0x20(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumberOfSamples;                                   // 0x50(0x4)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMin;                                       // 0x54(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMax;                                       // 0x58(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x5C(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
struct UKismetAnimationLibrary_CalculateDirection_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	struct FRotator                              BaseRotation;                                      // 0x18(0x18)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x30(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_17BD[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
struct ULayeredBoneBlendLibrary_SetBlendMask_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PoseIndex;                                         // 0x20(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  BlendMaskName;                                     // 0x24(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_17D6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
struct ULayeredBoneBlendLibrary_GetNumPoses_Params
{
public:
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_17E8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
struct ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_17EF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
struct ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_17F6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
struct ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_17FD[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
struct ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FLinkedAnimGraphReference             LinkedAnimGraph;                                   // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1808[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1810[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinkedAnimGraphReference             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bInterrupted;                                      // 0x8(0x1)(BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_181F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bInterrupted;                                      // 0x8(0x1)(BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1825[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComponent;                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UAnimMontage*                          MontageToPlay;                                     // 0x8(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        StartingPosition;                                  // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  StartingSection;                                   // 0x18(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPlayMontageCallbackProxy*             ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
struct USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        BlendTime;                                         // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1845[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
struct USequenceEvaluatorLibrary_SetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
struct USequenceEvaluatorLibrary_SetExplicitTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_184E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
struct USequenceEvaluatorLibrary_GetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
struct USequenceEvaluatorLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1856[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_185F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1865[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
struct USequenceEvaluatorLibrary_AdvanceTime_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1872[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x28(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
struct USequencePlayerLibrary_SetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StartPosition;                                     // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_187C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
struct USequencePlayerLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        BlendTime;                                         // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1885[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
struct USequencePlayerLibrary_SetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
struct USequencePlayerLibrary_SetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1893[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
struct USequencePlayerLibrary_SetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1899[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
struct USequencePlayerLibrary_GetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_189D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
struct USequencePlayerLibrary_GetSequencePure_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
struct USequencePlayerLibrary_GetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     SequenceBase;                                      // 0x10(0x8)(Edit, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
struct USequencePlayerLibrary_GetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18B3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
struct USequencePlayerLibrary_GetLoopAnimation_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18BC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
struct USequencePlayerLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18C1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
struct USequencePlayerLibrary_ConvertToSequencePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_18C4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
struct USequencePlayerLibrary_ConvertToSequencePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_18C9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
struct USequencePlayerLibrary_ComputePlayRateFromDuration_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Duration;                                          // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	float                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
struct USkeletalControlLibrary_SetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18D8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
struct USkeletalControlLibrary_GetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18DD[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
struct USkeletalControlLibrary_ConvertToSkeletalControlPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x10(0x10)(ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_18DF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
struct USkeletalControlLibrary_ConvertToSkeletalControl_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_18E4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


