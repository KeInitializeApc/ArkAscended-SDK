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
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
struct UBlendSpaceLibrary_GetPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
struct UBlendSpaceLibrary_GetFilteredPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
struct UBlendSpaceLibrary_ConvertToBlendSpacePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x10(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F1A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
struct UBlendSpaceLibrary_ConvertToBlendSpace_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F20[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpaceReference                  ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
struct UAnimationStateMachineLibrary_SetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	class FName                                  TargetState;                                       // 0x20(0x8)(Edit, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Duration;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	enum class ETransitionLogicType              BlendType;                                         // 0x2C(0x1)(BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F30[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlendProfile*                         BlendProfile;                                      // 0x30(0x8)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	enum class EAlphaBlendOption                 AlphaBlendOption;                                  // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F33[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
struct UAnimationStateMachineLibrary_IsStateBlendingOut_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F3F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
struct UAnimationStateMachineLibrary_IsStateBlendingIn_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F4F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
struct UAnimationStateMachineLibrary_GetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	class FName                                  ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	float                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F65[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	float                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F6C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F74[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F7B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F83[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1F86[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
struct UAnimExecutionContextLibrary_GetDeltaTime_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F96[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
struct UAnimExecutionContextLibrary_GetCurrentWeight_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F9E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
struct UAnimExecutionContextLibrary_GetAnimNodeReference_Params
{
public:
	class UAnimInstance*                         Instance;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1FAF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNodeReference                    ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
struct UAnimExecutionContextLibrary_GetAnimInstance_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
struct UAnimExecutionContextLibrary_ConvertToUpdateContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1FC3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimUpdateContext                    ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
struct UAnimExecutionContextLibrary_ConvertToPoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1FDA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimPoseContext                      ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
struct UAnimExecutionContextLibrary_ConvertToInitializationContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1FE3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimInitializationContext            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
struct UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1FE8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimComponentSpacePoseContext        ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
struct UBlendSpacePlayerLibrary_SnapToPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FFF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReset;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_202B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
struct UBlendSpacePlayerLibrary_SetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2033[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
struct UBlendSpacePlayerLibrary_SetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2041[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
struct UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x20(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	float                                        BlendTime;                                         // 0x28(0x4)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_20AF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
struct UBlendSpacePlayerLibrary_SetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x10(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
struct UBlendSpacePlayerLibrary_GetStartPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20D2[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
struct UBlendSpacePlayerLibrary_GetPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
struct UBlendSpacePlayerLibrary_GetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20D9[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
struct UBlendSpacePlayerLibrary_GetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20DB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
struct UBlendSpacePlayerLibrary_GetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UBlendSpace*                           ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_20E1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_20E7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
public:
	struct FVector                               RootPos;                                           // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               JointPos;                                          // 0x18(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               EndPos;                                            // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               JointTarget;                                       // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Effector;                                          // 0x60(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               OutJointPos;                                       // 0x78(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               OutEndPos;                                         // 0x90(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowStretching;                                  // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartStretchRatio;                                 // 0xAC(0x4)(BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxStretchScale;                                   // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20FF[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0x8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        RangeOutMinX;                                      // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxX;                                      // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RangeOutMinY;                                      // 0x14(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxY;                                      // 0x18(0x4)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RangeOutMinZ;                                      // 0x1C(0x4)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RangeOutMaxZ;                                      // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2105[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x28(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	float                                        RangeOutMin;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RangeOutMax;                                       // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x120 (0x120 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UKismetAnimationLibrary_K2_LookAt_Params
{
public:
	struct FTransform                            CurrentTransform;                                  // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               TargetPosition;                                    // 0x60(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVector                               LookAtVector;                                      // 0x78(0x18)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseUpVector;                                      // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2114[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               UpVector;                                          // 0x98(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	float                                        ClampConeInDegree;                                 // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2115[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0xC0(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params
{
public:
	bool                                         bLog;                                              // 0x0(0x1)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2117[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                LogPrefix;                                         // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2119[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneNameA;                                 // 0x8(0x8)(ConstParm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpaceA;                                      // 0x10(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2143[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SocketOrBoneNameB;                                 // 0x14(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpaceB;                                      // 0x1C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRemapRange;                                       // 0x1D(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2145[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InRangeMin;                                        // 0x20(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        InRangeMax;                                        // 0x24(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        OutRangeMin;                                       // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        OutRangeMax;                                       // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2146[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneNameFrom;                              // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  SocketOrBoneNameTo;                                // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2157[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMeshComponent*                Component;                                         // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  SocketOrBoneName;                                  // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ReferenceSocketOrBone;                             // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ERelativeTransformSpace           SocketSpace;                                       // 0x20(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2159[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetInBoneSpace;                                 // 0x28(0x18)(ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPositionHistory                      History;                                           // 0x40(0x30)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberOfSamples;                                   // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        VelocityMin;                                       // 0x74(0x4)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        VelocityMax;                                       // 0x78(0x4)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EEasingFuncType                   EasingType;                                        // 0x7C(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_215A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x80(0x88)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x108(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_215B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_216F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FPositionHistory                      History;                                           // 0x20(0x30)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberOfSamples;                                   // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        VelocityMin;                                       // 0x54(0x4)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        VelocityMax;                                       // 0x58(0x4)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x5C(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
struct UKismetAnimationLibrary_CalculateDirection_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FRotator                              BaseRotation;                                      // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2176[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
struct ULayeredBoneBlendLibrary_SetBlendMask_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PoseIndex;                                         // 0x20(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BlendMaskName;                                     // 0x24(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2194[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
struct ULayeredBoneBlendLibrary_GetNumPoses_Params
{
public:
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2199[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
struct ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_219D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
struct ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_21A5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
struct ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_21A8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
struct ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FLinkedAnimGraphReference             LinkedAnimGraph;                                   // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_21B0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_21BA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinkedAnimGraphReference             ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_21D3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_21D8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComponent;                           // 0x0(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UAnimMontage*                          MontageToPlay;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        StartingPosition;                                  // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  StartingSection;                                   // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPlayMontageCallbackProxy*             ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
struct USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        BlendTime;                                         // 0x28(0x4)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_21EF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
struct USequenceEvaluatorLibrary_SetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
struct USequenceEvaluatorLibrary_SetExplicitTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2209[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
struct USequenceEvaluatorLibrary_GetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
struct USequenceEvaluatorLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2214[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2216[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2219[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
struct USequenceEvaluatorLibrary_AdvanceTime_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x20(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_221F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x28(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
struct USequencePlayerLibrary_SetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartPosition;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2230[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
struct USequencePlayerLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        BlendTime;                                         // 0x28(0x4)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2234[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
struct USequencePlayerLibrary_SetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
struct USequencePlayerLibrary_SetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_223E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
struct USequencePlayerLibrary_SetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2244[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
struct USequencePlayerLibrary_GetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2247[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
struct USequencePlayerLibrary_GetSequencePure_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
struct USequencePlayerLibrary_GetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     SequenceBase;                                      // 0x10(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
struct USequencePlayerLibrary_GetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_225A[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
struct USequencePlayerLibrary_GetLoopAnimation_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_225E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
struct USequencePlayerLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2264[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
struct USequencePlayerLibrary_ConvertToSequencePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_226B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
struct USequencePlayerLibrary_ConvertToSequencePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_226E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
struct USequencePlayerLibrary_ComputePlayRateFromDuration_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Duration;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	float                                        ReturnValue;                                       // 0x14(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
struct USkeletalControlLibrary_SetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_227B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
struct USkeletalControlLibrary_GetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_227E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
struct USkeletalControlLibrary_ConvertToSkeletalControlPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2282[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
struct USkeletalControlLibrary_ConvertToSkeletalControl_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2286[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


