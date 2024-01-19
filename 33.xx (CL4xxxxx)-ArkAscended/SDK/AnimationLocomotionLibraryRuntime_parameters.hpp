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
	struct FVector                               Velocity;                                          // 0x0(0x18)(Edit, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         bUseSeparateBrakingFriction;                       // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_149C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BrakingFriction;                                   // 0x1C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	float                                        GroundFriction;                                    // 0x20(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	float                                        BrakingFrictionFactor;                             // 0x24(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	float                                        BrakingDecelerationWalking;                        // 0x28(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_14A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
struct UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params
{
public:
	struct FVector                               Acceleration;                                      // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	struct FVector                               Velocity;                                          // 0x18(0x18)(Edit, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        GroundFriction;                                    // 0x30(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14AA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
struct UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SpeedToMatch;                                      // 0x10(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PlayRateClamp;                                     // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x28(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
struct UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        DistanceToTarget;                                  // 0x10(0x4)(Edit, ConstParm, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FName                                  DistanceCurveName;                                 // 0x14(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14BE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x20(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
struct UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        DistanceTraveled;                                  // 0x20(0x4)(ExportObject, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FName                                  DistanceCurveName;                                 // 0x24(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             PlayRateClamp;                                     // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x40(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


