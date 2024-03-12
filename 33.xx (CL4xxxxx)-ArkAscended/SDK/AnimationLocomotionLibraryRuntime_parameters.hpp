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
	struct FVector                               Velocity;                                          // 0x0(0x18)(Config, EditConst, GlobalConfig)
	bool                                         bUseSeparateBrakingFriction;                       // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BrakingFriction;                                   // 0x1C(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GroundFriction;                                    // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BrakingFrictionFactor;                             // 0x24(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BrakingDecelerationWalking;                        // 0x28(0x4)(Edit, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5E3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
struct UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params
{
public:
	struct FVector                               Acceleration;                                      // 0x0(0x18)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	struct FVector                               Velocity;                                          // 0x18(0x18)(Config, EditConst, GlobalConfig)
	float                                        GroundFriction;                                    // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5EF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
struct UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        SpeedToMatch;                                      // 0x10(0x4)(Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5FE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PlayRateClamp;                                     // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x28(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
struct UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DistanceToTarget;                                  // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  DistanceCurveName;                                 // 0x14(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_60C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
struct UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DistanceTraveled;                                  // 0x20(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  DistanceCurveName;                                 // 0x24(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_617[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PlayRateClamp;                                     // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x40(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


