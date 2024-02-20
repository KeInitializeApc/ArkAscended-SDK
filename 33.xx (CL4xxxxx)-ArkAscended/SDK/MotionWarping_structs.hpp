#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERootMotionModifierState : uint8
{
	Waiting                        = 0,
	Active                         = 1,
	MarkedForRemoval               = 2,
	Disabled                       = 3,
	ERootMotionModifierState_MAX   = 4,
};

enum class EMotionWarpRotationType : uint8
{
	Default                        = 0,
	Facing                         = 1,
	EMotionWarpRotationType_MAX    = 2,
};

enum class EWarpPointAnimProvider : uint8
{
	None                           = 0,
	Static                         = 1,
	Bone                           = 2,
	EWarpPointAnimProvider_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MotionWarping.MotionWarpingWindowData
struct FMotionWarpingWindowData
{
public:
	class UAnimNotifyState_MotionWarping*        AnimNotify;                                        // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst)
	float                                        StartTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0xC(0x4)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MotionWarping.MotionWarpingUpdateContext
struct FMotionWarpingUpdateContext
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x0(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        PreviousPosition;                                  // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentPosition;                                   // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        DeltaSeconds;                                      // 0x18(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MotionWarping.MotionWarpingTarget
struct FMotionWarpingTarget
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  BoneName;                                          // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	bool                                         bFollowComponent;                                  // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_27A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MotionWarping.MotionDeltaTrack
struct FMotionDeltaTrack
{
public:
	TArray<struct FTransform>                    BoneTransformTrack;                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       DeltaTranslationTrack;                             // 0x10(0x10)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRotator>                      DeltaRotationTrack;                                // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               TotalTranslation;                                  // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              TotalRotation;                                     // 0x48(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MotionWarping.MotionDeltaTrackContainer
struct FMotionDeltaTrackContainer
{
public:
	TArray<struct FMotionDeltaTrack>             Tracks;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


