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

// 0x48 (0x48 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
struct UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         bUseSeparateBrakingFriction;                       // 0x18(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_C68[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BrakingFriction;                                   // 0x1C(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        GroundFriction;                                    // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        BrakingFrictionFactor;                             // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        BrakingDecelerationWalking;                        // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_C6A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
struct UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params
{
public:
	struct FVector                               Acceleration;                                      // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	struct FVector                               Velocity;                                          // 0x18(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        GroundFriction;                                    // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_C96[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
struct UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpeedToMatch;                                      // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_CA8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PlayRateClamp;                                     // 0x18(0x10)(ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x28(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
struct UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DistanceToTarget;                                  // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class FName                                  DistanceCurveName;                                 // 0x14(0x8)(ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_CB2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x20(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
struct UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DistanceTraveled;                                  // 0x20(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class FName                                  DistanceCurveName;                                 // 0x24(0x8)(ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_CC7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PlayRateClamp;                                     // 0x30(0x10)(ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x40(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


