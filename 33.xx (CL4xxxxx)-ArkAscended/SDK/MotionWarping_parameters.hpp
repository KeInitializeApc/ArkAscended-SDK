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

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
struct UAnimNotifyState_MotionWarping_OnWarpUpdate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
struct UAnimNotifyState_MotionWarping_OnWarpEnd_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
struct UAnimNotifyState_MotionWarping_OnWarpBegin_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
struct UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
struct UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
struct UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
struct UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        StartTime;                                         // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x14(0x4)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class URootMotionModifier*                   ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
struct UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	TArray<struct FMotionWarpingWindowData>      OutWindows;                                        // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
struct UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	class FName                                  WarpTargetName;                                    // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FMotionWarpingWindowData>      OutWindows;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
struct UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        StartTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0xC(0x4)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
struct UMotionWarpingComponent_RemoveWarpTarget_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_237[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               TargetLocation;                                    // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              TargetRotation;                                    // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               TargetLocation;                                    // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	class USceneComponent*                       Component;                                         // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  BoneName;                                          // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	bool                                         bFollowComponent;                                  // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_23F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
struct UMotionWarpingComponent_AddOrUpdateWarpTarget_Params
{
public:
	struct FMotionWarpingTarget                  WarpTarget;                                        // 0x0(0x50)(Edit, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
struct URootMotionModifier_Scale_AddRootMotionModifierScale_Params
{
public:
	class UMotionWarpingComponent*               InMotionWarpingComp;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     InAnimation;                                       // 0x8(0x8)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        InStartTime;                                       // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        InEndTime;                                         // 0x14(0x4)(Edit, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               InScale;                                           // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class URootMotionModifier_Scale*             ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
struct URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params
{
public:
	class UMotionWarpingComponent*               InMotionWarpingComp;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UAnimSequenceBase*                     InAnimation;                                       // 0x8(0x8)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        InStartTime;                                       // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        InEndTime;                                         // 0x14(0x4)(Edit, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  InWarpTargetName;                                  // 0x18(0x8)(Edit, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EWarpPointAnimProvider            InWarpPointAnimProvider;                           // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_273[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InWarpPointAnimTransform;                          // 0x30(0x60)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  InWarpPointAnimBoneName;                           // 0x90(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bInWarpTranslation;                                // 0x98(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bInIgnoreZAxis;                                    // 0x99(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bInWarpRotation;                                   // 0x9A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EMotionWarpRotationType           InRotationType;                                    // 0x9B(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        InWarpRotationTimeMultiplier;                      // 0x9C(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class URootMotionModifier_SkewWarp*          ReturnValue;                                       // 0xA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_275[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


