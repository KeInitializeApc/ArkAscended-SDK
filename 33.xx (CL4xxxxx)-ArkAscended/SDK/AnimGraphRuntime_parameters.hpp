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
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
struct UBlendSpaceLibrary_GetPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
struct UBlendSpaceLibrary_GetFilteredPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
struct UBlendSpaceLibrary_ConvertToBlendSpacePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x10(0x10)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2495[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
struct UBlendSpaceLibrary_ConvertToBlendSpace_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_249B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpaceReference                  ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
struct UAnimationStateMachineLibrary_SetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	class FName                                  TargetState;                                       // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Duration;                                          // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	enum class ETransitionLogicType              BlendType;                                         // 0x2C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24B4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlendProfile*                         BlendProfile;                                      // 0x30(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	enum class EAlphaBlendOption                 AlphaBlendOption;                                  // 0x38(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24B9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
struct UAnimationStateMachineLibrary_IsStateBlendingOut_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24C0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
struct UAnimationStateMachineLibrary_IsStateBlendingIn_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24C7[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
struct UAnimationStateMachineLibrary_GetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	class FName                                  ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24CB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24CF[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_24D8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_24E5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_24EC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_24EE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
struct UAnimExecutionContextLibrary_GetDeltaTime_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24F8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
struct UAnimExecutionContextLibrary_GetCurrentWeight_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24FB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
struct UAnimExecutionContextLibrary_GetAnimNodeReference_Params
{
public:
	class UAnimInstance*                         Instance;                                          // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_24FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNodeReference                    ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
struct UAnimExecutionContextLibrary_GetAnimInstance_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
struct UAnimExecutionContextLibrary_ConvertToUpdateContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2505[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimUpdateContext                    ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
struct UAnimExecutionContextLibrary_ConvertToPoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_250A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimPoseContext                      ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
struct UAnimExecutionContextLibrary_ConvertToInitializationContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2511[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimInitializationContext            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
struct UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2513[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimComponentSpacePoseContext        ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
struct UBlendSpacePlayerLibrary_SnapToPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_252B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bReset;                                            // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_252E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
struct UBlendSpacePlayerLibrary_SetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2530[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
struct UBlendSpacePlayerLibrary_SetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x10(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2535[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
struct UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x20(0x8)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	float                                        BlendTime;                                         // 0x28(0x4)(Edit, EditFixedSize, OutParm, EditConst, SubobjectReference)
	uint8                                        Pad_253C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
struct UBlendSpacePlayerLibrary_SetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x10(0x8)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
struct UBlendSpacePlayerLibrary_GetStartPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2546[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
struct UBlendSpacePlayerLibrary_GetPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
struct UBlendSpacePlayerLibrary_GetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_254E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
struct UBlendSpacePlayerLibrary_GetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2552[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
struct UBlendSpacePlayerLibrary_GetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UBlendSpace*                           ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_255E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2567[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
public:
	struct FVector                               RootPos;                                           // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               JointPos;                                          // 0x18(0x18)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               EndPos;                                            // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               JointTarget;                                       // 0x48(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Effector;                                          // 0x60(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               OutJointPos;                                       // 0x78(0x18)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               OutEndPos;                                         // 0x90(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowStretching;                                  // 0xA8(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2585[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartStretchRatio;                                 // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxStretchScale;                                   // 0xB0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2586[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        Z;                                                 // 0x8(0x4)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	float                                        RangeOutMinX;                                      // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxX;                                      // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMinY;                                      // 0x14(0x4)(ExportObject, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxY;                                      // 0x18(0x4)(Edit, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMinZ;                                      // 0x1C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxZ;                                      // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_258B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x28(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        RangeOutMin;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RangeOutMax;                                       // 0x8(0x4)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x120 (0x120 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UKismetAnimationLibrary_K2_LookAt_Params
{
public:
	struct FTransform                            CurrentTransform;                                  // 0x0(0x60)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               TargetPosition;                                    // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector                               LookAtVector;                                      // 0x78(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseUpVector;                                      // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_259A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               UpVector;                                          // 0x98(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ClampConeInDegree;                                 // 0xB0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_259B[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0xC0(0x60)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params
{
public:
	bool                                         bLog;                                              // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25A7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                LogPrefix;                                         // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25A9[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneNameA;                                 // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpaceA;                                      // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SocketOrBoneNameB;                                 // 0x14(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpaceB;                                      // 0x1C(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRemapRange;                                       // 0x1D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InRangeMin;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InRangeMax;                                        // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutRangeMin;                                       // 0x28(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutRangeMax;                                       // 0x2C(0x4)(Edit, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x30(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25C1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneNameFrom;                              // 0x8(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  SocketOrBoneNameTo;                                // 0x10(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25D1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                Component;                                         // 0x8(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneName;                                  // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ReferenceSocketOrBone;                             // 0x18(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpace;                                       // 0x20(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetInBoneSpace;                                 // 0x28(0x18)(Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPositionHistory                      History;                                           // 0x40(0x30)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberOfSamples;                                   // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMin;                                       // 0x74(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMax;                                       // 0x78(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EEasingFuncType                   EasingType;                                        // 0x7C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x80(0x88)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x108(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25D7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FPositionHistory                      History;                                           // 0x20(0x30)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberOfSamples;                                   // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMin;                                       // 0x54(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VelocityMax;                                       // 0x58(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x5C(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
struct UKismetAnimationLibrary_CalculateDirection_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(Config, EditConst, GlobalConfig)
	struct FRotator                              BaseRotation;                                      // 0x18(0x18)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x30(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25E6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
struct ULayeredBoneBlendLibrary_SetBlendMask_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PoseIndex;                                         // 0x20(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  BlendMaskName;                                     // 0x24(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
struct ULayeredBoneBlendLibrary_GetNumPoses_Params
{
public:
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_25F6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
struct ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_25F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
struct ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2603[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
struct ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2607[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
struct ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FLinkedAnimGraphReference             LinkedAnimGraph;                                   // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_260A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_260D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinkedAnimGraphReference             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bInterrupted;                                      // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2615[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bInterrupted;                                      // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2619[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComponent;                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UAnimMontage*                          MontageToPlay;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        StartingPosition;                                  // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  StartingSection;                                   // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UPlayMontageCallbackProxy*             ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
struct USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        BlendTime;                                         // 0x28(0x4)(Edit, EditFixedSize, OutParm, EditConst, SubobjectReference)
	uint8                                        Pad_2622[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
struct USequenceEvaluatorLibrary_SetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
struct USequenceEvaluatorLibrary_SetExplicitTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_262C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
struct USequenceEvaluatorLibrary_GetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
struct USequenceEvaluatorLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2630[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2632[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2639[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
struct USequenceEvaluatorLibrary_AdvanceTime_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_263B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x28(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
struct USequencePlayerLibrary_SetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        StartPosition;                                     // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2655[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
struct USequencePlayerLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        BlendTime;                                         // 0x28(0x4)(Edit, EditFixedSize, OutParm, EditConst, SubobjectReference)
	uint8                                        Pad_2658[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
struct USequencePlayerLibrary_SetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
struct USequencePlayerLibrary_SetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_265E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
struct USequencePlayerLibrary_SetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2662[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
struct USequencePlayerLibrary_GetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2664[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
struct USequencePlayerLibrary_GetSequencePure_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
struct USequencePlayerLibrary_GetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     SequenceBase;                                      // 0x10(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
struct USequencePlayerLibrary_GetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_266E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
struct USequencePlayerLibrary_GetLoopAnimation_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2671[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
struct USequencePlayerLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2673[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
struct USequencePlayerLibrary_ConvertToSequencePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2679[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
struct USequencePlayerLibrary_ConvertToSequencePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_267B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
struct USequencePlayerLibrary_ComputePlayRateFromDuration_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        Duration;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	float                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
struct USkeletalControlLibrary_SetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x10(0x4)(Edit, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2689[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
struct USkeletalControlLibrary_GetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_268B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
struct USkeletalControlLibrary_ConvertToSkeletalControlPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x10(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_268E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
struct USkeletalControlLibrary_ConvertToSkeletalControl_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2691[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


